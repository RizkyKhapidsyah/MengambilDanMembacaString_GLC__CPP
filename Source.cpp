#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	string kInput;

	//GetLine
	cout << "==================\n" << "CONTOH 1 - GetLine\n" << "==================\n" << endl;
	cout << "Masukkan Sebuah Kalimat  : ";
	getline(cin, kInput);
	cout << "Input Anda = " << kInput << endl << endl;

	//Menghitung Jumlah Kata
	cout << "=================================\n" << "CONTOH 2 - Menghitung Jumlah Kata\n" << "=================================\n" << endl;
	int Posisi = 0;
	int Jumlah = 0;

	while (true)
	{
		Posisi = kInput.find(" ", Posisi + 1);
		Jumlah++;

		if (Posisi < 0)
		{
			break;
		}
	}

	cout << "Jumlah Kata  = " << Jumlah << " Kata" << endl;
	
	_getch();
	return 0;
}