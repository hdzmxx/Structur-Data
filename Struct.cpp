#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

typedef struct
{
    string nama,nim;
    int nilai;
} siswa;

typedef siswa mahasiswa[10];
mahasiswa mhs;//var array record
mahasiswa dummy;//var untuk sorting
int n=0;

void tambah_data(mahasiswa &X)
{
   char ya;
   ulang :
       n++;
       cout<<"masukkan data mahasiswa ke-"<<n<<endl;
       cout<<"masukkan nim : ";
       cin>>X[n].nim;
       cout<<"masukkan nama : ";
       cin>>X[n].nama;
       cout<<"masukkan nilai : ";
       cin>>X[n].nilai;
       cout<<endl;
       cout<<"input berhasil, input lagi? (y/t)"<<endl;;
       cin>>ya;
        if (ya=='y')
        {
            goto ulang;
        }
            else
            {
                cout<<"tekan enter untuk kembali ke menu utama"<<endl;
            }
}

void cetak_data(mahasiswa &X)
{
    system("cls");
    cout<<"       DAFTAR MAHASISWA SAAT INI      "<<endl;
    cout<<"======================================"<<endl;
    cout<<"No   NIM         Nama            Nilai"<<endl;
    cout<<"--------------------------------------"<<endl;
    for (int i=1; i<=n;i++)
    {
        cout<<i<<"    "<<X[i].nim<<"          "<<X[i].nama<<"             "<<X[i].nilai<<endl;
    }
    cout<<"--------------------------------------"<<endl;
}

void cari_data(mahasiswa &X)
{
    int cari; bool ketemu=false;
    cout<<"Mencari nilai mahasiswa"<<endl;
    cout<<"masukkan nilai yang dicari : ";
    cin>>cari;
    for (int i=1; i<=n; i++)
    {
        if (X[i].nilai==cari)
        {
            ketemu=true;
            cout<<"yang mempunyai nilai "<<cari<<"ada di "<<endl;
            cout<<"rec number : "<<i<<" nim : "<<X[i].nim<<" nama : "<<X[i].nama<<endl;
        }
            if (not ketemu)
            {
                cout<<"tidak ada mhs dengan nilai "<<cari<<endl;
            }
    }
}

void urut_data1(mahasiswa &X)
{
    siswa swap;
    for (int i=1;i<=n; i++)
    {
        dummy[i]=X[i];
    }
    cout<<"mengurutkan data berdasar NIM"<<endl;
        for(int i=1; i<n; i++)
        {
         for(int j=i+1; j<=n;j++)
            {
                if(dummy[i].nim>dummy[j].nim)
                {
                    swap=dummy[i];
                    dummy[i]=dummy[j];
                    dummy[j]=swap;
                }
            }
        }
    system("cls");
    cout<<"mengurutkan data berdasarkan NIM"<<endl;
    cout<<"data sudah diurutkan"<<endl;
    cetak_data(dummy);
}

void urut_data2(mahasiswa &X)
{
    siswa swap;
    for (int i=1;i<=n; i++)
    {
        dummy[i]=X[i];//copying data ke dummy
    }
        for(int i=1; i<n; i++)
        {
         for(int j=1; j<=n-i;j++)
            {
                if(dummy[j].nilai>dummy[j+1].nilai)
                {
                    swap=dummy[j];
                    dummy[j]=dummy[j+1];
                    dummy[j+1]=swap;
                }
            }
        }
    system("cls");
    cout<<"mengurutkan data berdasarkan Nilai"<<endl;
    cout<<"data sudah diurutkan"<<endl;
    cetak_data(dummy);
}

float rata_rata_nilai(mahasiswa X)
{
    float jum=0;
    for(int i=1; i<=n;i++)
    {
        jum=jum+X[i].nilai;
    }
    float rata=jum/n;
    return rata;
}

int main()
{
    int pilih=0;
    lagi:
        system("cls");
    cout<<"pilih menu : "<<endl;
    cout<<"1. input data"<<endl;
    cout<<"2. cetak data"<<endl;
    cout<<"3. cari data"<<endl;
    cout<<"4. urut data berdasarkan nim(straight exchange)"<<endl;
    cout<<"5. urut data berdasarkan nilai(bubble)"<<endl;
    cout<<"0. selesai"<<endl;
    cout<<""<<endl;
    cout<<"masukkan pilihan menu : ";
    cin>>pilih;

    switch(pilih)
    {
          case 1 :
        {
            if (n==20)
            {
                cout<<"data penuh"<<endl;
            }
                else
                {
                    tambah_data(mhs);
                }
            break;
        }

    case 2 :
        {
            if (n==0)
            {
                cout<<"data kosong"<<endl;
            }
                else
                {
                    cetak_data(mhs);
                }
            break;
        }

    case 3 :
        {
            if (n==0)
            {
                cout<<"data kosong"<<endl;
            }
                else
                {
                    cari_data(mhs);
                }
            break;
        }

    case 4 :
        {
             if (n==0)
            {
                cout<<"data kosong"<<endl;
            }
                else
                {
                    urut_data1(mhs);
                }
            break;
        }

    case 5 :
        {
             if (n==0)
            {
                cout<<"data kosong"<<endl;
            }
                else
                {
                    urut_data2(mhs);
                }
            break;
        }

    case 0 :
        {
            cout<<"terima kasih"<<endl;
            break;
        }

    default :
        cout<<"salah pilih menu"<<endl;
    }
        system("pause");
        if (pilih!=0) goto lagi;
        cout<<"rata-rata nilai mahasiswa adalah "<<rata_rata_nilai(mhs)<<endl;

    return 0;
}
