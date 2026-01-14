#include <iostream>
using namespace std;

int main() {
    int suara[3] = {0, 0, 0};
    int pilihan;

    do {
        cout << "\n=== SISTEM VOTING ===\n";
        cout << "1. Kandidat A\n";
        cout << "2. Kandidat B\n";
        cout << "3. Kandidat C\n";
        cout << "4. Lihat Hasil\n";
        cout << "5. Keluar\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                suara[0]++;
                cout << "Vote untuk Kandidat A\n";
                break;

            case 2:
                suara[1]++;
                cout << "Vote untuk Kandidat B\n";
                break;

            case 3:
                suara[2]++;
                cout << "Vote untuk Kandidat C\n";
                break;

            case 4:
                cout << "\n--- HASIL VOTING ---\n";
                cout << "Kandidat A : " << suara[0] << endl;
                cout << "Kandidat B : " << suara[1] << endl;
                cout << "Kandidat C : " << suara[2] << endl;
                break;

            case 5:
                cout << "Voting selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}