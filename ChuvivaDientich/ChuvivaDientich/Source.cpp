#include"iostream"
#include"Math.h"
using namespace std;
const float pi = 3.1416;

void chuviTron() {
	cout << "Nhap ban kinh: ";
	cin >> int r;

	cout << "Chu vi la: " + r * 2 * pi;
}

void dientichTron() {
	cout << "Nhap ban kinh: ";
	cin >> int r;

	cout << "Chu vi la: " + r * r * pi;
}
int main()
{
	int ch;
	cout << "Tinh gi? (P vuong,S vuong,P chu nhat,S chu nhat,P tron,S tron) ";
	cin >> ch;
	switch (ch)
	{
	case 1:int a;
		cout << "\n Nhap canh hinh vuong:";
		cin >> a;
		return a * 4;

		break;
	case 2:
		int a;
		cout << "\n Nhap canh hinh vuong:";
		cin >> a;
		return a * a;
		break;
	case 3:
		int x;int y;
		cout<<"nhap chieu rong: "cin>>x;
		cout<<"nhap chieu dai: "cin>>y;
		cout<<"Chu vi hcn : "(x+y)*2;
		break;
	case 4:
		int x;int y;
		cout<<"nhap chieu rong: "cin>>x;
		cout<<"nhap chieu dai: "cin>>y;
		cout<<"Dien tich hcn :" x*y;
		break;
	case 5:
		chuviTron();
		break;
	case 6:
		dientichTron();
		break;
	default:
		//nothing
		break;
	}
	return 0;
}


