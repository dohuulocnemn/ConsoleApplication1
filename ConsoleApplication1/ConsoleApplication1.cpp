#include<iostream>
using namespace std;
int main()
{
	int sodau, socuoi;
cout << " nhap so dau:";
cin >> sodau;
cout << " nhap so cuoi:";
cin >> socuoi;
cout << "VONG LAP WHILE\M";
while (sodau <= socuoi) // 50 <= 40 ==> False
{
	cout << sodau << " ";
	sodau++;

}


cout << "\nhap so dau:";
cin >> sodau;
cout << "nhap so cuoi:";
cin >> socuoi;
cout << "\nVONG LAP DO WHILE\M";
do
{
	cout << sodau << " ";
	sodau++;
}
while (sodau <= socuoi); // 50<= 40 ==>false
return

	}