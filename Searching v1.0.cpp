#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


int sequential()
{
	int c,i,posisi;
	
	int data[10]={10,15,20,25,30,35,40,45,50,55};
		
	cout<<"\n Data yang ingin dicari : ";
	cin>>c;
	i=0;
	posisi=0;

		while(i<19 && data[i]!=c)
		{
			i++;
		}
			if (data[i]!=c)
			{
				cout<<" Maaf data yang dicari tidak ada";
			}
			else if(posisi=i+1)
			cout<<" Ditemukan pada posisi ke "<<posisi;
}
int binary()
{
	int lah;
	int awal, akhir=lah, tengah, p = 0,cari;
	
	int data[10]={10,15,20,25,30,35,40,45,50,55};
		
    awal = 0;
	cout <<"\n Masukkan data yang akan dicari : ";
	cin >> cari;
    while (p == 0 && awal<=akhir){
            tengah = (awal + akhir)/2;
            if(data[tengah] == cari)
            {
                  p = 1;
                  break;
            }
            else if(data[tengah]<cari)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }
	if(p == 1)
        cout<<"\n Data ditemukan pada index ke-"<<tengah+1<<" yaitu : "<<data[tengah]<<endl;
    else
	
       cout<<"\n Data tidak ditemukan\n";

}
int interpolation()
{  
	int data[10]={10,15,20,25,30,35,40,45,50,55};
		
	int cari_data, posisi, awal, akhir, proses;  
 	bool berhenti = false;

		 cout <<"\n Data Yang ingin dicari : ";  
 		cin >> cari_data;
 
 	 	awal = 0;  
 		akhir = 9;  
 		proses = 0;  
  
			 while(berhenti != true)  
			 {  
			  	proses++;  
			  	posisi = (((cari_data-data[awal])*(akhir-awal))/(data[akhir]-data[awal])+awal);  
			  
			  		if(data[posisi] == cari_data)
					{  
			   			cout <<"\n Data " << cari_data << " pada posisi " << posisi <<endl;  
			   			cout <<"\n Proses pencaharian sebanyak " << proses <<endl;  
			   			berhenti = true;  
			  		}  
  					else if(data[posisi] < cari_data) 
					{  
					   awal = posisi + 1;  
  					}  
					else 
					{  
					   cout <<"\n Data " << cari_data << "Tidak ditemukan.\n";  
					   berhenti = true;  
  					}
 			}  
}

main()
{
	int data[10]={10,15,20,25,30,35,40,45,50,55},pil;
	char y;
	system("title Program Searching Elsa Diana Putri");
mulai:
	system("cls");
		
	cout<<" Data : " ;
	for(int i=0;i<10;i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	cout<<"\n 1. Sequential Search ";
	cout<<"\n 2. Binary Search ";
	cout<<"\n 3. Interpolation Search ";
	cout<<"\n 4. Quit ";
	cout<<"\n Your Choice = ";
	cin>>pil;
	
	if(pil==1)
	{
		sequential();
	}
	else if(pil==2)
	{
		binary();
	}
	else if(pil==3)
	{
		interpolation();
	}
	else
	{	
		system("cls");
		cout<<"\n 		Terima Kasih Sudah Menggunakan Program Searching Saya";
		cout<<endl;
		exit(0);
	}
	
	//mengulang
	cout<<"\n\n--------------------------------------------------------------------------------";
		cout<<"\n Apakah Anda Ingin Mengulang? [Y/T] ";
		cin>>y;
	
		
					
					if(y=='Y'|| y== 'y')
					{goto mulai;}
					
					if(y=='T'|| y== 't' )
					{goto selesai;}
					
		selesai:
			cout<<"\n Terima Kasih Sudah Menggunakan Program Searching Saya";

	getch();
}
