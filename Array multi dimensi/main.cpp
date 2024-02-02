#include <iostream>
using namespace std;

int main(){
/*
    // Latihan array 2 dimensi (1)

    // membuat array 2 dimensi kosong
    int a[2][3]; //2 baris dan 3 kolom

    // mengisi nilai array 2 dimensi
    a[0][0] = 5;
    a[0][1] = 10;
    a[0][2] = 15;
    a[1][0] = 20;
    a[1][1] = 25;
    a[1][2] = 30;

    // mencetak isi array
    cout<<"Nilai index ke-[0][0]: "<<a[0][0]<<endl;
    cout<<"Nilai index ke-[0][1]: "<<a[0][1]<<endl;
    cout<<"Nilai index ke-[0][2]: "<<a[0][2]<<endl;
    cout<<"Nilai index ke-[1][0]: "<<a[1][0]<<endl;
    cout<<"Nilai index ke-[1][1]: "<<a[1][1]<<endl;
    cout<<"nilai index ke-[1][2]: "<<a[1][2]<<endl;
}
*/
/*
    // Latihan array 2 dimensi (2)

    // membuat dan mengisi nilai array 2 dimensi
    int a[2][3] = {{5,10,15},{20,25,30}};

    // mencetak isi array
    cout<<"Nilai index ke-[0][0]: "<<a[0][0]<<endl;
    cout<<"Nilai index ke-[0][1]: "<<a[0][1]<<endl;
    cout<<"Nilai index ke-[0][2]: "<<a[0][1]<<endl;
    cout<<"Nilai index ke-[1][0]: "<<a[1][0]<<endl;
    cout<<"Nilai index ke-[1][1]: "<<a[1][1]<<endl;
    cout<<"Nilai index ke-[1][2]: "<<a[1][2]<<endl;
}
*/
/*
    // Latihan array 2 dimensi (3)

    int a[2][3] = {{5,10,15},{20,25,30}};

    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            cout<<"Nilai index ke-["<<i<<"]["<<j<<"]: "<<a[i][j]<<endl;
        }
    }

}
*/
/*
    // Latihan array 2 dimensi (4)

    int a[2][3]; // membuat wadah array 2 dimensi

    // mengisi nilai array 2 dimensi
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            cout<<"Input nilai index ke-["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    // menampilkan nilai array 2 dimensi
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            cout<<"Nilai index ke-["<<i<<"]["<<j<<"]: "<<a[i][j]<<endl;
        }
    }
}
*/
/*
    // Latihan array 2 dimensi (5)

    int a[2][3]; // membuat ordo matrik 2x3

    // mengisi nilai ordo matrik 2x3
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    // menampilkan nilai ordo matrik 2x3
    cout<<"\nNilai matrik 2x3";
    for (int i=0; i<=1; i++) {
        cout<<endl;
        for (int j=0; j<=2; j++) {
            cout<<a[i][j]<<" ";
        }
    }
}
*/
/*
    // Latihan array 2 dimensi (6)

    int a[2][3]; // membuat ordo matrik 2x3
    int b[2][3]; // membuat ordo matrik 2x3

    // mengisi nilai matrik A
    cout<<"Inputkan nilai matrik A"<<endl;
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    //mengisi nilai matrik B
    cout<<"Inputkan nilai matrik B"<<endl;
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }

    // menampilkan matrik A
    cout<<"\nNilai matrik A";
    for (int i=0; i<=1; i++) {
        cout<<endl;
        for (int j=0; j<=2; j++) {
            cout<<a[i][j]<<" ";
        }
    }

    // menampilkan matrik B
    cout<<"\nNilai matrik B";
    for (int i=0; i<=1; i++) {
        cout<<endl;
        for (int j=0; j<=2; j++) {
            cout<<b[i][j]<<" ";
        }
    }

    // menampilkan penjumlahan matrik A+B
    cout<<"\nHasil penjumlahan matrik A+B";
    for (int i=0; i<=1; i++) {
        cout<<endl;
        for (int j=0; j<=2; j++) {
            cout<<a[i][j]+b[i][j]<<" ";
        }
    }
}
*/
/*
    // Latihan array 2 dimensi (7)

    string data[3][3];

    for (int i=0; i<=2; i++) {
        for (int j=0; j<=2; j++) {
            if (j==0) {
                cout<<"Nama mahasiswa : ";
                cin>>data[i][j];
            } else if (j==1) {
                cout<<"Nilai UTS : ";
                cin>>data[i][j];
            } else if (j==2) {
                cout<<"Nilai UAS : ";
                cin>>data[i][j];
            }
        }
    }

    cout<<"\nNama\tUTS\tUAS";
    for (int i=0; i<=2; i++) {
        cout<<endl;
        for (int j=0; j<=2; j++) {
            cout<<data[i][j]<<"\t";
        }
    }
}
*/
/*
    // Latihan array 1 dimensi 1

    // membuat array 3 dimensi kosong
    int a[2][3][4];

    // mengisi nilai array 3 dimensi
    a[0][0][0] = 1;  a[1][0][0] = 13;
    a[0][0][1] = 2;  a[1][0][1] = 14;
    a[0][0][2] = 3;  a[1][0][2] = 15;
    a[0][0][3] = 4;  a[1][0][3] = 16;
    a[0][0][0] = 5;  a[1][1][0] = 17;
    a[0][0][1] = 6;  a[1][1][1] = 18;
    a[0][0][2] = 7;  a[1][1][2] = 19;
    a[0][0][3] = 8;  a[1][1][3] = 20;
    a[0][0][0] = 9;  a[1][2][0] = 21;
    a[0][0][1] = 10; a[1][2][1] = 22;
    a[0][0][2] = 11; a[1][2][2] = 23;
    a[0][0][3] = 12; a[1][2][3] = 24;

    // mencetak salah satu isi array
    cout<<"Nilai index ke-[1][2][3]: "<<a[1][2][3]<<endl;
}
*/

    // Latihan array 2 dimensi 2

    // membuat dan memberi nilai array 3 dimensi
    int a[2][3][4] = {{{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}, {{13,14,15,16}, {17,18,19,20}, {21,22,23,24}}};

    // mencetak salah satu isi array
    cout<<"Nilai index ke-[1][2][3]: "<<a[1][2][3]<<endl;
}
