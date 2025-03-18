#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct KEDAI {
 	string nama;
 	int pilihan, jumlah;
 	float harga, total, diskon = 0;
};

void kedaiAYAM (KEDAI &kedai) {
	cout << "=============Menu Ayam==============\n";
	cout << "1. Ayam Goreng = Rp 17000\n";
	cout << "2. Ayam Bakar = Rp 21000\n";
	cout <<"=====================================\n\n";
	
	cout << "input struck pembayaran\n";
	cout << "Masukkan nama: ";
	getline(cin, kedai.nama);
	cout << "Pilih Menu Ayam: ";
	cin >> kedai.pilihan;
	cout << "Jumlah Pesanan Anda: ";
	cin >> kedai.jumlah;
	
	switch(kedai.pilihan){
		case 1:
			kedai.harga = 17000;
			break;
		case 2:
			kedai.harga = 21000;
			break;
		default:
			cout << "Tidak valid";
			exit(1);
	}
	
	kedai.total = kedai.jumlah * kedai.harga;
	if (kedai.total > 45000){
		kedai.diskon = kedai.total * 0.10;
		kedai.total -= kedai.diskon;
	}
}

void DisplayTampilan (const KEDAI &kedai) {
	cout << "\n\n====================================\n";
	cout << "==========STRUK PEMBAYARAN==========\n";
	cout << "====================================\n";
	cout << left << setw(20) << "Nama " << ": " << kedai.nama << endl;
	cout << left << setw(20) << "Menu " << ": " << (kedai.pilihan == 1 ? "Ayam Goreng" :"Ayam Bakar") << endl;
	cout << left << setw(20) << "Jumlah " << ": " << kedai.jumlah << endl;
	cout << left << setw(20) << "Harga Satuan" << ": " << fixed << setprecision(2) << kedai.harga << endl;
	cout << left << setw(20) << "Subtotal" << ": " << fixed << setprecision(2) << (kedai.jumlah * kedai.harga) << endl;
	cout << left << setw(20) << "Diskon" << ": " << fixed << setprecision(2) << kedai.diskon << endl;
	cout << left << setw(20) << "Total Bayar" << ": " << fixed << setprecision(2) << kedai.total << endl;
	cout << "===================================\n";
	cout << "===================================\n";
		
}
	int main(){
		KEDAI kedai;
		
		kedaiAYAM(kedai);
		
		DisplayTampilan(kedai);
		
		return 0;
	}
 
 
