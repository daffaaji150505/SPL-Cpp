#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;

    // Memasukkan koefisien dan konstanta dari user
    cout << "Masukkan koefisien untuk persamaan pertama (a1 b1 c1): ";
    cin >> a1 >> b1 >> c1;
    cout << "Masukkan koefisien untuk persamaan kedua (a2 b2 c2): ";
    cin >> a2 >> b2 >> c2;

    // Menghitung nilai y menggunakan eliminasi
    double y = (c2 - (a2 * c1 / a1)) / (b2 - (a2 * b1 / a1));
    double x = (c1 - b1 * y) / a1;

    // Menampilkan hasil
    cout << "\nHasil:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
