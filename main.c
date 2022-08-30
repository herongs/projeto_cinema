#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIN 3
#define COL 5

struct Poltrona{
    int numero;
    int status;
};


void telaInicial(){

    printf("----------------------\n");
    printf("----------------------\n");
    printf("--------CINEMA--------\n");
    printf("----SEJA BEM VINDO----\n");
    printf("----------------------\n");
    printf("----------------------\n\n");


    system("pause");
}

void iniciaPoltronas(struct Poltrona cadeiras[LIN][COL]){


    int cont =11;
        for(int i =0; i< LIN; i++){
            for(int j = 0; j< COL; j++){
               // if ( cont %10 == 0){
               // cont++;
           // }
            cadeiras[i][j].numero = cont;
            cont++;
            cadeiras[i][j].status = 0;

        }
    }
}

int menuPrincial(){

    int opcao;

    system("cls");
    printf("--------------------\n");
    printf("--------MENU--------\n");
    printf("--------------------\n");
    printf("-   1 - RESERVAR   -\n");
    printf("--------------------\n");
    printf("-   2 - COMPRAR    -\n");
    printf("--------------------\n");
    printf("-   0 - SAIR       -\n");
    printf("--------------------\n\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;

}

int menuReserva(){

    int reserva;

    system("cls");
    printf("--------------------\n");
    printf("----MENU-RESERVA----\n");
    printf("--------------------\n");
    printf("1 - Realizar Reserva\n");
    printf("--------------------\n");
    printf("2 - Comprar         \n");
    printf("--------------------\n");
    printf("3 - Cancelar Reserva\n");
    printf("--------------------\n");
    printf("-   0 - VOLTAR      -\n");
    printf("--------------------\n\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &reserva);

    return reserva;
}

void reservaPoltrona(struct Poltrona cadeiras[LIN][COL]){

    int reserva;

    printf("Digite o numero da poltrona escolhida: ");
    scanf("%d", &reserva);

    for(int i =0; i< LIN; i++){
        for(int j = 0; j< COL; j++){
            if ( cadeiras[i][j].numero == reserva ){
                if (cadeiras[i][j].status == 0){
                    printf("\nCadeira %d reservada\n", cadeiras[i][j].numero);
                    cadeiras[i][j].status = 1;
                }
                else
                    printf("\nCadeira Indisponivel\n");
            }
        }
    }
    system("pause");
}

void cancelaReserva(struct Poltrona cadeiras[LIN][COL]){

    int cancela;

    printf("Digite o numero da poltrona que deseja cancelar: ");
    scanf("%d", &cancela);

    for(int i =0; i< LIN; i++){
        for(int j = 0; j< COL; j++){
            if ( cadeiras[i][j].numero == cancela ){
                if (cadeiras[i][j].status == 1){
                    printf("\nCadeira %d cancelada\n", cadeiras[i][j].numero);
                    cadeiras[i][j].status = 0;
                }
                else
                    printf("\nCadeira invalida\n");
            }
        }
    }
    system("pause");
}

void confirmaReserva(struct Poltrona cadeiras[LIN][COL]){

    int confirma;

    printf("Digite o numero da poltrona que deseja comprar: ");
    scanf("%d", &confirma);

    for(int i =0; i< LIN; i++){
        for(int j = 0; j< COL; j++){
            if ( cadeiras[i][j].numero == confirma ){
                if (cadeiras[i][j].status == 1){
                    printf("\nCompra da Cadeira %d confirmada.\n", cadeiras[i][j].numero);
                    cadeiras[i][j].status = 2;
                }
                else
                    printf("\nCadeira invalida\n");
            }
        }
    }
    system("pause");



}

int menuCompra(){
    int compra;

    system("cls");
    printf("--------------------\n");
    printf("----MENU-COMPRAR----\n");
    printf("--------------------\n");
    printf("1 - Imprime opcoes  \n");
    printf("--------------------\n");
    printf("2 - Realizar Compra \n");
    printf("--------------------\n");
    printf("3 - Cancelar Compra\n");
    printf("--------------------\n");
    printf("-   0 - SAIR       -\n");
    printf("--------------------\n\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &compra);

    return compra;

}

void compraPoltrona(struct Poltrona cadeiras[LIN][COL]){

    int compra;

    printf("Digite o numero da poltrona escolhida: ");
    scanf("%d", &compra);

    for(int i =0; i< LIN; i++){
        for(int j = 0; j< COL; j++){
            if ( cadeiras[i][j].numero == compra ){
                if (cadeiras[i][j].status == 0){
                    printf("\nCadeira %d comprada\n", cadeiras[i][j].numero);
                    cadeiras[i][j].status = 2;
                }
                else
                    printf("\nCadeira Indisponivel\n");
            }
        }
    }
    system("pause");
}

void cancelaCompra(struct Poltrona cadeiras[LIN][COL]){

    int cancela;

    printf("Digite o numero da poltrona que deseja cancelar: ");
    scanf("%d", &cancela);

    for(int i =0; i< LIN; i++){
        for(int j = 0; j< COL; j++){
            if ( cadeiras[i][j].numero == cancela ){
                if (cadeiras[i][j].status == 2){
                    printf("\nCadeira %d cancelada\n", cadeiras[i][j].numero);
                    cadeiras[i][j].status = 0;
                }
                else
                    printf("\nCadeira invalida\n");
            }
        }
    }
    system("pause");
}

void imprimePoltronas(struct Poltrona cadeiras[LIN][COL]){

    int i, j;
    printf("\n");
    for(i =0; i< LIN; i++){
        for(j = 0; j< COL; j++){
        if(cadeiras[i][j].status == 0)
            printf("%d ",cadeiras[i][j].numero);
        else if (cadeiras[i][j].status == 1)
            printf(" R ");
        else if (cadeiras[i][j].status == 2)
            printf(" C ");
        }
        printf("\n\n");
    }
}

int main()
{
    int opcao, reserva, compra;
    struct Poltrona cadeiras[LIN][COL];

    telaInicial();
    iniciaPoltronas(cadeiras);

    do{

        opcao = menuPrincial();
        switch(opcao){

        case 1:
            do{
                reserva = menuReserva();
                switch(reserva){
                case 1:
                    imprimePoltronas(cadeiras);
                    reservaPoltrona(cadeiras);
                    break;
                case 2:
                    imprimePoltronas(cadeiras);
                    confirmaReserva(cadeiras);
                    break;
                case 3:
                    imprimePoltronas(cadeiras);
                    cancelaReserva(cadeiras);
                    break;
                case 0:
                    break;
                default:
                    printf("Opcao invalida, digite novamente");
                    system("pause");
                    break;
                    };
                }while (reserva != 0);
            break;
        case 2:
            do{
                compra = menuCompra();
                switch(compra){
                case 1:
                    imprimePoltronas(cadeiras);
                    system("pause");
                    break;
                case 2:
                    imprimePoltronas(cadeiras);
                    compraPoltrona(cadeiras);
                    break;
                case 3:
                    imprimePoltronas(cadeiras);
                    cancelaCompra(cadeiras);
                    break;
                case 0:
                    break;
                default:
                    printf("Opcao invalida, digite novamente");
                    system("pause");
                    break;
                    };
                }while (compra != 0);
            break;
        case 0:
            printf("\n\nObrigado pela preferencia. VOLTE SEMPRE!!\n\n");
            return;
            break;
        default:
            printf("Opcao invalida, digite novamente");
            break;
        };

    } while(opcao != 0);

    return 0;

}
