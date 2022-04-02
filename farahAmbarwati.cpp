/*1121031038
  Farah AmbarWati
  Informatika B */

// T1_StrukturData

/* Program Tugas untuk matakuliah Struktur Data
  Membua Sebuah Fungsi Tambahan Pada File Jam
  Menggunakan Value changer produce / selector Function dan Validator*/

#include <iostream>
/*"include" adalah sebuah perintah untuk mengambil file dari tempat lain
  <iostream> sebua file yang berfungsi untuk menginput dan mengeluarkan data
*/

/* fungsi dibawa adalah untuk menggunakan
semua yang ada dalam namespace std (standard)*/
using namespace std;

// menggunakan selector function
int getJam(int input1){
  if( input1 <= 23){
    if (0 <= input1) {
      cout << input1 << ":";
    } else {cout << "Waktu tidak valid";}
  }else{
    cout << "waktu tidak valid";
  }
  
  return input1;
};
//menggunakan selector function
int getMenitDetik(int input1){
  if ( input1 <= 59){
    if (0 <= input1) {
      cout << input1 << ":";
    } else {cout << "waktu tidak valid";}
  }else{
    cout << "waktu tidak valid";
  }
  
  return input1;
};

/*dibawah adalah fungsi utama
untuk mendeklarasikan program ke console */
int main() {
  int input1,input2,input3;
  cout << "Jam:";
  cin >> input1;
  cout << "Menit:";
  cin >> input2;
  cout << "Detik:";
  cin >> input3;
  getJam(input1);
  getMenitDetik(input2);
  getMenitDetik(input3);
  
  return 0;
}
