#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float kelembapan;
    float kering, lembap;

    cout << "=== FUZZY LOGIC PENYIRAMAN TANAMAN ===" << endl;
    cout << "Masukkan kelembapan tanah (%): ";
    cin >> kelembapan;

    // Linear Turun (Kering)
    if (kelembapan <= 20)
        kering = 1;
    else if (kelembapan >= 80)
        kering = 0;
    else
        kering = (80 - kelembapan) / (80 - 20);

    // Linear Naik (Lembap)
    if (kelembapan <= 20)
        lembap = 0;
    else if (kelembapan >= 80)
        lembap = 1;
    else
        lembap = (kelembapan - 20) / (80 - 20);

    cout << fixed << setprecision(2);

    cout << "\nHasil Fuzzy:" << endl;
    cout << "Derajat Kering = " << kering << endl;
    cout << "Derajat Lembap = " << lembap << endl;

    return 0;
}