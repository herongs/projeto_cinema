#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"
#define LIN 3
#define COL 5

typedef struct{
    int numero;
    int status;
}Poltrona;

void telaInicial();
void iniciaPoltronas(Poltrona cadeiras[LIN][COL]);
int menuPrincial();
int menuReserva();
int casosReserva(Poltrona cadeiras[LIN][COL]);
void reservaPoltrona(Poltrona cadeiras[LIN][COL]);
void cancelaReserva(Poltrona cadeiras[LIN][COL]);
void confirmaReserva(Poltrona cadeiras[LIN][COL]);
int menuCompra();
int casosCompra(Poltrona cadeiras[LIN][COL]);
void compraPoltrona(Poltrona cadeiras[LIN][COL]);
void cancelaCompra(Poltrona cadeiras[LIN][COL]);
void imprimePoltronas(Poltrona cadeiras[LIN][COL]);


#endif
