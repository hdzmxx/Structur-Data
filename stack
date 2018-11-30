#include <iostream>
#include <iomanip>
using namespace std;
 int main() {
    int pilih;
    int top = 0, i;
    int sisa;
    char Nama[20][20], Posisi[20][20];
    do {
        cout<<"============================\n";
        cout<<" MENU\n";
        cout<<"============================\n";
        cout<<"1. PUSH STACK \n";
        cout<<"2. POP STACK \n";
        cout<<"3. TAMPILKAN DATA\n";
        cout<<"4. EXIT \n";
        cout<<"============================\n";
        cout<<"Masukkan Pilihan : ";cin>>pilih;

if (pilih <= 4){ switch (pilih){
        case 1:
         if (top == 3) {
            cout<<"Tumpukan Penuh!!"<<endl;}
            else {
            cout<<"Masukkan Nama pemain   : ";cin>>Nama[top+1];
            cout<<"Masukkan Posisi        : ";cin>>Posisi[top+1];
            cout<<"Stack sudah dimasukkan!!\n\n"<<endl;
        top++; }
            break;
        case 2:
         if (top<1) {
        cout<<"Tumpukan Sudah Kosong!!\n\n"<<endl;
          } else {
        cout<<"\nTumpukan yang ditampilkan :"<<top<< "\n\n";
        cout<<"Nama       : "<<Nama[top]<<endl;
        cout<<"Posisi     : "<<Posisi[top]<<endl;
        top--;
        cout<<"Tumpukan sudah dikeluarkan!!\n\n\n\n"<<endl; }
            break;
        case 3:
    cout<<setiosflags(ios::left)<<setw(5)<<"No";
    cout<<setiosflags(ios::left)<<setw(20)<<"Nama";
    cout<<setiosflags(ios::left)<<setw(10)<<"Posisi"<<endl;
        if (top == 0)
        cout << "Tumpukan Kosong!!\n\n\n" << endl;
        else for (i = 1; i <= top; i++){
    cout<<setiosflags(ios::left)<<setw(5)<<i;
    cout<<setiosflags(ios::left)<<setw(20)<<Nama[i];
    cout<<setiosflags(ios::left)<<setw(10)<< Posisi[i] << endl;
    }
    break;
        case 4:
            cout<<"\n\nKELUAR.........";
            break;
    } } else {
         cout<<"Pilihan Salah , Silahkan Masukkan 1-4"<<endl;
    } } while (pilih !=5);
}
