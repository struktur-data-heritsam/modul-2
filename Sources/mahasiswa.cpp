//
// Created by Ariq Heritsa on 26/04/22.
//

#include "../Headers/mahasiswa.h"

void input_data(TabMahasiswa &tab_mahasiswa, int &N) {
  cout << "Jumlah data: ";
  cin >> N;

  for (int i = 0; i < N; i++) {
    cout << "Nama: ";
    cin >> tab_mahasiswa[i].nama;

    cout << "NIM: ";
    cin >> tab_mahasiswa[i].nim;

    prodi_apa(tab_mahasiswa[i].nim);

    cout << "IPK: ";
    cin >> tab_mahasiswa[i].ipk;

    cout << "Semester: ";
    cin >> tab_mahasiswa[i].semester;

    if (is_cumlaude(tab_mahasiswa[i].ipk, tab_mahasiswa[i].semester)) {
      cout << "CUMLAUDE" << endl;
    }

    cout << "Kode Unik: ";
    cin >> tab_mahasiswa[i].kode_unik;

    if (is_prime(tab_mahasiswa[i].kode_unik)) {
      cout << "MAHASISWA BERPRESTASI" << endl;
    }

    cout << endl;
  }

  cout << "..........INPUT DATA SELESAI.........." << endl;
  cout << endl;
}

void prodi_apa(string nim) {
  string cek_nim = nim.substr(1, 1);

  if (cek_nim == "1") {
    cout << "Prodi anda adalah Art of Coffee" << endl;
  } else if (cek_nim == "2") {
    cout << "Prodi anda adalah Creative Content" << endl;
  } else if (cek_nim == "3") {
    cout << "Prodi anda adalah Mental Health" << endl;
  } else {
    cout << "Prodi tidak diketahui" << endl;
  }
}

bool is_cumlaude(float ipk, int semester) {
  return ipk > 3.5 && semester <= 8;
}

int max_ipk(TabMahasiswa tab_mahasiswa, int N) {
  int max = 0;

  for (int i = 0; i < N; i++) {
    if (tab_mahasiswa[i].ipk > tab_mahasiswa[max].ipk) {
      max = i;
    }
  }

  return max;
}

float average_ipk(TabMahasiswa tab_mahasiswa, int N) {
  float sum = 0;

  for (int i = 0; i < N; i++) {
    sum += tab_mahasiswa[i].ipk;
  }

  return sum / N;
}

void berapa_prodi(TabMahasiswa tab_mahasiswa, int N) {
  string cek_nim;
  int jumlah_art_of_coffee, jumlah_creative_content, jumlah_mental_health;

  jumlah_art_of_coffee = 0;
  jumlah_creative_content = 0;
  jumlah_mental_health = 0;

  for (int i = 0; i < N; i++) {
    cek_nim = tab_mahasiswa[i].nim.substr(1, 1);

    if (cek_nim == "1") {
      jumlah_art_of_coffee += 1;
    } else if (cek_nim == "2") {
      jumlah_creative_content += 1;
    } else if (cek_nim == "3") {
      jumlah_mental_health++;
    }
  }

  cout << "Program Studi Art of Coffee: " << jumlah_art_of_coffee << endl;
  cout << "Program Studi Creative Content: " << jumlah_creative_content << endl;
  cout << "Program Studi Mental Health: " << jumlah_mental_health << endl;
}

bool is_prime(int kode_unik) {
  if (kode_unik == 1) {
    return true;
  } else if (kode_unik == 2) {
    return false;
  } else {
    for (int i = 2; i < kode_unik; i++) {
      if (kode_unik % i == 0) {
        return false;
      }
    }
    return true;
  }
}
