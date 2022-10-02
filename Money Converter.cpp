#include <iostream>
using namespace std;

int main() {
    float idr;
    int usd = 15303;
    int eur = 15000;
    int bp  = 17064;
    int jpy = 106;
    int sgd = 10687;
    
    cout << "Masukkan nilai uang dalam IDR : Rp ";
    cin >> idr;
    cout << "Berikut adalah hasil konversi mata uang Rupiah" << endl;
    cout << "Dolar Amerika   : $ "  << idr*usd << endl;
    cout << "Euro            : € "  << idr*eur << endl;
    cout << "Poundsterling   : £ "  << idr*bp  << endl;
    cout << "Yen             : ¥ "  << idr*jpy << endl;
    cout << "Dolar Singapura : S$ " << idr*sgd << endl;
    
    return 0;
}

/* https://youtu.be/3BiZ_lqou9Q */
