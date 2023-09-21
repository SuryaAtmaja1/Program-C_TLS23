#include <iostream>
using namespace std;

float tabungan [5] ;
int makan, i, a = 1;
int main()
{
    cout << "\t Alat penghitung pengeluaran sederhana" << endl;

    do {
        cout<<"=======untuk hari ke-"<<a<<"======="<<endl;

        cout<<"Berapa uang yang kamu dapatkan?"<< endl;
        cin>> tabungan[0];
        tabungan [3] = tabungan [3] + tabungan [0];

        cout<<"Berapa kali kamu membeli makan hari ini?"<< endl;
        cin>>makan;

        if (makan>0){
            for(i=1; i<=makan; i++){
                cout<<"untuk makan ke-"<<i<< " mengeluarkan berapa uang?"<<endl;
                cin>>tabungan[1];
                tabungan[2] = tabungan [3] - tabungan [1];
                tabungan [3] = tabungan [2];
            }
        } 
        cout<<"pengeluaran yang dikeluarkan selain untuk makan berapa?"<<endl;
        cin>> tabungan[4];
        tabungan [3] = tabungan[3]-tabungan[4];
        cout<<"maka uangmu saat ini seharusnya adalah: Rp."<<tabungan [3]<<endl;
        a = a + 1;
    }
    while(a>0);
    return 0;
}
