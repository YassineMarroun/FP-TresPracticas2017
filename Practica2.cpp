/*************************************
* NOMBRE: #Yassine#
* PRIMER APELLIDO: #Marroun#
* SEGUNDO APELLIDO: #Nettah#
* DNI: #47587376#
* EMAIL: #ymarroun1@alumno.uned.es#
*************************************/

#include <stdio.h>

int main () {
  int lado;
  printf( "\n" );
  printf( " Lado del Rombo? " );
  scanf( "%d", &lado );

  if ((lado>0) && (lado<21)) {

    /*-- 1º: Triángulo superior izquierdo --*/
    for (int cont=0; cont<=lado; cont++) {
      for (int j=0; j<lado-cont; j++) {
        printf( " " );
      }
      for (int k=0; k<=cont-1; k++) {
        if ((k==0) || (k%4==0)) {
          printf( "@" );
        }
        if ((k==1) || (k==3) || (k%4==1) || (k%4==3)) {
          printf( "." );
        }
        if ((k==2) || (k%4==2)) {
          printf( "o" );
        }
      }

      /*-- 2º: Triángulo superior derecho --*/
      for (int k2=(cont-1); k2>=1; k2--) {
        if ((k2==1) || (k2%4==1)) {
          printf( "@" );
        }
        if ((k2==2) || (k2%4==0) || (k2%4==2)) {
          printf( "." );
        }
        if ((k2==3) || (k2%4==3)) {
          printf( "o" );
        }
      }
      {
        printf( "\n" );
      }
    }

    /*-- 3º: Triángulo inferior izquierdo --*/
    for (int cont2=(lado-1); cont2>=1; cont2--) {
      for (int j2=0; j2<lado-cont2; j2++) {
        printf( " " );
      }
      for (int k3=0; k3<=cont2-1; k3++) {
        if ((k3==0) || (k3%4==0)) {
          printf( "@" );
        }
        if ((k3==1) || (k3==3) || (k3%4==1) || (k3%4==3)) {
          printf( "." );
        }
        if ((k3==2) || (k3%4==2)) {
          printf( "o" );
        }
      }

      /*-- 4º: Triángulo inferior derecho --*/
      for (int k4=(cont2-1); k4>=1; k4--) {
        if ((k4==1) || (k4%4==1)) {
          printf( "@" );
        }
        if ((k4==2) || (k4%4==0) || (k4%4==2)) {
          printf( "." );
        }
        if ((k4==3) || (k4%4==3)) {
          printf( "o" );
        }
      }
      {
        printf( "\n" );
      }
    }

  }
  else {
    printf( "\n" );
    printf( "--------------------------------------------------\n" );
    printf( "ERROR: El lado debe estar comprendido entre 1 y 20\n" );
    printf( "--------------------------------------------------\n" );
  }
}
