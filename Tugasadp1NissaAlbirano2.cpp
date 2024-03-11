#include <iostream>
using namespace std;


int main(){
    float sisialas, tinggilimas, volumelimas, luasalas;
    cout<< " Nama : Nissa Albira "<<endl;
    cout<< " NIM : 2310433017 "<<endl;
    cout<< " Shift : 2"<<endl;
    cout<< " Menghitung Volume dan Luas Permukaan Limas Segiempat Beraturan"<<endl;
    cout<< " ===============================================================\n"<<endl;
    cout<< " Sisi alas : ";
    cin>>sisialas;
    cout<< " Tinggi Limas : ";
    cin>>tinggilimas;


    luasalas = sisialas*sisialas;
    volumelimas = luasalas*tinggilimas/3;
    cout<< " Volume Limas adalah "<<volumelimas<<endl;

    float tinggisisitegak, luaspermukaanlimas;

    cout<< " Tinggi sisi tegak : ";
    cin>>tinggisisitegak;

    luaspermukaanlimas = luasalas + 4*sisialas*tinggisisitegak/2;

    cout<< " Luas Permukaan Limas adalah "<<luaspermukaanlimas<<endl;


}
