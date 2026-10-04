#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

// Fungsi menghitung nilai akhir sesuai rumus modul
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlah;

    if (jumlah > 10) {
        jumlah = 10;
    }

    Mahasiswa mhs[10]; // Membuat array penampung maksimal 10 data

    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Input Data Mahasiswa ke-" << (i + 1) << " ---\n";
        cout << "Nama        : ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "NIM         : ";
        cin >> mhs[i].nim;
        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;

        mhs[i].nilai_akhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n=================== HASIL DATA MAHASISWA ===================\n";
    for (int i = 0; i < jumlah; i++) {
        cout << mhs[i].nim << " - " << mhs[i].nama 
             << " | Nilai Akhir: " << mhs[i].nilai_akhir << endl;
    }

    return 0;
}
