/*************************************
* NOMBRE: #Yassine#
* PRIMER APELLIDO: #Marroun#
* SEGUNDO APELLIDO: #Nettah#
* DNI: #47587376#
* EMAIL: #ymarroun1@alumno.uned.es#
*************************************/
#include <stdio.h>

typedef enum TipoDia {
  Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo
};

/*-- Leer mes y año --*/
void LeerFecha( int &mes, int &anno ) {
  printf( "Mes (1..12)? " );
  scanf( "%d", &mes );
  printf( "Anno (1601..3000)? " );
  scanf( "%d", &anno );
}

/*-- Calcular años bisiestos --*/
int CalcularBisiestos( int &mes, int &anno ) {
  int bisiestos;
  bisiestos = 0;
  for( int i = 1601; i<anno; i++) {
    if( (i%4 ==  0) && (i%100 != 0) ) {
      bisiestos++;
    } else {
      if (i%400  == 0) {
        bisiestos++;
      }
    }
  }
  if( (anno%4 == 0) && (anno%100 != 0) ) {
    if( mes>2 ) {
      bisiestos++;
    }
  } else {
    if( (anno%400 == 0) && (mes>2) ) {
      bisiestos++;
    }
  }
return bisiestos;
}

/*-- Calcular incremento de años --*/
int CalcularAnnos( int &anno ) {
  return( anno - 1601 );
}

/*-- Calcular el incremento total de días --*/
int CalcularDias( int &mes ) {
  switch( mes ) {
    case 1:
    case 10:
    return 0;
    break;
    case 2:
    case 3:
    case 11:
    return 3;
    break;
    case 4:
    case 7:
    return 6;
    break;
    case 5:
    return 1;
    break;
    case 6:
    return 4;
    break;
    case 8:
    return 2;
    break;
    default:
    return 5;
  }
}

/*-- Devolver día de la semana en función
del incremento de días calculado --*/
TipoDia DiadelaSemana( int &incrementoDias ) {
  return TipoDia( incrementoDias%7 );
}

