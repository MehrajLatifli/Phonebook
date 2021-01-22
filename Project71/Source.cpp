#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
// Telefon kitabcasi
void sortAd(string ad[], int adsayi) {
	for (int i = 0; i < adsayi; i++)
	{
		for (int j = 0; j < adsayi - 1; j++)
		{

			if (ad[j].compare(ad[j + 1]) == 1) {
				swap(ad[j], ad[j + 1]);
			}
		}
	}
}
void printAd(string ad[], int adsayi) {
	cout << endl << endl;
	for (int i = 0; i < adsayi; i++)
	{
		cout << " " << i + 1 << "\t" << ad[i] << endl;
	}
}

void sortSoyad(string soyad[], int adsayi) {
	for (int i = 0; i < adsayi; i++)
	{
		for (int j = 0; j < adsayi - 1; j++)
		{

			if (soyad[j].compare(soyad[j + 1]) == 1) {
				swap(soyad[j], soyad[j + 1]);
			}
		}
	}
}
void printSoyad(string soyad[], int adsayi) {
	cout << endl << endl;
	for (int i = 0; i < adsayi; i++)
	{
		cout << " " << i + 1 << "\t" << soyad[i] << endl;
	}
}
void sortYas(string yas[], int adsayi) {
	for (int i = 0; i < adsayi; i++)
	{
		for (int j = 0; j < adsayi - 1; j++)
		{

			if (yas[j].compare(yas[j + 1]) == 1) {
				swap(yas[j], yas[j + 1]);
			}
		}
	}
}
void printYas(string yas[], int adsayi) {
	cout << endl << endl;
	for (int i = 0; i < adsayi; i++)
	{
		cout << " " << i + 1 << "\t" << yas[i] << endl;
	}
}
void sortNomre(string nomre[], int adsayi) {
	for (int i = 0; i < adsayi; i++)
	{
		for (int j = 0; j < adsayi - 1; j++)
		{

			if (nomre[j].compare(nomre[j + 1]) == 1) {
				swap(nomre[j], nomre[j + 1]);
			}
		}
	}
}
void printNomre(string nomre[], int adsayi) {
	cout << endl << endl;
	for (int i = 0; i < adsayi; i++)
	{
		cout << " " << i + 1 << "\t" << nomre[i] << endl;
	}
}


