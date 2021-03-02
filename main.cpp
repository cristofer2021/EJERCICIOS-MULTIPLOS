#include <iostream>
using namespace std;
void multiplos (int a[],int[]);
int op,w,n,i=0;
int arreglo1[0];
int main() {
  int n,w,i;
cout<<"-------------------------------------"<<endl;
    cout<<"Ingresar el tamaño del arreglo:";
    cin>>n;
    cout<<"Ingrese el numero:";
    cin>>w;
    arreglo1[0]=w;
    
    for (i=0;i<n;i++){
      arreglo1[i]=arreglo1[0]*(i+1);
      cout<<" "<<arreglo1[i];
      }
    }