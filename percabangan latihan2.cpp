#include <iostream>
#include <string>
using namespace std;
int main(){
	int belanja, batas_diskon = 1102019, total;
	string status, asal;
	cout<< "program by Dzulfausi"<<endl<<endl;
	cout<< "======================== Selamat Datang di Supermarket Kami ======================="<<endl<<endl;
	cout<< "Anda berkesempatan mendapat diskon besar dalam rangka peringatan kesaktian pancasila\napabila anda memenuhi persyaratan kami"<< endl;
	cout<< "Silahkan masukkan asal anda sesuai dengan KTP anda! (gunakan huruf kecil semua) :";
	cin>> asal;
	cout<< "Masukkan total Belanja Anda! : ";
	cin>> belanja;
	
	again:
	
	cout<<"Masukkan kriteria status Anda dibawah ini dengan memilih abjadnya!"<<endl;
	cout<<" a = telah menikah dan memiliki anak\n b = telah menikah tapi belum memiliki anak\n c = belum menikah  dan memiliki kartu anggota\n d = belum menikah dan tidak memiliki kartu anggota\npilih : ";
	cin>> status;
	cout<<"---------------------------------------------------------------------"<<endl;
	if (asal == "makassar"){
		if (belanja > batas_diskon){
			if (status == "a"){
				cout<< "Anda dapat Diskon 75%"<<endl;
				total = belanja - (belanja * 0.75);
			} else if (status == "b"){
				cout<< "Anda dapat Diskon 50%"<<endl;
				total = belanja - (belanja * 0.5);
			} else if (status == "c"){
				cout<< "Anda dapat Diskon 25%"<<endl;
				total = belanja - (belanja * 0.25);
			} else if (status == "d"){
				cout<< "Anda dapat Diskon 10%"<<endl;
				total = belanja - (belanja * 0.1);
			} else {
				cout<< "maaf, pilihan tidak ada. Coba ulangi!"<<endl;
				goto again;
			}
		}else{
			cout<< "Anda tidak mendapat Diskon"<<endl;
			total = belanja;
		} 		
	} else {
		if (belanja > batas_diskon){
			if (status == "a"){
					cout<< "Anda dapat Diskon 85%"<<endl;
					total = belanja - (belanja * 0.85);
				} else if (status == "b"){
					cout<< "Anda dapat Diskon 60%"<<endl;
					total = belanja - (belanja * 0.6);
				} else if (status == "c"){
					cout<< "Anda dapat Diskon 35%"<<endl;
					total = belanja - (belanja * 0.35);
				} else if (status == "d"){
					cout<< "Anda dapat Diskon 20%"<<endl;
					total = belanja - (belanja * 0.2);
				} else {
					cout<< "maaf, pilihan tidak ada. Coba ulangi!"<<endl;
					goto again;
				}
		}else{
			cout<< "Anda tidak mendapat Diskon"<<endl;
			total = belanja;
		} 		
	} 
		cout<< "Total pembayaran anda adalah: "<< total<<endl;
		cout<< "Terimakasih telah belanja di Supermarket kami";
		return 0;
}
