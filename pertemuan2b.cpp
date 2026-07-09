#include <iostream>
using namespace std;

//Numeric nPanjang, nLebar, nKeliling
int Panjang, Lebar, Keliling;

void Input(){
    //Display "Masukkan Panjang : "
    cout << "Masukkan Panjang : ";
    //Accept nPanjang
    cin >> Panjang;
    //Display "Masukkan Lebar : "
    cout << "Masukkan Lebar : ";
    //Accept nLebar
    cin >> Lebar;
}

int Proses(){
    //Compute nKeliling = 2(p+l)
    return Keliling = 2 * (Panjang + Lebar);
}

