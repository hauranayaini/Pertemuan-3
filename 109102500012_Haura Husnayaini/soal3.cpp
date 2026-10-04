#include <iostream>
using namespace std;

// Prosedur menampilkan isi matriks array 2D 3x3
void tampilkanArray2D(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Prosedur menukarkan isi array 2D pada posisi koordinat tertentu
void tukarPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Prosedur menukarkan isi nilai yang ditunjuk oleh pointer
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    // 2 buah array 2D berukuran 3x3
    int matriksA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriksB[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    // 2 buah pointer integer
    int a = 100, b = 200;
    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "=== MATRIKS AWAL ===\n";
    cout << "Matriks A:\n"; tampilkanArray2D(matriksA);
    cout << "Matriks B:\n"; tampilkanArray2D(matriksB);

    // Tukar koordinat baris 0 kolom 1
    tukarPosisi(matriksA, matriksB, 0, 1);
    cout << "\n=== MATRIKS SETELAH DITUKAR (Koordinat) ===\n";
    cout << "Matriks A:\n"; tampilkanArray2D(matriksA);
    cout << "Matriks B:\n"; tampilkanArray2D(matriksB);

    cout << "\n===================================\n";
    cout << "=== POINTER AWAL ===\n";
    cout << "Nilai ptr1: " << *ptr1 << " | Nilai ptr2: " << *ptr2 << endl;

    tukarPointer(ptr1, ptr2);
    cout << "\n=== POINTER SETELAH DITUKAR ===\n";
    cout << "Nilai ptr1: " << *ptr1 << " | Nilai ptr2: " << *ptr2 << endl;

    return 0;
}
