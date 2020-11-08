#include <iostream>

using namespace std;

int main()
{
    int pilih, angka_n, angka_m, hasil1, hasil2;

    cout << "====Perkalian dan Perpangkatan====="<<endl;
    cout << "1. Perkalian "<<endl;
    cout << "2. Perpangkatan "<<endl;
    cout << "Pilih  = ";
    cin >> pilih;

    switch (pilih){
        case 1 :
            cout << "Input Angka N = ";
            cin >> angka_n;
            cout << "Input Angka M = ";
            cin >> angka_m;
            cout << "hasil "<<angka_n<<" X "<<angka_m<<endl;

            hasil1 = angka_m;

            for (int i=1; i <= angka_n; i++){
                if (i < angka_n){
                    hasil1 = angka_m + hasil1;
                    cout << angka_m << " + ";
                } else if (i == angka_n){
                    cout << angka_m;
                    cout << " = " << hasil1;
                }
            }
            break;

        case 2 :
            cout << "Input Angka N = ";
            cin >> angka_n;
            cout << "Input Angka M = ";
            cin >> angka_m;
            cout << "Hasil "<<angka_n<<"^"<<angka_m<<endl;

            hasil2=angka_n;

            for (int l=1 ;l <=angka_m;l++){
                if(l<angka_m){
                    hasil2 = hasil2*angka_n;
                    cout << angka_n << "x";
                } else if (l==angka_m){
                    cout << angka_n;
                    cout << "=" << hasil2 << endl;
                }
            }
            break;
        default :
            cout << "salah Input"<<endl;
    }
    return 0;
}
