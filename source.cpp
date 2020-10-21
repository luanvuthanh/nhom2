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
	return b==0?-999:a/b;
}
int main()
{
	int a, b;
	int kq;
	char phepToan;
	int randA=0+rand() %(100+1-0);
	int randB=0+rand() %(100+1-0);
	
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/,1,2) ";
	cin >> phepToan;
	switch (phepToan)
	{
		
	case '+':
		cout<< tong(a,b);
		break;
	case '-':
		cout<<hieu(a,b);
		break;
	case '*':
		cout << tich(a, b);
		break;
	case '/':
		if (thuong(a,b)==-999)
			cout << "loi chia so 0"
		else
			cout << thuong(a, b);
		break;
	case '1':
		kq= randA+randB;
		if(a+b==kq)
			cout<<"dung"
			else
				cout<<"sai";
		break;
	case '2':
		kq= randA-randB;
		if(a-b==kq)
			cout<<"dung"
			else
				cout<<"sai";
		break;
	default:
		cout << "Chon sai phep toan !";
		break;
	}
	return 0;
}