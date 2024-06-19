#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Struktur untuk menyimpan informasi barang
struct Barang {
    string nama;
    double harga;
    int jumlah;
};

int main() {
    vector<Barang> daftarBarang;
    char tambahLagi;

    do {
        Barang barangBaru;
        
        cout << "Masukkan nama barang: ";
        cin >> barangBaru.nama;
        
        cout << "Masukkan harga barang: ";
        cin >> barangBaru.harga;
        
        cout << "Masukkan jumlah barang: ";
        cin >> barangBaru.jumlah;
        
        daftarBarang.push_back(barangBaru);
        
        cout << "Apakah Anda ingin menambah barang lagi? (y/n): ";
        cin >> tambahLagi;
    } while (tambahLagi == 'y' || tambahLagi == 'Y');

    double totalHarga = 0.0;
    cout << "\n--- Daftar Barang ---\n";
    for (const auto& barang : daftarBarang) {
        cout << "Nama: " << barang.nama 
             << ", Harga: " << barang.harga 
             << ", Jumlah: " << barang.jumlah 
             << ", Subtotal: " << barang.harga * barang.jumlah << endl;
        totalHarga += barang.harga * barang.jumlah;
    }

    cout << "\nTotal Harga: " << totalHarga << endl;
    return 0;
}
