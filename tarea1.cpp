#include <iostream> 

using namespace std;

void add( int a[3][3] , int b[3][3] , int c[3][3], int i, int j, int n)
{
    if(i<n)
    {
        if(j<n)
        {
            c[i][j]=a[i][j]+b[i][j];
		    j++;
		    add(a,b,c,i,j,n);
        }
         j=0;
	     i++;
	     add(a,b,c,i,j,n);
    }
}

void mostrarM(int matrix[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< matrix[i][j]<<"\t";
        }
        cout<<'\n';
    }
    
}

int potencia(int x, int n){
    //caso trivial, todo numero a la cero es 1
    if(n==0)
        return 1;
    else
        return potencia(x,n-1) * x;
}

int menor(int a[], int i, int m)
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
        low = menor( a , i+1,m);
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
    //Ejercicio 1
    int mat1[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int mat2[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int mat3[3][3];
    add(mat1,mat2,mat3,0,0,3);
    mostrarM(mat3);
    
    //Ejercicio2
    cout<<potencia(2,0)<<endl;
    cout<<potencia(3,3)<<endl;
    
    //Ejercicio3
    int lista1[]={4,32,2};
    int leng = sizeof(lista1)/sizeof(int);
    cout<<menor(lista1,0,leng)<<endl;
    
    

    return 0;
}
