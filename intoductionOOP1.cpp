#include <iostream>
using namespace std;

class Barang {
    public:
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;

    // Constructor
    Barang(string n, int j, string k, string t) {
        nama = n;
        jumlah = j;
        kategori = k;
        TanggalProduksi = t;
    }

    void PrintData(){
        cout << "Nama: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << TanggalProduksi << endl;
    }
};

int main(){
    Barang elektronik("Laptop", 15, "Elektronik", "16-04-2026");
    Barang nonElektronik("Buku Tulis", 200, "Alat Tulis", "15-04-2026");

    cout << "--- Data Barang Elektronik ---" << endl;
    elektronik.PrintData();

    cout << "\n--- Data Barang Non-Elektronik ---" << endl;
    nonElektronik.PrintData();
}