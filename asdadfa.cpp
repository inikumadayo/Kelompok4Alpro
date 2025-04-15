#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

struct ktp{
	char nik[20];
	string nama;
	string tempat_tanggal_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agamaa;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};
void clearinputbuffer(){
	cin.ignore(numeric_limits<streamsize>::maks(),'\n');
}

void inputKTP(KTP &ktp){
	cout<<"masukan nik :";
	cin>>ktp.nik;
	clearinputbuffer();
	
	cout<<"masukan nama:";
	getline(cin,ktp.nama);
	cout<<"masukan tempat/tanggal lahir:";
	getline(cin,ktp.tempat_tanngal_lahir);
	cout<<"masukan jenis kelamin:";
	getline(cin,ktp.jenis_kelamin);
	cout<<"masukan golongan darah a/b/ab/o :";
	getline(cin,ktp.gol_darah);
	clearinputbuffer();
	
	cout<<"masukan alamat:";
	getline(cin,ktp.alamat);
	cout<<"masukan rt/rw :";
	getline(cin,ktp.rt_rw);
	cout<<"masukan kelurahan/desa";
	getline(cin,ktp.kel_desa);
	cout<<"masukan kecamatan :";
    getline(cin,ktp.kecamatan);
    cout<<"masukan agama :";
    getline(cin,ktp.agama);
    cout<<"masukan status perkawinan:";
    getline(cin,ktp.status_perkawinan);
    cout<<"masukan pekerjaan";
    getline(cin,ktp.pekerjaan);
    cout<<"masukan kewarganegaraan:";
    getline(cin,ktp.kewarganegaraan);
    cout<<"masukan berlaku hingga;";
    getline(cin,ktp.berlaku_hingga);
    
}

void displayKTP(const KTP &ktp){
	cout<<"\n============ktp simulasi ======================\n";
	cout<<left<<setw(20)<<" nik "<<ktp.nik<<endl;
	cout<<left<<setw(20)<<" nama "<<ktp.nama<<endl;
	cout<<left<<setw(20)<<" tempat "<<ktp.tempat_tanggal_lahir<<endl;
	cout<<left<<setw(20)<<" alamat "<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<" kecamatan "<<ktp.kecamatan<<endl;
	cout<<left<<setw(20)<<" kel desa "<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<" jenis kelamin "<<ktp.jenis_kelamin<<endl;
	cout<<left<<setw(20)<<" gol darah "<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<" rt / rw "<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<" status perkawinan "<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<" pekerjaan "<<ktp.pekerjaan<<endl;
	cout<<left<<setw(20)<<" berlaku hingga "<<ktp.berlaku_hingga<<endl;
	cout<<left<<setw(20)<<" agama "<<ktp.agamaa<<endl;
	
	}
	
void editktp(KTP&ktp){
	int pilihan;
	do{
		cout<<"menu edit ktp"<<endl;
		cout<<"1.nama\n";
		cout<<"1.nik\n";
		cout<<"1.tempat\n";
		cout<<"1.alamat\n";
		cout<<"1.kecamatan\n";
		cout<<"1.kel desa\n";
		cout<<"1.jenis kelamin\n";
		cout<<"1.gol darah\n";
		cout<<"1.nama\n";
		cout<<"1.nama\n";
		cout<<"1.nama\n";
		cout<<"1.nama\n";
		cout<<"1.nama\n";
		
	}
}

