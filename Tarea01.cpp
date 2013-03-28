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

bool prohibido(int a,int b){
    if(a==2 && b==5)
    return false;
    else if(a==5 && b==2)
     return false;
      else if (a== 2 && b==2)
       return false;
        else if (a==5 && b==5)
         return false;
          else
           return true;
}
/*
*
*/
int main() {

char M[8][8];
int i=0;
int j=0;

int x = 7;
int y = 0;

int cont = 0;

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


if((x+2) < 9 && (y+1) < 9){
       
if(prohibido(x+2,y+1)){              
                          x=x+2;
                          y=y+1;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              } 
                                 
                          }
      imprimir(M);           
       
       }

         
if ((x+2) < 9 && (y-1) >=0){
      
        if(prohibido(x+2,y-1)){ 
                          x=x+2;
                          y=y-1;
                              if(M[x][y]=='O' ){
                              cont++;
                              M[x][y]='X';
                              }  
                                   
                          }
        imprimir(M);
      
      }

        
if ((x-2) >= 0 && (y+1) < 9){
    
      if(prohibido(x-2,y+1)){
                          x=x-2;
                          y=y+1;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              } 
                                             
                                   
                          }
      imprimir(M);
      
      
      }

       
  if ((x-2) >= 0 && (y-1) >= 0){
      
        if(prohibido(x-2,y-1)){ 
                          x=x-2;
                          y=y-1;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              }  
                                 
                          }
        imprimir(M);
      
      
      }
  
  if ((x+1) < 9 && (y+2) < 9){
      
        if(prohibido(x+1,y+2)){ 
                          x=x+1;
                          y=y+2;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              }
                                
                          }
        imprimir(M);
      
      
      }
   
  if ((x+1) < 9 && (y-2) >=0){
      
        if(prohibido(x+1,y-2)){ 
                          x=x+1;
                          y=y-2;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              }  
                           
                          }
       imprimir(M);
      
      
      }
        
  if ((x-1) >= 0 && (y+2) < 9){
      
        if(prohibido(x-1,y+2)){ 
                          x=x-1;
                          y=y+2;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              }  
                                
                          }
        imprimir(M);
      
      
      }
       
  if ((x-1) >= 0 && (y-2) >= 0){
      
        if(prohibido(x-1,y-2)){ 
                          x=x-1;
                          y=y-2;
                              if(M[x][y]=='O'){
                              cont++;
                              M[x][y]='X';
                              } 
                              
                          }
        imprimir(M); 
      
      }


}

