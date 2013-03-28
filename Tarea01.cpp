#include<iostream>
#include<cstdlib>
#include <math.h>

using namespace std;

void imprimir(char M[8][8]){
int i=0;
int j=0;
system("clear");
for(i=0;i<8;i++){
for(j=0;j<8;j++){
cout<<M[i][j];
cout<<" ";
}
cout<<"\n";
}

}

/*
*
*/
int main() {

char M[8][8];
int i=0;
int j=0;
for(i=0;i<8;i++){
for(j=0;j<8;j++){
M[i][j]='O';
}
}
M[2][2]='O';
M[2][5]='O';
M[5][2]='O';
M[5][5]='O';

imprimir(M);


}

