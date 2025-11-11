#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung pangkat x^y
int pangkatRekursif(int x, int y) {
    if (y == 0)
        return 1;               // basis rekursi: x^0 = 1
    else
        return x * pangkatRekursif(x, y - 1);  // langkah rekursi
}

int main() {
    int x, y;
    cout << "Masukkan basis (x): ";
    cin >> x;
    cout << "Masukkan eksponen (y): ";
    cin >> y;

    cout << x << "^" << y << " = " << pangkatRekursif(x, y) << endl;

    return 0;
}
