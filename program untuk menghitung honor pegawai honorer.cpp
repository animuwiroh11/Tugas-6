#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Deklarasi variabel
  int jumlahPegawai;
  vector<string> namaPegawai;
  vector<int> jamKerja;
  vector<int> honorLembur, totalHonor;

  // Input jumlah pegawai
  cout << "Masukkan jumlah pegawai: ";
  cin >> jumlahPegawai;

  // Input data pegawai
  for (int i = 0; i < jumlahPegawai; i++) {
    cout << "\nData pegawai ke-" << i + 1 << endl;
    cout << "Nama: ";
    cin >> ws; // Mengabaikan spasi whitespace
    getline(cin, namaPegawai[i]);
    cout << "Jam kerja: ";
    cin >> jamKerja[i];
  }

  // Hitung honor lembur dan total honor
  for (int i = 0; i < jumlahPegawai; i++) {
    if (jamKerja[i] > 8) {
      honorLembur[i] = (jamKerja[i] - 8) * 5000;
      totalHonor[i] = honorLembur[i] + 15000; // Asumsi honor harian = Rp. 15000
    } else {
      honorLembur[i] = 0;
      totalHonor[i] = 15000; // Asumsi honor harian = Rp. 15000
    }
  }

  // Tampilkan tabel hasil
  cout << "\n\n| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |\n";
  cout << "|---|---|---|---|---|";
  for (int i = 0; i < jumlahPegawai; i++) {
    cout << "\n| " << i + 1 << " | " << namaPegawai[i] << " | " << jamKerja[i] << " | " << honorLembur[i] << " | " << totalHonor[i] << " |";
  }

  return 0;
}