#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int data[8] = {8, 27, 9, 20, 10, 1997, 1996, 100};
	int cari;
	int flag = 0;//flag = penanda
	cout<<"Masukkan Data yg Ingin Di cari = ";
	cin>>cari;
	for(int i=0; i<8; i++)
	{
		if(data[i]==cari) flag=1;
	}
	if(flag==1)
	{
		cout<<"Data Ada !\n";
	}
	else
	{
		cout<<"Data Tidak Ada !\n";
	}
}
