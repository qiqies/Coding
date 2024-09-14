#include <iostream>
#include <cmath>

using namespace std;
float pie=3.14;

int main()
{
    int pilihan;
    std::cout << "      KALKULATOR LUAS BANGUN DATAR      " << std::endl
              << "Bangun datar apa yang ingin kamu hitung?" << endl
              << "1. Persegi" << endl
              << "2. Persegi Panjang" << endl
              << "3. Segitiga" << endl
              << "4. Layang-layang" << endl
              << "5. Belah Ketupat" << endl
              << "6. Trapesium" << endl
              << "7. Jajar genjang" << endl
              << "8. Lingkaran" << endl;
    std::cin >> pilihan;
    
    if (pilihan == 1)
    {
        float sisi;
        std::cout << "Masukkan sisi persegi:" << std::endl;
        std::cin >> sisi;
        float Luas = sisi*sisi;
        std::cout << "Luas persegi:" << Luas << std::endl;
    }
    
    if (pilihan == 2)
    {
        float panjang;
        std::cout << "Masukkan panjang persegi panjang:" << std::endl;
        std::cin >> panjang;
        float lebar;
        std::cout << "Masukkan lebar persegi panjang:" << std::endl;
        std::cin >> lebar;
        float Luas = panjang*lebar;
        std::cout << "Luas persegi panjang:" << Luas << std::endl;
    }
    
    if (pilihan == 3)
    {
        float alas;
        std::cout << "Masukkan alas segitiga:" << std::endl;
        std::cin >> alas;
        float tinggi;
        std::cout << "Masukkan tinggi segitiga:" << std::endl;
        std::cin >> tinggi;
        float Luas = alas*tinggi*0.5;
        std::cout << "Luas segitiga:" << Luas << std::endl;
    }
    
    if (pilihan == 4)
    {
        float diagonal_1;
        std::cout << "Masukkan diagonal 1 layang-layang:" << std::endl;
        std::cin >> diagonal_1;
        float diagonal_2;
        std::cout << "Masukkan diagonal 2 layang-layang:" << std::endl;
        std::cin >> diagonal_2;
        float Luas = diagonal_1*diagonal_2*0.5;
        std::cout << "Luas layang-layang:" << Luas << std::endl;
    }
    
     if (pilihan == 5)
    {
        float diagonal_1;
        std::cout << "Masukkan diagonal 1 belah ketupat:" << std::endl;
        std::cin >> diagonal_1;
        float diagonal_2;
        std::cout << "Masukkan diagonal 2 belah ketupat:" << std::endl;
        std::cin >> diagonal_2;
        float Luas = diagonal_1*diagonal_2*0.5;
        std::cout << "Luas belah ketupat:" << Luas << std::endl;
    }
    
     if (pilihan == 6)
    {
        float tinggi;
        std::cout << "Masukkan tinggi trapesium:" << std::endl;
        std::cin >> tinggi;
        float sisi_atas;
        std::cout << "Masukkan sisi atas trapesium:" << std::endl;
        std::cin >> sisi_atas;
        float sisi_bawah;
        std::cout << "Masukkan sisi bawah trapesium:" << std::endl;
        std::cin >> sisi_bawah;
        float Luas = (sisi_atas+sisi_bawah)*tinggi*0.5;
        std::cout << "Luas trapesium:" << Luas << std::endl;
    }
    
    if (pilihan == 7)
    {
        float alas;
        std::cout << "Masukkan alas jajar genjang:" << std::endl;
        std::cin >> alas;
        float tinggi;
        std::cout << "Masukkan tinggi jajar genjang:" << std::endl;
        std::cin >> tinggi;
        float Luas = alas*tinggi;
        std::cout << "Luas jajar genjang:" << Luas << std::endl;
    }
    
    if (pilihan == 8)
    {
        float jarijari;
        std::cout << "Masukkan jari-jari lingkaran:" << std::endl;
        std::cin >> jarijari;
        float Luas = pie*jarijari*jarijari;
        std::cout << "Luas lingkaran:" << Luas << std::endl;
    }
    
    if (pilihan<1 || pilihan>8)
    {
        std::cout << "Pilihan tidak falid" << std::endl;
    }
}