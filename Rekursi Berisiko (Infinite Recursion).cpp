#include<iostream>
using namespace std;

void contohRekursiBerisiko(int n) {
	cout << "Nilai n: " << n << endl;
	if (n == 0) {
		cout << "Selesai" << endl;
	} else
		contohRekursiBerisiko(n - 2 );
}
int main() {
	int n = 10;
	cout << "Memulai rekursi :" << endl;
	contohRekursiBerisiko(n);
	return 0;
}



