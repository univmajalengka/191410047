#include <iostream>
using namespace std;

int main(){
     int nilai[5]={};
     int cari;
     string status = "belum ketemu";
     cout<<"\n== Isi Array ==\n";
     for(int i=0; i<5;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>nilai[i];
     }

     cout<<"\nMasukkan nilai yang dicari = ";cin>>cari;

     for(int i=0; i<5;i++){
          if(nilai[i]==cari){
               cout<<"\nNilai yang dicari ("<<cari<<") ditemukan di indek ke ["<<i<<"]\n";
               status = "ketemu";
               break;
          }
     }

     if (status == "belum ketemu"){
          cout<<"\nNilai yang dicari ("<<cari<<") tidak ditemukan\n";
     }

     return 0;
}