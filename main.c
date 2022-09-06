#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main(){

    Poltrona cadeiras[LIN][COL];
    telaInicial();
    iniciaPoltronas(cadeiras);
    casosMenuPrincipal(cadeiras);

    return 0;
}
