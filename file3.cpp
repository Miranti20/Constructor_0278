#include <iostream>
#include <string>
using namespace std;
class mahasiswa {
    public:
    mahasiswa(int nim, string nama);  // Constructor dengan parameter
};
// Defenisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Paramater Terpanggil"<<endl;
    cout << "NIM : " << nim << endl;
    cout << "Nim : " << nama << endl;
}
int main (){
    mahasiswa mhs(12345, "Abra") // Memanggil constructor dengan parameter
    return 0;
}
