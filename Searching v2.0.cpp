#include<iostream>
#include<conio.h>

using namespace std;

int ar[5];

void menusearching()
{
	system("cls");
		cout<<"-------------------------------------------------------------------------------- \n ";
   		cout<<"    	\t Program Aplikasi Searching Data \n";
   		cout<<"--------------------------------------------------------------------------------"<<endl;
   		cout<<"  [1] Sequence\n";
   		cout<<"  [2] Binary\n";
   		cout<<"  [3] Keluar\n";
   		cout<<"--------------------------------------\n";
   		cout<<" Silahkan Pilih 1/2/3 ?";
}

sequence()
{
	
	int jum,e,t;
	cout<<"Masukkan data yang ingin dicari : ";
	cin>>t;
	for(int i=0; i<jum;i++){
		if(ar[i] == t){
			e=1;
			t=i;
		}
	}
	if(e==1){
		cout << "Data anda telah ditemukan pada data ke "<< t+1 << " dengan nilai "<< ar[t]; 
	}
	else{
		cout << "Data tidak ditemukan.";
	}
}

binary()
{
	int lah;
	int awal, akhir=lah, tengah, p = 0,cari;
    awal = 0;
	cout << "Masukkan data yang akan dicari : ";
	cin >> cari;
    while (p == 0 && awal<=akhir){
            tengah = (awal + akhir)/2;
            if(ar[tengah] == cari)
            {
                  p = 1;
                  break;
            }
            else if(ar[tengah]<cari)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }
	if(p == 1)
        cout<<"\nData ditemukan pada index ke-"<<tengah+1<<" yaitu : "<<ar[tengah]<<endl;
    else
       cout<<"\nData tidak ditemukan\n";
}

main()
{
	int pilihan;
	int pilih;
	int pil;
	int m;
	
	
	int a,i;
	cout<<"-------------------------------------------------------------------------------- \n ";
	cout<<"    	\t Program Aplikasi Searching Data \n";
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout << "\nMasukkan banyak data : ";
	cin >> a;
	
	for(i=0;i<a;i++)
	{
		cout << "Masukkan data ke-"<<i+1<<" : ";
		cin>>ar[i];
	}

	menusearching();
	cin>>pil;
	if(pil==1)
	{
		sequence();
	}
	else if(pil==2)
	{
		binary();
	}
	else
	{
		exit(0);
	}
	getch();
	}