int main()
{
	string ad[25];
	string ad2[25];
	string soyad[25];
	string soyad2[25];
	string yas[25];
	string yas2[25];
	string nomre[25];
	string nomre2[25];
	int adsayi;
	int siranomresi;
	int deyis;
	int metnideyis;
	int ax;
	int axtar;
	int axtaris;
	string adiaxtar[50];
	string soyadiaxtar[50];
	string yasiaxtar[50];
	string nomreniaxtar[50];
	cout << endl;
	cout << " **************************************  " << endl;
	cout << " ** Latifli Mehraj ********************  " << endl;
	cout << " ******************** Baku - 2020 *****  " << endl;
	cout << " **************************************  " << endl;
	cout << " *****                       **********  " << endl;
	cout << " *****                       **********   " << endl;
	cout << " *****                       **********  " << endl;
	cout << " *****                       **********   " << endl;
	cout << " *****    **************     **********  " << endl;
	cout << " *****   ****************    **********   " << endl;
	cout << " *****  ****   ****   ****   **********   " << endl;
	cout << " *****        ******         **********   " << endl;
	cout << " *****       **    **        **********  " << endl;
	cout << " *****      **********       **********  " << endl;
	cout << " **************************************  " << endl;
	cout << " ** Step Academy **********************  " << endl;
	cout << " **************** Qrup: FBE_2914_AZ ***  " << endl;
	cout << " **************************************  " << endl;

	cout << endl;
	cout << endl;
	cout << " Nece ad daxil edilecek: ";
	cin >> adsayi;
	if (adsayi >= 1) {
		system("cls");
		for (int i = 0; i < adsayi; i++)
		{
			if (i < adsayi)
			{
				cout << endl;
				cout << "  " << i + 1 << " nomreli sexsin adini daxil edin: ";
				cin >> ad[i];
				cout << endl;
			}
			if (i < adsayi)
			{
				cout << endl;
				cout << "  " << i + 1 << " nomreli sexsin soyadini daxil edin: ";
				cin >> soyad[i];
				cout << endl;
			}
			if (i < adsayi) {
				cout << endl;
				cout << "  " << i + 1 << " nomreli sexsin yasini daxil edin: ";
				cin >> yas[i];
				cout << endl;
			}
			if (i < adsayi)
			{
				cout << endl;
				cout << "  " << i + 1 << " nomreli sexsin nomresini daxil edin: ";
				cin >> nomre[i];
				cout << endl;
			}
			cout << endl;
			system("cls");
		}
		for (int i = 0; i < adsayi; i++)
		{
			if (i < adsayi)
			{
				cout << endl;
				cout << "     " << i + 1 << ")   " << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
				cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
				cout << endl;

			}


		}



		for (int i = 0; i < 100; i++)
		{
			cout << endl;
			cout << " Davam ucun 1 -e , Imtina ucun 0 -a basin: ";
			cin >> deyis;
			if (deyis == 1) {
				cout << " Deyisiklik ucun sira nomresini daxil ele: ";
				cin >> siranomresi;
				cout << endl;
				cout << endl;

				cout << endl;
				cout << " Adi deyismek ucun        -> 1" << endl;
				cout << " Soyadi deyismek ucun     -> 2" << endl;
				cout << " Yasi deyismek ucun       -> 3" << endl;
				cout << " Nomreni deyismek ucun    -> 4" << endl;

				for (int i = 0; i < 100; i++)
				{
					if (i + 1 == siranomresi)
					{

						cout << endl;
						cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
						cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
						cout << endl;
						cout << " Ne deyisecek? : ";
						cin >> metnideyis;
						cout << endl;
						if (metnideyis == 1)
						{
							cout << " Yeni metni daxil ele: ";
							cin >> ad2[i];
							ad[i] = ad2[i];
							ad[i].compare(ad2[i]);
							cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
							cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
						}
						if (metnideyis == 2)
						{
							cout << " Yeni metni daxil ele: ";
							cin >> soyad2[i];
							soyad[i] = soyad2[i];
							soyad[i].compare(soyad2[i]);
							cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
							cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
						}
						if (metnideyis == 3)
						{
							cout << " Yeni metni daxil ele: ";
							cin >> yas2[i];
							yas[i] = yas2[i];
							yas[i].compare(yas2[i]);
							cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
							cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
						}
						if (metnideyis == 4)
						{
							cout << " Yeni metni daxil ele: ";
							cin >> nomre2[i];
							nomre[i] = nomre2[i];
							nomre[i].compare(nomre2[i]);
							cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
							cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
						}

					}
				}

				for (int i = 0; i < 100; i++)
				{


					cout << " Axtar           -> 0 : ";
					cin >> axtar;
					cout << endl;
					if (axtar == 0)
					{
						cout << " Axtaris";
						cout << endl;
						cout << " Ada gore        -> 1" << endl;
						cout << " Soyada gore     -> 2" << endl;
						cout << " Yasa gore       -> 3" << endl;
						cout << " Nomreye gore    -> 4" << endl;
						cout << endl;
						cout << " Axtarisi sonlandirmaq    -> 0" << endl;
						cout << endl;

						cout << " Axtaris neye gore aparilr? : ";
						cin >> axtaris;




						if (axtaris == 1)
						{
							cout << " Metni daxil edin: ";
							cin >> adiaxtar[i];

							if (adiaxtar[i] == ad[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;

							}
							else if (adiaxtar[i] == ad2[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad2[i] << setw(20) << right << soyad2[i] << setw(20) << right << yas2[i] << setw(20) << right << nomre2[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
							}

						}


						if (axtaris == 2)
						{
							cout << " Metni daxil edin: ";
							cin >> soyadiaxtar[i];

							if (soyadiaxtar[i] == soyad[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;

							}
							else if (soyadiaxtar[i] == soyad2[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad2[i] << setw(20) << right << soyad2[i] << setw(20) << right << yas2[i] << setw(20) << right << nomre2[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
							}

						}


						if (axtaris == 3)
						{
							cout << " Metni daxil edin: ";
							cin >> yasiaxtar[i];
							if (yasiaxtar[i] == yas[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;

							}
							else if (yasiaxtar[i] == yas2[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad2[i] << setw(20) << right << soyad2[i] << setw(20) << right << yas2[i] << setw(20) << right << nomre2[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
							}

						}


						if (axtaris == 4)
						{
							cout << " Metni daxil edin: ";
							cin >> nomreniaxtar[i];

							if (nomreniaxtar[i] == nomre[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad[i] << setw(20) << right << soyad[i] << setw(20) << right << yas[i] << setw(20) << right << nomre[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;

							}
							else if (nomreniaxtar[i] == nomre2[i]) {

								cout << "     " << i + 1 << ")   " << setw(20) << right << ad2[i] << setw(20) << right << soyad2[i] << setw(20) << right << yas2[i] << setw(20) << right << nomre2[i] << "  " << endl;
								cout << " --------------------------------------------------------------------------------------------------------------- " << endl;
							}

						}

						if (axtaris == 0) {

							cout << " Ada gore sortlasdirma ";
							sortAd(ad, adsayi);
							printAd(ad, adsayi);
							cout << endl;
							cout << " Soyada gore sortlasdirma ";
							sortSoyad(soyad, adsayi);
							printSoyad(soyad, adsayi);
							cout << endl;
							cout << " Yasa gore sortlasdirma ";
							sortYas(yas, adsayi);
							printYas(yas, adsayi);
							cout << endl;
							cout << " Nomreye gore sortlasdirma ";
							sortYas(nomre, adsayi);
							printYas(nomre, adsayi);



							break;
						}


					}



				}

			}


			if (deyis == 0) {
				break;
			}
		}
		if (adsayi < 0) {
			for (int i = 0; i < adsayi; i++)
			{
				break;
			}
		}
	}
}