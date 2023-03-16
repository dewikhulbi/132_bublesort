#include <iostream>
using namespace std;


int a[20];					//Deklarasi array a dengan ukuran 20
int n;						//Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {				//procedur untuk input
	while (true) {			//Looping
		cout << "Masukan banyaknya elemen pada array : ";		//output ke layar
		cin >> n;			//input dari pengguna
		if (n <= 20)		//Jika n kurang dari atau sama dengan 20
			break;			//kurang dari loop
		else {				//Jika n lebih dari 20
			cout << "\nArray dapat mempunyai 20 elemen.\n";	//output ke layar
		}
	}
	cout << end1;								//output baris kosong
	cout << "===================" << end1;		//output ke layar
	cout << "Masukan Elemen Array" << end1;		//output ke layar
	cout << "===================" << end1;		//output ke layar

	for (int i = 0; i < n; i++) {	//Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ":";	//output ke layar
		cin >> A[i];				//Input dari pengguna
	}
}