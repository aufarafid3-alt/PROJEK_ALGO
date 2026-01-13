#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[50];
    int harga[50], jumlah[50];
    int pilihan, index = 0;

    do {
        cout << "\n=== KASIR MINIMARKET ===\n";
        cout << "1. Tambah Barang\n";
        cout << "2. Lihat Belanja\n";
        cout << "3. Bayar\n";
        cout << "4. Keluar\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            if (index >= 50) {
                cout << "Keranjang penuh!\n";
            } else {
                cin.ignore();
                cout << "Nama Barang: ";
                getline(cin, nama[index]);
                cout << "Harga: ";
                cin >> harga[index];
                cout << "Jumlah: ";
                cin >> jumlah[index];
                index++;
                cout << "Barang berhasil ditambahkan.\n";
            }

        } else if (pilihan == 2) {
            if (index == 0) {
                cout << "Belum ada barang.\n";
            } else {
                cout << "\n--- DAFTAR BELANJA ---\n";
                for (int i = 0; i < index; i++) {
                    cout << i + 1 << ". " << nama[i]
                         << " | Harga: " << harga[i]
                         << " | Jumlah: " << jumlah[i]
                         << " | Subtotal: " << harga[i] * jumlah[i]
                         << endl;
                }
            }

        } else if (pilihan == 3) {
            if (index == 0) {
                cout << "Belum ada barang untuk dibayar.\n";
            } else {
                int total = 0;
                for (int i = 0; i < index; i++)
                    total += harga[i] * jumlah[i];

                int diskon = (total >= 100000) ? total * 0.1 : 0;

                cout << "\nTotal Belanja : Rp " << total;
                cout << "\nDiskon        : Rp " << diskon;
                cout << "\nTotal Bayar   : Rp " << total - diskon;
                cout << "\nTerima kasih!\n";

                index = 0; // reset belanja
            }

        } else if (pilihan != 4) {
            cout << "Menu tidak valid!\n";
        }

    } while (pilihan != 4);

    cout << "Program selesai.\n";
    return 0;
}