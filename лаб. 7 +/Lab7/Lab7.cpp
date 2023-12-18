#include <iostream>
#include <vector>
#include <string>

using namespace std;


void findLIS(vector<int> const& arr)
{
    int n = arr.size(); 

    if (n == 0) {
        return; 
    }

    vector<vector<int>> LIS(n, vector<int>{});

    LIS[0].push_back(arr[0]); 

   
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && LIS[j].size() > LIS[i].size())
            {
                LIS[i] = LIS[j];
            }
        }
        LIS[i].push_back(arr[i]); 
    }

   
    cout << "Длина: " << LIS[LIS.size() - 1].size() << endl;

   
    cout << "Максимальная возрастающая подпоследовательность: ";
    for (int i : LIS[LIS.size() - 1]) {
        cout << i << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "rus"); 
    vector<int> arr;

    cout << "Введите элементы последовательности (для выхода -0:) ";

    string num;
    while (true)
    {
        cin >> num;
        if (num == "0") {
            break;
        }
        arr.push_back(stoi(num)); 
    }

    cout << "Исходная последовательность: ";

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " "; 
    }
    cout << endl;

    findLIS(arr);

    cout << endl << endl;

    return 0;
}
