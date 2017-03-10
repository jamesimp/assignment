#include <iostream>
#include <cstdlib>
#include <fstream>
#include <math.h>
#include <cmath>
#include <cctype>
using namespace std;

int main(int argc, char* argv[])
{
   int L=atoi(argv[1]);
   int Nx=atoi(argv[2]);
   long int A=atoi(argv[3]);
   long int I=atoi(argv[4]);
   long int E=atoi(argv[5]);
   int l=L/Nx;
//cout<<(A*E)/l<<endl;


   // Matrix
    long double Ke[6][6] =                             {
                    {((A*E)/l),0,0,((-1*A*E)/l),0,0},
                    {0,((12*E*I)/(pow(l,3))),((6*E*I)/(pow(l,2))),0,((-12*E*I)/(pow(l,3))),((6*E*I)/(pow(l,2)))},
                    {0,0,((4*E*I)/l),0,((-6*E*I)/(pow(l,2))),((2*E*I)/l)},
                    {0,0,0,(A*E)/l,0,0},
                    {0,0,0,0,((-12*E*I)/(pow(l,3))),((-6*E*I)/(pow(l,2)))},
                    {0,0,0,0,0,(4*E*I)/l}
                    };


    // output each element of the matrix
   for ( int i = 0; i < 6; i++ )
      for ( int j = 0; j < 6; j++ ) {
         cout << "Ke[" << i << "][" << j << "]: ";
         cout << Ke[i][j]<< endl;


      }
      double qy=1;
      double qx;
      // Vector
      float Fe [6][1] =           {
                        {qx/2},
                        {qy/2},
                        {(qy*l)/12},
                        {qx/2},
                        {qy/2},
                        {(-qy*l)/12}
                    };

      // output each element of the vector
   for ( int i = 0; i < 6; i++ ){
        for ( int j = 0; j < 1; j++ ) {
         cout << "Fe[" << i << "][" << j << "]: ";
         cout << Fe[i][j]<< endl;
         }
    }

    //K((i-1)*(nn-1)+k,(i-1)*(nn-1)+l) = K((i-1)*(nn-1)+k,(i-1)*(nn-1)+l) + Ke(k,l);

}
