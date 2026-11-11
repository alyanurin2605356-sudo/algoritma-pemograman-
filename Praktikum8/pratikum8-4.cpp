
#include <iostream>
using namespace std;
void hitungDiskon(int *harga, int jumlah, int index, int &total) {
    if (index == jumlah) {
        return;
    }

    int diskon = 0;

    if (harga[index] > 500000) {
        diskon = 10;
    } 
    else if (harga[index] >= 500000) {
        diskon = 5;
    }

    int potongan = harga[index] * diskon / 100;
    int hargaAkhir = harga[index] - potongan;

    cout << "Diskon untuk barang " << index + 1 << ": ";

    if (diskon == 0) {
        cout << "Tidak ada diskon" << endl;
    } 
    else {
        cout << diskon << "%" << endl;
    }

    total += hargaAkhir;

    hitungDiskon(harga, jumlah, index + 1, total);
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    int *harga = new int[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    int total = 0;

    cout << "\nHasil perhitungan diskon:" << endl;

    hitungDiskon(harga, jumlah, 0, total);

    cout << "\nTotal harga setelah diskon: Rp" 
         << total << endl;

    delete[] harga;

    return 0;
}

