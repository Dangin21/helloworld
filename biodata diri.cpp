 #include <iostream>
using namespace std;
int main()
{
	cout<<"================================================================"<<endl;
	cout<<"                      BIODATA MAHASISWA                         "<<endl;
	cout<<"================================================================"<<endl;
	
	string nama_panjang;
	string nama_panggilan;
	string npm;
	string tempat_lahir;
	string tanggal_lahir;
	string telepon;
	string alamat;
	
	cout<<"Masukan Data Berikut  :"<<endl<<endl;
	cout<<"Nama panjang          :";
	getline (cin,nama_panjang);
	cout<<"Nama Panggilan        :";
	getline (cin,nama_panggilan);
	cout<<"Npm                   :";
	getline (cin,npm);
	cout<<"Tempat lahir          :";
	getline (cin,tempat_lahir);
	cout<<"Tanggal lahir         :";
	getline (cin,tanggal_lahir);
	cout<<"Telepon               :";
	getline (cin,telepon);
	cout<<"Alamat                :";
	getline (cin,alamat);
	
	cout<<endl;
	cout<<"================================================================"<<endl;
	cout<<"                      BIODATA MAHASISWA                         "<<endl;
	cout<<"================================================================"<<endl;
	
	cout<<"OM SWASTIASU"<<endl;
	
	cout<<"Letme indtroduce my self. My name is" <<nama_panjang<<endl;
	cout<<"But you can call me" <<nama_panggilan<<endl;
	cout<<"My Npm" <<npm<<endl;
	cout<<"I was born in" <<tempat_lahir<<endl; 
	cout<<"and I am 19 years old" <<endl;
	cout<<"I am very glad if you want to invite my house in" <<alamat<<endl;
	cout<<"so don't forget to call me before with the number" <<telepon<<endl;
}
