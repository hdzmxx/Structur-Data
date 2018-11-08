#include <iostream>
using namespace std;
int main()
{
    int matrix[10][10];
    int m;
    cout<<"Masukkan panjang matriks : ";
    cin>>m;
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"Masukkan ["<<i<<"]["<<j<<"] : ";
            cin>>matrix[i][j];
           if (i+j==m-1)
            {
                matrix[i][j]=0;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"  "<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}
