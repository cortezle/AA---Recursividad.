#include <iostream> 

using namespace std;


int potencia(int x, int n){
    //caso trivial, todo numero a la cero es 1
    if(n==0)
        return 1;
    else
        return potencia(x,n-1) * x;
}

int sum(int a[], int i, int m)
{
    int length = m;
    //n tiene que ser la longitud del arreglo -1
    int n= length-1;
    int low;
    int aux;

    
    if(i == n)
    {
        return low = a[i];
    }
    else
    {
        low = sum( a , i+1,m);
        if(a[i]<low)
        {
            aux = a[i];
        }
        else
        {
            aux = low;
        }
    }
    return aux;
};
int main(){
    int lista1[]={4,32,2};
    cout<<potencia(2,0)<<endl;
    cout<<potencia(3,3)<<endl;
    int leng = sizeof(lista1)/sizeof(int);
    cout<<sum(lista1,0,leng)<<endl;
    

    return 0;
}
