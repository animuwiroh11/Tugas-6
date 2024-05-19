#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int jumlahMahasiswa;
  string namaMahasiswa;
  int nilaiUTS, nilaiUAS, nilaiAkhir;
  char nilaiHuruf;

  // Menginput jumlah mahasiswa
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> jumlahMahasiswa;

  // Membuat tabel
  cout << "\n| No | Nama Mahasiswa | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
  cout << "|---|---|---|---|---|---|";

  // Melakukan perhitungan dan menampilkan data untuk setiap mahasiswa
  for (int i = 1; i <= jumlahMahasiswa; i++) {
    // Mengambil nama mahasiswa
    cout << "\n| " << i << " | ";
    cin.ignore(); // Mengabaikan newline character
    getline(cin, namaMahasiswa);

    // Mengambil nilai UTS dan UAS
    cout << " | ";
    cin >> nilaiUTS;
    cout << " | ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiUAS * 40) + (nilaiUTS * 60);

    // Menentukan nilai huruf
    if (nilaiAkhir >= 80) {
      nilaiHuruf = 'A';
    } else if (nilaiAkhir >= 70) {
      nilaiHuruf = 'B';
    } else if (nilaiAkhir >= 56) {
      nilaiHuruf = 'C';
    } else if (nilaiAkhir >= 47) {
      nilaiHuruf = 'D';
    } else {
      nilaiHuruf = 'E';
    }

    // Menampilkan hasil
    cout << " | " << nilaiAkhir << " | " << nilaiHuruf << " |";
  }

  cout << "\n";

  return 0;
}