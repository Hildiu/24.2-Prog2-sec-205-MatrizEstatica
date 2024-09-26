#include <iostream>
#include <iomanip>
using namespace std;

void imprimirMatriz( int mat[][4], int filas, int col);
int hallaMenor( int matriz[][4], int filas,  int col);

int main()
{
   int matriz[3][4];

   for(int f=0; f<3; f++)
       for(int c=0; c<4; c++)
       {
           cout << "matriz[" << f << "][" << c << "]= ";
           cin >> matriz[f][c];
       }
   imprimirMatriz(matriz,3,4);
   cout << "\n";
   cout << "El menor dato de la matriz es: " << hallaMenor(matriz, 3, 4);
    return 0;
}

void imprimirMatriz( int mat[][4], int filas, int col)
{
   for(int f=0; f<filas; f++) {
       for (int c = 0; c < col; c++)
           cout << setw(5) << mat[f][c];
       cout << "\n";
   }
}


int hallaMenor( int matriz[][4], int filas,  int col)
{int elMenor= matriz[0][0];

    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++)
            if( matriz[f][c] < elMenor)
                elMenor = matriz[f][c];
    return elMenor;
}