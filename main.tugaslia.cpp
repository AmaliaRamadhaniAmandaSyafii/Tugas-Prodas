// Amalia Ramadhani Amanda Syafi'i
// 20051397080
// 2020B


#include <iostream>
#include <conio.h>
/* Membuat Billing Warnet */

using namespace std;
int main(void) 
{
	char nama [20];
	int jam1,menit1,detik1,jam2,menit2,detik2,jumlahdetik,totalbiaya;
	int tarif=5000;
	
	cout<<"Perhitungan Billing Warnet"<<endl;
	cout<<"================================"<<endl;
	cout<<"Tanggal   : 8/10/2020"<<endl;
	cout<<"User Name : Amalia7080"<<endl;
	cout<<"Status    : Shutdown"<<endl;
	cout<<"================================"<<endl;
	cout<<"MULAI\n";
	cout<<"Jam Mulai   : ";cin>>jam1;
	cout<<"Menit Mulai : ";cin>>menit1;
	cout<<"Detik Mulai : ";cin>>detik1;
	cout<<"--------------------------------"<<endl;
	cout<<"SELESAI\n";
	cout<<"Jam Selesai   : ";cin>>jam2;
	cout<<"Menit Selesai : ";cin>>menit2;
	cout<<"Detik Selesai : ";cin>>detik2;
	cout<<"================================"<<endl;
	cout<<endl;
	
	jumlahdetik=((jam2-jam1)*3600)+((menit2-menit1)*60)+(detik2-detik1);
	totalbiaya=jumlahdetik*tarif/3600;
	
	cout<<"Lama Pemakaian : "<<(jam2-jam1)<< "Jam" <<(menit2-menit1)<< "Menit" <<(detik2-detik1)<< "Detik" <<endl;
	cout<<"Total Biaya    : Rp."<<totalbiaya<<endl;
	cout<<"================================"<<endl;
	cout<<"Terima Kasih"<<endl;
	
	
	
	return 0;
}
