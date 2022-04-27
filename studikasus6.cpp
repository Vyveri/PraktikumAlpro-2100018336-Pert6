#include <iostream>
#include <string.h>
using namespace std;

class Operator{
  public:
       void input();
       void proses();
       void output();

  private:
      string dosen, matkul[4];
      int nilai[4];
      int maks, min;
      float rata;
      int jum;
};

void Operator::input(){
        cout<<"Masukkan Nama Dosen = "; cin >> dosen;
          for (int i=0;i<4;i++){
            cout<<"Masukkan Nama Mata Kuliah : "; cin>>matkul[i];
            cout<<"Masukkan Nilai : "; cin>>nilai[i];
          }
};

void Operator::proses(){
        maks = nilai[0];
        for (int i=0; i<4; i++){
          if (nilai[i] > maks){
            maks = nilai[i];
          }
        }
  
        min = nilai[0];
        for (int i=0; i<4; i++){
          if (nilai[i] < min){
            min = nilai[i];
          }
        }
  
        for (int i=0; i<4; i++){
          jum+=nilai[i];
          }
        rata = jum/4;
};

void Operator::output(){
        cout<<"Nama Dosen : "<<dosen<<endl;
          for (int i=0;i<4;i++){
            cout<<"Mata Kuliah: "<<matkul[i]<<endl;
            cout<<"Nilai: "<<nilai[i]<<endl;
          }
        cout<<"Nilai Maksimum : "<<maks<<endl;
        cout<<"Nilai Minimum : "<<min<<endl;
        cout<<"Rata-rata nilai : "<<rata<<endl;
};

int main() {
  Operator run;
  run.input();
  cout << endl;
  run.proses();
  cout << endl;
  run.output();
  cout << endl;
  return 0;
}

