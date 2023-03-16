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
	cout << endl;								//output baris kosong
	cout << "===================" << endl;		//output ke layar
	cout << "Masukan Elemen Array" << endl;		//output ke layar
	cout << "===================" << endl;		//output ke layar

	for (int i = 0; i < n; i++) {	//Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ":";	//output ke layar
		cin >> a[i];				//Input dari pengguna
	}
}
void bubbleSortArray() {			//procedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {			//Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - 1; j++) {	//Looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {			//Jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];			//simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			//assign nilai a[j+1] ke a[j]
				a[j + 1 = temp; ]			//assign nilai temp ke a[j+1]
			}
		}
	}
}

void unsorted() {
	cout << endl;								//output baris kosong
	cout << "===================" << endl;		//output ke layar
	cout << "Masukan Elemen Array" << endl;		//output ke layar
	cout << "===================" << endl;		//output ke layar
	for (int j = 1; j < n; j++) {			//Looping dengan j dimulai dari 1 hingga n-1
		cout << a[j] << endl;				//output ke layar
	}
	cout << endl;
}

void display() {								//procedur untuk menampilkan hasil
	cout << endl;								//output baris kosong
	cout << "===================" << endl;		//output ke layar
	cout << "Masukan Elemen Array" << endl;		//output ke layar
	cout << "===================" << endl;		//output ke layar
	for (int j = 1; j < n; j++) {			//Looping dengan j dimulai dari 1 hingga n-1
		cout << a[j] << endl;				//output ke layar
	}
	cout << endl;
}





int main()
{
	std:: << "Hello World!\n";
}