//
// Created by Ariq Heritsa on 26/04/22.
//

#ifndef MODUL2_MAHASISWA_H
#define MODUL2_MAHASISWA_H

#include <iostream>

using namespace std;

const int NMAX = 100;

struct Mahasiswa {
  string nama, nim;
  float ipk;
  int semester, kode_unik;
};

typedef struct Mahasiswa TabMahasiswa[NMAX];

void input_data(TabMahasiswa &tab_mahasiswa, int &N);

void prodi_apa(string nim);

bool is_cumlaude(float ipk, int semester);

int max_ipk(TabMahasiswa tab_mahasiswa, int N);

float average_ipk(TabMahasiswa tab_mahasiswa, int N);

void berapa_prodi(TabMahasiswa tab_mahasiswa, int N);

bool is_prime(int kode_unik);

#endif //MODUL2_MAHASISWA_H
