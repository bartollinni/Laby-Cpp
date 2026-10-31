// Bartlomiej Kozlowski

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
  ifstream plik("data.txt"); 

    string linia;
    getline(plik,linia);
    // cout << linia << endl;
    // cout << "h" << endl;

    int rok, miesiac, dzien;
    double tmin, tav, tmax, opady;

    double suma_tav[12] = {};
    double suma_tmin[12] = {};
    double suma_tmax[12] = {};
    double suma_opady[12] = {};

    int liczba_dni[12] = {};



    while(plik >> rok >> miesiac >> dzien >> tmin >> tav >> tmax >> opady){
        if (miesiac == 1) {
            suma_tav[0] += tav;
            suma_tmin[0] += tmin;
            suma_tmax[0] += tmax;
            suma_opady[0] += opady;

            liczba_dni[miesiac - 1]++;
        }

        else if(miesiac == 2) {
            suma_tav[1] += tav;
            suma_tmin[1] += tmin;
            suma_tmax[1] += tmax;
            suma_opady[1] += opady;

            liczba_dni[1]++;
        }

        else if(miesiac == 3) {
            suma_tav[2] += tav;
            suma_tmin[2] += tmin;
            suma_tmax[2] += tmax;
            suma_opady[2] += opady;

            liczba_dni[2]++;
        }

        else if(miesiac == 4) {
            suma_tav[3] += tav;
            suma_tmin[3] += tmin;
            suma_tmax[3] += tmax;
            suma_opady[3] += opady;

            liczba_dni[3]++;
        }

        else if(miesiac == 5) {
            suma_tav[4] += tav;
            suma_tmin[4] += tmin;
            suma_tmax[4] += tmax;
            suma_opady[4] += opady;

            liczba_dni[4]++;
        }

        else if(miesiac == 6) {
            suma_tav[5] += tav;
            suma_tmin[5] += tmin;
            suma_tmax[5] += tmax;
            suma_opady[5] += opady;

            liczba_dni[5]++;
        }
        
        else if(miesiac == 7) {
            suma_tav[6] += tav;
            suma_tmin[6] += tmin;
            suma_tmax[6] += tmax;
            suma_opady[6] += opady;

            liczba_dni[6]++;
        }

        else if(miesiac == 8) {
            suma_tav[7] += tav;
            suma_tmin[7] += tmin;
            suma_tmax[7] += tmax;
            suma_opady[7] += opady;

            liczba_dni[7]++;
        }

        else if(miesiac == 9) {
            suma_tav[8] += tav;
            suma_tmin[8] += tmin;
            suma_tmax[8] += tmax;
            suma_opady[8] += opady;

            liczba_dni[8]++;
        }

        else if(miesiac == 10) {
            suma_tav[9] += tav;
            suma_tmin[9] += tmin;
            suma_tmax[9] += tmax;
            suma_opady[9] += opady;

            liczba_dni[9]++;
        }

        else if(miesiac == 11) {
            suma_tav[10] += tav;
            suma_tmin[10] += tmin;
            suma_tmax[10] += tmax;
            suma_opady[10] += opady;

            liczba_dni[10]++;
        }

        else if(miesiac == 12) {
            suma_tav[11] += tav;
            suma_tmin[11] += tmin;
            suma_tmax[11] += tmax;
            suma_opady[11] += opady;

            liczba_dni[11]++;
        }
        
    }
    
    //=========styczen=========
    double srednia_tav_styczen = suma_tav[0] / liczba_dni[0];
    double srednia_tmin_styczen = suma_tmin[0] / liczba_dni[0];
    double srednia_tmax_styczen = suma_tmax[0] / liczba_dni[0];

    //=========luty==========
    double srednia_tav_luty = suma_tav[1] / liczba_dni[1];
    double srednia_tmin_luty = suma_tmin[1] / liczba_dni[1];
    double srednia_tmax_luty = suma_tmax[1] / liczba_dni[1];

    //=========marzec==========

    double srednia_tav_marzec = suma_tav[2] / liczba_dni[2];
    double srednia_tmin_marzec = suma_tmin[2] / liczba_dni[2];
    double srednia_tmax_marzec = suma_tmax[2] / liczba_dni[2];

    //=========kwiecien==========

    double srednia_tav_kwiecien = suma_tav[3] / liczba_dni[3];
    double srednia_tmin_kwiecien = suma_tmin[3] / liczba_dni[3];
    double srednia_tmax_kwiecien = suma_tmax[3] / liczba_dni[3];

    //=========maj==========

    double srednia_tav_maj = suma_tav[4] / liczba_dni[4];
    double srednia_tmin_maj = suma_tmin[4] / liczba_dni[4];
    double srednia_tmax_maj = suma_tmax[4] / liczba_dni[4];

    //=========czerwieca==========

    double srednia_tav_czerwiec = suma_tav[5] / liczba_dni[5];
    double srednia_tmin_czerwiec = suma_tmin[5] / liczba_dni[5];
    double srednia_tmax_czerwiec = suma_tmax[5] / liczba_dni[5];

    //=========lipiec==========

    double srednia_tav_lipiec = suma_tav[6] / liczba_dni[6];
    double srednia_tmin_lipiec = suma_tmin[6] / liczba_dni[6];
    double srednia_tmax_lipiec = suma_tmax[6] / liczba_dni[6];

    //=========sierpien ==========

    double srednia_tav_sierpien = suma_tav[7] / liczba_dni[7];
    double srednia_tmin_sierpien = suma_tmin[7] / liczba_dni[7];
    double srednia_tmax_sierpien = suma_tmax[7] / liczba_dni[7];

    //=========wrzesien==========

    double srednia_tav_wrzesien = suma_tav[8] / liczba_dni[8];
    double srednia_tmin_wrzesien = suma_tmin[8] / liczba_dni[8];
    double srednia_tmax_wrzesien = suma_tmax[8] / liczba_dni[8];

    //=========pazdziernik==========

    double srednia_tav_pazdziernik = suma_tav[9] / liczba_dni[9];
    double srednia_tmin_pazdziernik = suma_tmin[9] / liczba_dni[9];
    double srednia_tmax_pazdziernik = suma_tmax[9] / liczba_dni[9];

    
    //=========listopad==========

    double srednia_tav_listopad= suma_tav[10] / liczba_dni[10];
    double srednia_tmin_listopad= suma_tmin[10] / liczba_dni[10];
    double srednia_tmax_listopad = suma_tmax[10] / liczba_dni[10];

    
    //=========grudzien=========

    double srednia_tav_grudzien= suma_tav[11] / liczba_dni[11];
    double srednia_tmin_grudzien = suma_tmin[11] / liczba_dni[11];
    double srednia_tmax_grudzien = suma_tmax[11] / liczba_dni[11];

    
    cout << fixed << setprecision(2);

    cout << left << setw(15) << "Miesiac"
     << right << setw(12) << "Tav"
     << setw(12) << "Tmin"
     << setw(12) << "Tmax"
     << setw(12) << "Opady" << endl;
    
     cout << left << setw(15) << "Styczen"
     << right << setw(12) << srednia_tav_styczen  
     << setw(12) << srednia_tmin_styczen
     << setw(12) << srednia_tmax_styczen
     << setw(12) << suma_opady[0] << endl;

     cout << left << setw(15) << "Luty"
     << right << setw(12) << srednia_tav_luty
     << setw(12) << srednia_tmin_luty
     << setw(12) << srednia_tmax_luty
     << setw(12) << suma_opady[1] << endl;

     cout << left << setw(15) << "Marzec"
     << right << setw(12) << srednia_tav_marzec
     << setw(12) << srednia_tmin_marzec
     << setw(12) << srednia_tmax_marzec
     << setw(12) << suma_opady[2] << endl;

     cout << left << setw(15) << "Kwiecien"
     << right << setw(12) << srednia_tav_kwiecien
     << setw(12) << srednia_tmin_kwiecien
     << setw(12) << srednia_tmax_kwiecien
     << setw(12) << suma_opady[3] << endl;

     cout << left << setw(15) << "Maj"
     << right << setw(12) << srednia_tav_maj
     << setw(12) << srednia_tmin_maj
     << setw(12) << srednia_tmax_maj
     << setw(12) << suma_opady[4] << endl;

     cout << left << setw(15) << "Czerwiec"
     << right << setw(12) << srednia_tav_czerwiec
     << setw(12) << srednia_tmin_czerwiec
     << setw(12) << srednia_tmax_czerwiec
     << setw(12) << suma_opady[5] << endl;

     cout << left << setw(15) << "Lipiec"
     << right << setw(12) << srednia_tav_lipiec
     << setw(12) << srednia_tmin_lipiec
     << setw(12) << srednia_tmax_lipiec
     << setw(12) << suma_opady[6] << endl;
    
     cout << left << setw(15) << "Sierpien"
     << right << setw(12) << srednia_tav_sierpien
     << setw(12) << srednia_tmin_sierpien
     << setw(12) << srednia_tmax_sierpien
     << setw(12) << suma_opady[7] << endl;

     cout << left << setw(15) << "Wrzesien"
     << right << setw(12) << srednia_tav_wrzesien
     << setw(12) << srednia_tmin_wrzesien
     << setw(12) << srednia_tmax_wrzesien
     << setw(12) << suma_opady[8] << endl;

     cout << left << setw(15) << "Pazdziernik"
     << right << setw(12) << srednia_tav_pazdziernik
     << setw(12) << srednia_tmin_pazdziernik
     << setw(12) << srednia_tmax_pazdziernik
     << setw(12) << suma_opady[9] << endl;
    
     cout << left << setw(15) << "Listopad"
     << right << setw(12) << srednia_tav_listopad
     << setw(12) << srednia_tmin_listopad
     << setw(12) << srednia_tmax_listopad
     << setw(12) << suma_opady[10] << endl;

     cout << left << setw(15) << "Grudzien"
     << right << setw(12) << srednia_tav_grudzien
     << setw(12) << srednia_tmin_grudzien
     << setw(12) << srednia_tmax_grudzien
     << setw(12) << suma_opady[11] << endl;

    plik.close();
    return 0;

  }
    
