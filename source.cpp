#include <iostream>
using namespace std;
int tong(int a, int b)
{
	return a+b;
}

int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b)
{
	return a*b;
}
float thuong(int a, int b)
{
	return a/b;
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		return tong(a,b);
		break;
	case '-':
return hieu(a,b);
		break;
	case '*':

		break;
	case '/':
		if (b == 0)
			cout << "loi chia so 0"
		else
			cout << thuong(a, b);
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}