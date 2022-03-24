#include <iostream>
#include <iomanip>
using namespace std;

class Bensin{
	public :
	Bensin();
		void pilihan();
		void hitung_uang();
		void hitung_liter();
	private :
		double uang, liter, tampil;
		char pil;
		char ambil;
			double harga, pertamax, pertalite;
};
	Bensin::Bensin()
	{
	harga = 0;
	pertalite = 7000;
	pertamax = 9000;
	}
void Bensin::pilihan(){
	cout<<"Selamat Datang di SPBU Konoha"<<endl;
	cout<<"Beli Berdasarkan : "<<endl;
	cout<<"1. Pertalite "<<endl;
	cout<<"2. Pertamax "<<endl;
	cout<<"Masukkan Pilihan Anda = ";
	cin>>ambil;
	
	if(ambil == '1' || ambil == '2'){
	cout<<"Beli Berdasarkan :"<<endl;
	cout<<"a. Uang"<<endl;
	cout<<"b. Liter"<<endl;
	cout<<"Masukkan Pilihan Pembelian : ";
	cin>> pil;
	
	if(pil == 'a'){
	hitung_uang();
	}
	else if(pil=='b'){
	hitung_liter();
	}
	else{
	system("cls");
	pilihan();
	}
	}
	
	system("cls");
	pilihan();
	}
	
void Bensin::hitung_uang(){
	cout<<"Masukkan Besarnya Uang : ";
	cin>> uang;
	
if(ambil == '1'){
	harga = pertalite;
	}
else if (ambil == '2'){
	harga = pertamax;
	}
	tampil = uang / harga;
	cout<<"Jumlah Bensin yang Dibeli : "<<tampil <<" liter"<<endl;
	system("PAUSE");
	system("cls");
	pilihan();
}
void Bensin::hitung_liter(){
	cout<<"masukkan jumlah liter : ";
	cin>> liter;
	
	if(ambil == '1'){
	harga = pertalite;
	}

	else if (ambil == '2'){
	harga = pertamax;
	}
	tampil = harga * liter;
	cout<<"Uang yang Harus Dibayar : Rp "<<tampil <<".00"<<endl;
	system("PAUSE");
	system("cls");
	pilihan();
	}
	
int main(int argc, char *argv[]){
	Bensin x;
	x.pilihan();
	system("PAUSE");
	return 0;
}