/*-- Imprimir calendario --*/
void ImprimirCalendario( int &mes, int &anno, TipoDia DiaSemana ) {
  int indiceFila;
  int indiceMes;
  int diaInicial;
  int diaFinal;
  printf( "\n" );
  switch( mes ) {
    case 1:
    printf( "ENERO                  " );
    diaFinal = 31;
    break;
    case 2:
    printf( "FEBRERO                " );
    if( (anno%4 == 0) && (anno%100 != 0) ) {
      diaFinal = 29;
    } else {
      if( anno%400 == 0) {
      diaFinal = 29;
    } else {
      diaFinal = 28;
      }
    }
    break;
    case 3:
    printf( "MARZO                  " );
    diaFinal = 31;
    break;
    case 4:
    printf( "ABRIL                  " );
    diaFinal = 30;
    break;
    case 5:
    printf( "MAYO                   " );
    diaFinal = 31;
    break;
    case 6:
    printf( "JUNIO                  " );
    diaFinal = 30;
    break;
    case 7:
    printf( "JULIO                  " );
    diaFinal = 31;
    break;
    case 8:
    printf( "AGOSTO                 " );
    diaFinal = 31;
    break;
    case 9:
    printf( "SEPTIEMBRE             " );
    diaFinal = 30;
    break;
    case 10:
    printf( "OCTUBRE                " );
    diaFinal = 31;
    break;
    case 11:
    printf( "NOVIEMBRE              " );
    diaFinal = 30;
    break;
    case 12:
    printf( "DICIEMBRE              " );
    diaFinal = 31;
    break;
  }
  printf( "%d", anno );
  printf( "\n" );
  printf( "===========================\n" );
  printf( "LU  MA  MI  JU  VI | SA  DO\n" );
  printf( "===========================\n" );

  switch( DiaSemana ) {
    case Lunes:
    diaInicial = 1;
  printf( " 1   2   3   4   5 |  6   7\n" );
  printf( " 8   9  10  11  12 | 13  14\n" );
  printf( "15  16  17  18  19 | 20  21\n" );
  if( diaFinal == 28 ) {
  printf( "22  23  24  25  26 | 27  28\n" );
  } else if( diaFinal == 29 ) {
  printf( "22  23  24  25  26 | 27  28\n" );
  printf( "29   .   .   .   .    .   .\n" );
  } else if( diaFinal == 30 ) {
  printf( "22  23  24  25  26 | 27  28\n" );
  printf( "29  30  31   .   .    .   .\n" );
  } else {
  printf( "22  23  24  25  26 | 27  28\n" );
  printf( "29  30  31   .   . |  .   .\n" );
  }
  break;
  case Martes:
  diaInicial = 2;
  printf( " .   1   2   3   4 |  5   6\n" );
  printf( " 7   8   9  10  11 | 12  13\n" );
  printf( "14  15  16  17  18 | 19  20\n" );
  printf( "21  22  23  24  25 | 26  27\n" );
  if( diaFinal == 28 ) {
  printf( "28   .   .   .   . |  .   .\n" );
  } else if( diaFinal == 29 ) {
  printf( "28  29   .   .   . |  .   .\n" );
  } else if( diaFinal == 30 ) {
  printf( "28  29  30   .   . |  .   .\n" );
  } else {
  printf( "28  29  30  31   . |  .   .\n" );
  }
  break;
  case Miercoles:
  diaInicial = 3;
  printf( " .   .   1   2   3 |  4   5\n" );
  printf( " 6   7   8   9  10 | 11  12\n" );
  printf( "13  14  15  16  17 | 18  19\n" );
  printf( "20  21  22  23  24 | 25  26\n" );
  if( diaFinal == 28 ) {
  printf( "27  28   .   .   . |  .   .\n" );
  } else if( diaFinal == 29 ) {
  printf( "27  28  29   .   . |  .   .\n" );
  } else if( diaFinal == 30 ) {
  printf( "27  28  29  30   . |  .   .\n" );
  } else {
  printf( "27  28  29  30  31 |  .   .\n" );
  }
  break;
  case Jueves:
  diaInicial = 4;
  printf( " .   .   .   1   2 |  3   4\n" );
  printf( " 5   6   7   8   9 | 10  11\n" );
  printf( "12  13  14  15  16 | 17  18\n" );
  printf( "19  20  21  22  23 | 24  25\n" );
  if( diaFinal == 28 ) {
  printf( "26  27  28   .   . |  .   .\n" );
  } else if( diaFinal == 29 ) {
  printf( "26  27  28  29   . |  .   .\n" );
  } else if( diaFinal == 30 ) {
  printf( "26  27  28  29  30 |  .   .\n" );
  } else {
  printf( "26  27  28  29  30 | 31   .\n" );
  }
  break;
  case Viernes:
  diaInicial = 5;
  printf( " .   .   .   .   1 |  2   3\n" );
  printf( " 4   5   6   7   8 |  9  10\n" );
  printf( "11  12  13  14  15 | 16  17\n" );
  printf( "18  19  20  21  22 | 23  24\n" );
  if( diaFinal == 28 ) {
  printf( "25  26  27  28   . |  .   .\n" );
  } else if( diaFinal == 29 ) {
  printf( "25  26  27  28  29 |  .   .\n" );
  } else if( diaFinal == 30 ) {
  printf( "25  26  27  28  29 | 30   .\n" );
  } else {
  printf( "25  26  27  28  29 | 30  31\n" );
  }
  break;
  case Sabado:
  diaInicial = 6;
  printf( " .   .   .   .   . |  1   2\n" );
  printf( " 3   4   5   6   7 |  8   9\n" );
  printf( "10  11  12  13  14 | 15  16\n" );
  printf( "17  18  19  20  21 | 22  23\n" );
  if( diaFinal  == 28 ) {
  printf( "24  25  26  27  28 |  .   .\n" );
  } else if( diaFinal == 29 ) {
  printf( "24  25  26  27  28 | 29   .\n" );
  } else if( diaFinal == 30 ) {
  printf( "24  25  26  27  28 | 29  30\n" );
  } else {
  printf( "24  25  26  27  28 | 29  30\n" );
  printf( "31   .   .   .   . |  .   .\n" );
  }
  break;
  case Domingo:
  diaInicial = 7;
  printf( " .   .   .   .   . |  .   1\n" );
  printf( " 2   3   4   5   6 |  7   8\n" );
  printf( " 9  10  11  12  13 | 14  15\n" );
  printf( "16  17  18  19  20 | 21  22\n" );
  if( diaFinal == 28) {
  printf( "23  24  25  26  27 | 28   .\n" );
  } else if( diaFinal == 29 ) {
  printf( "23  24  25  26  27 | 28  29\n" );
  } else if( diaFinal == 30 ) {
  printf( "23  24  25  26  27 | 28  29\n" );
  printf( "30   .   .   .   . |  .   .\n" );
  } else {
  printf( "23  24  25  26  27 | 28  29\n" );
  printf( "30  31   .   .   . |  .   .\n" );
  }
  break;
  }
}

/*-- Procedimiento --*/
int main() {
  int bisiestos;
  int annos;
  int dias;
  int incrementoDias;
  TipoDia diaSemana;
  int mes;
  int anno;
  int aux;
  LeerFecha( mes, anno );
  if( ((mes>=1)&&(mes<=12)) && ((anno>=1601)&&(anno<=3000)) ) {
  bisiestos = CalcularBisiestos( mes, anno );
  annos = CalcularAnnos( anno );
  dias = CalcularDias( mes );
  incrementoDias = bisiestos + annos + dias;
  diaSemana = DiadelaSemana( incrementoDias );
  ImprimirCalendario( mes, anno, diaSemana );
  }
}
