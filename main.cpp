#include <iostream>
#include <cstdio>
#include "Headers/mahasiswa.h"

using namespace std;

int main() {
  TabMahasiswa tab_mahasiswa;
  int N, iMax;

  input_data(tab_mahasiswa, N);
  iMax = max_ipk(tab_mahasiswa, N);

  cout << "IPK terbesar didapatkan oleh " << tab_mahasiswa[iMax].nama << endl;
  printf("IPK Rata-rata: %.2f\n", average_ipk(tab_mahasiswa, N));

  berapa_prodi(tab_mahasiswa, N);

  return 0;
}
