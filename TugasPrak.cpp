#include <iostream>
#include <string>

using namespace std;

class Produk {
private:
    int id;
    string nama;

public:
    void tampilkan() {
        cout << "ID: " << id << endl;
        cout << "Nama: " << nama << endl;
        cout << endl;
    }

    // Constructor 1: Tanpa parameter (Nilai default)
    Produk() {
        id = 1;
        nama = "Baju";
    }

    // Constructor 2: Hanya parameter ID
    Produk(int Pid) {
        id = Pid;
        nama = "Meja";
    }

    // Constructor 3: Hanya parameter Nama
    Produk(string Pnama) {
        id = 1;
        nama = Pnama;
    }

    // Constructor 4: Parameter lengkap (ID dan Nama)
    Produk(int Pid, string Pnama) {
        id = Pid;
        nama = Pnama;
    }
};

int main() {
    cout << "--- Daftar Inventaris Toko ---" << endl << endl;

    Produk Produk1;
    Produk Produk2(3);
    Produk Produk3("Meja");
    Produk Produk4(4, "Kursi");

    Produk1.tampilkan();
    Produk2.tampilkan();
    Produk3.tampilkan();
    Produk4.tampilkan();

    return 0;
}