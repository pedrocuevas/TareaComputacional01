#include<iostream>
#include<cstdlib>
#include <math.h>

using namespace std;

void imprimir(char M[8][8]){ //Función imprime matriz
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
  for(int z=0; z<10000000; z++){} //Ciclo de demora
}

bool prohibido(int a,int b){ //Función que verifica si es una posición prohibida
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

        int x = 7; //Posición inicial del caballo x=7,y=0
        int y = 0;
        M[7][0]='X';
        int cont = 0;

        for(i=0;i<8;i++){
                for(j=0;j<8;j++){
                M[i][j]='O';    //Inicialización de la matriz
                }
        }
        
        
        //Posicion de los 4 peones
        M[2][2]='O';
        M[2][5]='O';
        M[5][2]='O';
        M[5][5]='O';

        imprimir(M);


        while(cont<59){ //Ciclo para determinar numero de casillas pintadas
 
        int a = 1+(rand()%8); //Declaración de variable random() para seleccionar de 1 a 8 posiciones posibles


        switch(a) //Ciclo con numeros aleatorios
        {
        case 1:
        {
                if((x+2) < 9 && (y+1) < 9){ //Condición para no salirse del tablero
       
                if(prohibido(x+2,y+1)){              
                          x=x+2;
                          y=y+1;
                              if(M[x][y]=='O'){ //Si encuentra "O", pinta y suma 1 a la variable cont
                              cont++;
                              M[x][y]='X';
                              } 
                                 
                          }
        imprimir(M);           
       
        }
        }
        break; 

        case 2:
        { 
         
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
        }
        break;

        case 3:
        {
        
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
        }
        break;

        case 4:
        {  
       
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
        }
        break;
      
        case 5:
        {  
  
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
        }
        break;
      
        case 6:
         {  
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
        }
        break;
      
        case 7:
        {      
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
        }
         break;
      
         case 8:
        { 
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
         break;
        }

        }

}
