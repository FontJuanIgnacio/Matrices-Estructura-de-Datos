#include<iostream>

using namespace std;

int main()
{
    //declaración matriz sparse
    int a[3][7]={{0,0,0,0,0,0,10},{0,0,11,0,0,0,0},{0,0,0,12,0,0,0}};
    int n=3;
    int m=7;
    
    
    int dist_cero=0;
    
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if(a[i][j] != 0){
                dist_cero++;
            }
        }
    }
    
    
    int b[dist_cero+1][3] = {{n,m,dist_cero}};
    int filas_b = 1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=0){
                b[filas_b][0]=i;
                b[filas_b][1]=j;
                b[filas_b][2]=a[i][j];
                filas_b++;
                
            }
        }
    }
    
    for(int i=0; i<filas_b;i++){
        for(int j=0; j<3;j++){
            cout<<b[i][j]<<"  ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
