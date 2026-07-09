#include <iostream>
using namespace std;

int main()
{//Mulai
    //Numeric nPanjang, nLebar, nKeliling
    int Panjang, Lebar, Keliling;

    //Display "Masukkan Panjang : "
    cout << "Masukkan Panjang : ";
    //Accept nPanjang
    cin >> Panjang;
    //Display "Masukkan Lebar : "
    cout << "Masukkan Lebar : ";
    //Accept nLebar
    cin >> Lebar;

    //Compute nKeliling = 2(p+l)
    Keliling = 2 * (Panjang + Lebar);

}