#include <iostream>
using namespace std;
float IP, totalnilaimatakuliah, jumlahmatakuliah,nilaiA, nilaiB, nilaiC, nilaiD, nilaiE, nilaiF, nilaiG, nilaiH;

int NIM, totalSKS, jumlahsksA, jumlahsksB, jumlahsksC, jumlahsksD, jumlahsksE, jumlahsksF, jumlahsksG, jumlahsksH;


int main(){
    cout<<" Nissa Albira "<<endl;
    cout<<" NIM 2310433017\n"<<endl;
    cout<<" Program Hitung IP Mahasiswa Semester 1 "<<endl;
    cout<<" ========================================= "<<endl;
    cout<<"Masukkan jumlah mata kuliah : ";
    cin>>jumlahmatakuliah;
    cout<<"Nilai A: ";
    cin>>nilaiA;
    cout<<"Jumlah sks A: ";
    cin>>jumlahsksA;
    cout<<"Nilai B: ";
    cin>>nilaiB;
    cout<<"Jumlah sks B: ";
    cin>>jumlahsksB;
    cout<<"Nilai C: ";
    cin>>nilaiC;
    cout<<"Jumlah sks C: ";
    cin>>jumlahsksC;
    cout<<"Nilai D: ";
    cin>>nilaiD;
    cout<<"Jumlah sks D: ";
    cin>>jumlahsksD;
    cout<<"Nilai E: ";
    cin>>nilaiE;
    cout<<"Jumlah sks E: ";
    cin>>jumlahsksE;
    cout<<"Nilai F: ";
    cin>>nilaiF;
    cout<<"Jumlah sks F: ";
    cin>>jumlahsksF;
    cout<<"Nilai G: ";
    cin>>nilaiG;
    cout<<"Jumlah sks G: ";
    cin>>jumlahsksG;
    cout<<"Nilai H: ";
    cin>>nilaiH;
    cout<<"Jumlah sks H: ";
    cin>>jumlahsksH;

    totalnilaimatakuliah = nilaiA*jumlahsksA + nilaiB*jumlahsksB + nilaiC*jumlahsksC + nilaiD*jumlahsksD + nilaiE*jumlahsksE + nilaiF*jumlahsksF + nilaiG*jumlahsksG + nilaiH*jumlahsksH;
    totalSKS = jumlahsksA +jumlahsksB + jumlahsksC + jumlahsksD + jumlahsksE + jumlahsksF + jumlahsksG + jumlahsksH;
    IP = totalnilaimatakuliah/totalSKS;


    cout<<" IP Mahasiswa adalah "<<IP<<endl;


}

