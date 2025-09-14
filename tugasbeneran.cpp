#include <iostream>
#include <string>
using namespace std;

int main() {
    string film[7] = {"THE SHADOWS EDGE", "GEREJA SETAN", "ANDAI IBU TIDAK MENIKAH DENGAN AYAH", "THE CONJURING: LAST RITES", "SUKMA", "THE LONG WALK", "MAMA: PESAN DARI NERAKA"};
    string kursi[10] = {"A1", "A2", "B1", "B2", "C1", "C2", "D1", "D2", "E1", "E2"};

    int pilihanFilm, pilihanKursi;

    cout << "****** PILIHAN FILM YANG TERSEDIA ******" << endl;
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << ". " << film[i] << endl;
    }
    while (true) {
    cout << "\nPILIH FILM (1-7): ";
    cin >> pilihanFilm;

    if (pilihanFilm >= 1 && pilihanFilm <= 7) {
        break;

    } else {
        cout << "Pilihan film tidak tersedia";
        cout << "\nPesanan tiket GAGAL";
    }
    }

    cout << "\n****** PILIHAN KURSI YANG TERSEDIA ******\n";
    for (int i = 0; i < 10; i++) {
    cout << i + 1 << ". " << kursi[i] << endl;
    }

    while (true) {
    cout << "\nPILIH KURSI (1-10): ";
    cin >> pilihanKursi;
    if (pilihanKursi >= 1 && pilihanKursi <= 10) {
        break;
    } else {
        cout << "Pilihan kursi tidak tersedia";
        cout << "\nPesanan tiket GAGAL";
    }
}
    cout << "\n==================== TIKET ====================" << endl;
    cout << "Film: " << film[pilihanFilm - 1] << endl;
    cout << "Kursi: " << kursi[pilihanKursi - 1] << endl;
    cout << "===============================================" << endl;
    cout << "\nSTATUS PESANAN: BERHASIL" << endl;

    return 0;
}