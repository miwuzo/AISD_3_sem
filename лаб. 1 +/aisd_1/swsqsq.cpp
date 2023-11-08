#include <iostream>
#include <iso646.h>
using namespace std;

void hanoi(int i, int k, int n)
{
	if (n == 1) {
		cout << "Переместить диск 1 со стержня " << i << " на стержень " << k << endl;
	}
	else
	{
		int tmp = 6 - i - k;
		hanoi(i, tmp, n - 1);
		cout << "Переместить диск " << n << " со стержня " << i << " на стержень " << k << endl;
		hanoi(tmp, k, n - 1);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int b, c;
	cout << "на какой стержень ";
	cin >> b; // на какой стержень
	cout << "сколько дисков ";
	cin >> c; // сколько дисков
	if((c < 1) || (b > 3) || (b < 1))
	{
		cout << "введены некорректные данные";
	}
	else {
		hanoi(1, b, c);
	}
	return 0;
}