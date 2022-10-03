#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Kalkulator Aricha\n \n";
    cout << "Masukan nilai pertama: ";
    cin  >> a;
    cout << "Pilih operator +,-,/,*: ";
    cin  >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin  >> b;

    cout << "\n Hasil perhitungan: ";
    cout << a << aritmatika << b;

    if (aritmatika == '+'){
        hasil = a+b;
    }else if (aritmatika == '-'){
        hasil = a-b;
    }else if (aritmatika == '/'){
        hasil = a/b;
    }else if (aritmatika == '*'){
        hasil = a*b;
    }else {
        cout << "operator anda salah" << endl;
    }
    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}
