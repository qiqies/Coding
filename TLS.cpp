#include <iostream>
#include <cmath>

using namespace std;
float pi=3.14;

int main()
{
    int pilihan;
    cout << "      KALKULATOR LUAS BANGUN DATAR      " << endl
              << "Bangun datar apa yang ingin kamu hitung?" << endl
              << "1. Persegi" << endl
              << "2. Persegi Panjang" << endl
              << "3. Segitiga" << endl
              << "4. Layang-layang" << endl
              << "5. Belah Ketupat" << endl
              << "6. Trapesium" << endl
              << "7. Jajar genjang" << endl
              << "8. Lingkaran" << endl;
    cin >> pilihan;
    
    if (pilihan == 1)
    {
        float sisi;
        cout << "Masukkan sisi persegi:" << endl;
        cin >> sisi;
        float Luas = sisi*sisi;
        cout << "Luas persegi:" << Luas << endl;
    }
    
    if (pilihan == 2)
    {
        float panjang;
        cout << "Masukkan panjang persegi panjang:" << endl;
        cin >> panjang;
        float lebar;
        cout << "Masukkan lebar persegi panjang:" << endl;
        cin >> lebar;
        float Luas = panjang*lebar;
        cout << "Luas persegi panjang:" << Luas << endl;
    }
    
    if (pilihan == 3)
    {
        float alas;
        cout << "Masukkan alas segitiga:" << endl;
        cin >> alas;
        float tinggi;
        cout << "Masukkan tinggi segitiga:" << endl;
        cin >> tinggi;
        float Luas = alas*tinggi*0.5;
        cout << "Luas segitiga:" << Luas << endl;
    }
    
    if (pilihan == 4)
    {
        float diagonal_1;
        cout << "Masukkan diagonal 1 layang-layang:" << endl;
        cin >> diagonal_1;
        float diagonal_2;
        cout << "Masukkan diagonal 2 layang-layang:" << endl;
        cin >> diagonal_2;
        float Luas = diagonal_1*diagonal_2*0.5;
        cout << "Luas layang-layang:" << Luas << endl;
    }
    
     if (pilihan == 5)
    {
        float diagonal_1;
        cout << "Masukkan diagonal 1 belah ketupat:" << endl;
        cin >> diagonal_1;
        float diagonal_2;
        cout << "Masukkan diagonal 2 belah ketupat:" << endl;
        cin >> diagonal_2;
        float Luas = diagonal_1*diagonal_2*0.5;
        cout << "Luas belah ketupat:" << Luas << endl;
    }
    
     if (pilihan == 6)
    {
        float tinggi;
        cout << "Masukkan tinggi trapesium:" << endl;
        cin >> tinggi;
        float sisi_atas;
        cout << "Masukkan sisi atas trapesium:" << endl;
        cin >> sisi_atas;
        float sisi_bawah;
        cout << "Masukkan sisi bawah trapesium:" << endl;
        cin >> sisi_bawah;
        float Luas = (sisi_atas+sisi_bawah)*tinggi*0.5;
        cout << "Luas trapesium:" << Luas << endl;
    }
    
    if (pilihan == 7)
    {
        float alas;
        cout << "Masukkan alas jajar genjang:" << endl;
        cin >> alas;
        float tinggi;
        cout << "Masukkan tinggi jajar genjang:" << endl;
        cin >> tinggi;
        float Luas = alas*tinggi;
        cout << "Luas jajar genjang:" << Luas << endl;
    }
    
    if (pilihan == 8)
    {
        float jarijari;
        cout << "Masukkan jari-jari lingkaran:" << endl;
        cin >> jarijari;
        float Luas = pi*jarijari*jarijari;
        cout << "Luas lingkaran:" << Luas << endl;
    }
    
    if (pilihan<1 || pilihan>8)
    {
        cout << "Pilihan tidak falid" << endl;
    }
}
