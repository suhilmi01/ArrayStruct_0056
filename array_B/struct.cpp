#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    int umur;
};

int main ()
{
    //deklarasi objek dari dari struct orang
    orang mhs;
    //isi objek
    cout << "nama mahasiswa:";
    cin >> mhs.nama;
    cout << "alamat asal:";
    cin >> mhs.alamat;
    cout << "umur:";
    cin >> mhs.umur;
    cout << endl;
    
}

