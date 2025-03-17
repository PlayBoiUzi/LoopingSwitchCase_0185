#include <iostream>
using namespace std;

double hitungIPK(double total, int sks, )
{
    return total / sks;
}

string predikat(double ipk)
{
    if (ipk < 10)
    {
        return "Memuaskan";
    }
    else
    {
        return "cumlaude";
    }
}

int main()
{
    char pilihan;
    int sks;
    double total;

    do
    {
        cout << "Pilih Menu" << endl;
        cout << "1. Cek nilai IPK" << endl;
        cout << "2. cek Predikat Kelulusan" << endl;
        cout << "3. Keluar";

        cout << "Masukan Pilihan (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case '1':
            cout << "Masukan Total Nilai = ";
            cin >> total;
            cout << "Masukan Jumlah Sks = ";
            cin >> sks;

            cout << "Nilai ipk =" << hitungIPK(total, sks);
            break;
        case '2':
            cout << "Predikat anda adalah" << predikat(hitungIPK(total, sks)) << endl;
            break;

        case '3':
            break;

        default:
            cout << "pilihan anda salah" << endl break;
            
        }
    } while (pilihan != 3);
}