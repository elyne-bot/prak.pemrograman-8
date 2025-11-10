#include <iostream>
#include <fstream>   // untuk operasi file
using namespace std;

// Fungsi membaca data dari file dan menyimpannya ke array
int bacaDataDariFile(const string &namaFile, int arr[], int maxSize) {
    ifstream file(namaFile);
    if (!file.is_open()) {
        cout << "Gagal membuka file " << namaFile << endl;
        return 0;
    }

    int nilai;
    int count = 0;
    while (file >> nilai && count < maxSize) {
        arr[count++] = nilai;
    }

    file.close();
    return count; // jumlah data yang berhasil dibaca
}

// Fungsi rekursif untuk mencari nilai maksimum dalam array
int maksimumRekursif(int arr[], int n) {
    if (n == 1) return arr[0]; // basis rekursi
    int maxSubarray = maksimumRekursif(arr, n - 1);
    return (arr[n - 1] > maxSubarray) ? arr[n - 1] : maxSubarray;
}

int main() {
    int arr[100]; // kapasitas maksimum
    int n = bacaDataDariFile("angka_input.txt", arr, 100);

    if (n == 0) {
        cout << "Tidak ada data yang dibaca dari file." << endl;
        return 0;
    }

    cout << "Jumlah data: " << n << endl;
    cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr, n) << endl;

    return 0;
}
