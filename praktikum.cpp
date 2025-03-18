#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct KTP {
 	string nik;
 	string nama;
 	string tempatlahir;
 	string jeniskelamin;
 	string goldarah;
 	string alamat;
 	string rtrw;
 	string keldesa;
 	string kec;
 	string agama;
 	string statuskawin;
 	string pekerjaan;
 	string kewarganegaraan;
 	string berlakuhingga;
};

void inputKTP (KTP &ktp) {
	cout << "Masukkan NIK: ";
	getline(cin, ktp.nik);
	cout << "Masukkan nama: ";
	getline(cin, ktp.nama);
	cout << "Masukkan Tempat/Tanggal Lahir: ";
	getline(cin, ktp.tempatlahir);
	cout << "Masukkan Jenis kelamin: ";
	getline(cin, ktp.jeniskelamin);
	cout << "Masukkan Golongan darah: ";
	getline(cin, ktp.goldarah);
	cout << "Masukkan Alamat: ";
	getline(cin, ktp.alamat);
	cout << "Masukkan  RT/RW: ";
	getline(cin, ktp.rtrw);
	cout << "Masukkan Kelurahan/Desa: ";
	getline(cin, ktp.keldesa);
	cout << "Masukkan Kecamatan: ";
	getline(cin, ktp.kec);
	cout << "Masukkan Agama: ";
	getline(cin, ktp.agama);
	cout << "Masukkan Status Perkawinan: ";
	getline(cin, ktp.statuskawin);
	cout << "Masukkan Pekerjaan: ";
	getline(cin, ktp.pekerjaan);
	cout << "Masukkan Kewarganegaraan: ";
	getline(cin, ktp.kewarganegaraan);
	cout << "Masukkan Berlaku Hingga: ";
	getline(cin, ktp.berlakuhingga);
}

void displayKTP (const KTP &ktp) {
	cout << "\n===========================SIMULASI KTP===========================\n";
	cout << left << setw(20) << "NIK" << ": " << ktp.nik << endl;
	cout << left << setw(20) << "Nama" << ": " << ktp.nama << endl;
	cout << left << setw(20) << "Tempat/Tanggal Lahir" << ": " << ktp.tempatlahir << endl;
	cout << left << setw(20) << "Jenis Kelamin: " << ": " <<  ktp.jeniskelamin<< endl;
	cout << left << setw(20) << "Golongan Darah: " << ": " << ktp.goldarah << endl;
	cout << left << setw(20) << "Alamat: " << ": " << ktp.alamat << endl;
	cout << left << setw(20) << "RT/RW" << ": " << ktp.rtrw << endl;
	cout << left << setw(20) << "Kelurahan/Desa" << ": " << ktp.keldesa << endl;
	cout << left << setw(20) << "Kecamatan: " << ": " << ktp.kec << endl;
	cout << left << setw(20) << "Agama" << ": " << ktp.agama << endl;
	cout << left << setw(20) << "Status Perkawinan" << ": " << ktp.statuskawin << endl;
	cout << left << setw(20) << "Pekerjaan: " << ": " << ktp.pekerjaan << endl;
	cout << left << setw(20) << "Kewarganegaraan: " << ": " << ktp.kewarganegaraan << endl;
	cout << left << setw(20) << "Berlaku Hingga: " << ": " << ktp.berlakuhingga << endl;
	cout << "====================================================================\n";
		
}
	int main(){
		KTP ktp;
		
		cout << "input data KTP\n";
		inputKTP(ktp);
		
		displayKTP(ktp);
		
		return 0;
	}
 
 
