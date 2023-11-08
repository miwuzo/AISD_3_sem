#include <iostream>
#include <iso646.h>
using namespace std;

void hanoi(int i, int k, int n)
{
	if (n == 1) {
		cout << "����������� ���� 1 �� ������� " << i << " �� �������� " << k << endl;
	}
	else
	{
		int tmp = 6 - i - k;
		hanoi(i, tmp, n - 1);
		cout << "����������� ���� " << n << " �� ������� " << i << " �� �������� " << k << endl;
		hanoi(tmp, k, n - 1);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int b, c;
	cout << "�� ����� �������� ";
	cin >> b; // �� ����� ��������
	cout << "������� ������ ";
	cin >> c; // ������� ������
	if((c < 1) || (b > 3) || (b < 1))
	{
		cout << "������� ������������ ������";
	}
	else {
		hanoi(1, b, c);
	}
	return 0;
}