/*1.Cara kerja Insertion sort itu mengurutkan yang bekerja dengan pembagi daftar menjadi 2 bagian yang sudah 
	diurutkan dan bagian yang sudah diurutkan dan bagian yang belum diurutkan pada setiap integrasi dan memasukkannya 
	kedalam posisi yang tepat ke bagian yang sudah diurutkan, proses ini terus berlanjut sampai semua data terurut
2.  Cara kerja Selection sort itu mengurutksn bagian yang belum terurut, alagoritma ini memilih element terkecil
	dari bagian yang belum diurutkan.
3.  Didalam algoritma sortir kita melakukan pengulangan yang dimana syarat pengulangan it u adalah, jika n>= 0 dan j<= indeks
	maka algoritma sortir dapat mengulang atau menggeser data yang telah tersortir
4.  */


#include <iostream>
using namespace std;

int Meutya [98];
int n;

void input() {       
	while (true) {

		cout << "Masukan banyaknya elemen pada array : "; 
		cin >> n;
		if (n <= 98) 
			break; 
		else {    
			cout << "\nArray dapat mempunyai maksimal 98 elemen.\n"; 

		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ":";
		cin >> Meutya [i];


	}
}
void insertionsort() {

	int i, temp, j;


	for (i = 1; i <= n - 1; i++) { 
		temp = Meutya [i]; 
		j = i - 1; 
		while (j >= 0 && Meutya [j] > temp)
		{
			Meutya[j + 1] = Meutya[j];
			j = j - 1; 
		}
		Meutya [j + 1] = temp; 


		for (int k = 0; k < n; k++) {
			cout << Meutya [k] << " ";         
		}
	}
}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang Telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;

	for (int j = 0; j < n; j++) {
		cout << Meutya[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;

	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
	cout << endl;
}


int main()
{
	input();

	insertionsort();
	display();

	return 0;
}






