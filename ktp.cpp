#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	long long int nik, tanggal, rt, rw, bulan, tahun;
	string nama, tempat, kelamin, alamat, kelurahan, kecamatan, agama, status, pekerjaan, kewarganegaraan, berlaku;

	cout<<"====================Input KTP===================="<<endl;
	cout<<"NIK				: ";cin>>nik; cin.ignore();
	cout<<"Nama				: ";getline(cin,nama);
	cout<<"Tempat lahir			: ";cin>>tempat;
	cout<<"Tanggal lahir			: ";cin>>tanggal;
	cout<<"Bulan lahir			: ";cin>>bulan;
	cout<<"Tahun lahir			: ";cin>>tahun;
	cout<<"Jenis kelamin			: ";cin>>kelamin;
	cout<<"Dusun/Kampung			: ";cin>>alamat;
	cout<<"RT				: ";cin>>rt;
	cout<<"RW				: ";cin>>rw;
	cout<<"Kelurahan/Desa			: ";cin>>kelurahan;
	cout<<"Kecamatan			: ";cin>>kecamatan;
	cout<<"Agama				: ";cin>>agama;cin.ignore();
	cout<<"Status Perkawinan		: ";getline(cin,status);
	cout<<"Pekerjaan			: ";cin>>pekerjaan;
	cout<<"Kewarganegaraan		: ";cin>>kewarganegaraan; cin.ignore();
	cout<<"Berlaku hingga			: ";getline(cin,berlaku);
	cout<<endl;
	system("cls");
	
	cout<<"NIK				: "<<nik<<endl;
	cout<<"Nama				: "<<nama<<endl;
	cout<<"Tempat lahir			: "<<tempat<<endl;
	cout<<"Tanggal lahir			: "<<tanggal<<endl;
	cout<<"Bulan lahir			: "<<bulan<<endl;
	cout<<"Tahun lahir			: "<<tahun<<endl;
	cout<<"Jenis kelamin			: "<<kelamin<<endl;
	cout<<"Dusun/Kampung			: "<<alamat<<endl;
	cout<<"	RT/RW				: "<<rt<<"/"<<rw<<endl;
	cout<<"	Kelurahan/Desa			: "<<kelurahan<<endl;
	cout<<"	Kecamatan			: "<<kecamatan<<endl;
	cout<<"Agama				: "<<agama<<endl;
	cout<<"Status Perkawinan		: "<<status<<endl;
	cout<<"Pekerjaan			: "<<pekerjaan<<endl;
	cout<<"Kewarganegaraan		: "<<kewarganegaraan<<endl;
	cout<<"Berlaku hingga			: "<<berlaku<<endl;
}
