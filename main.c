#include <stdio.h>
#include <locale.h>
#define DEBUG 0

void msgBoasVindas(void);
int msgSaida(void);
void setarAcentuacao(void);
int lerArquivo();
int menuUsuario();
void criptografar();
void decriptografar();

int main(void){
    setarAcentuacao();
    menuUsuario();
}

void msgBoasVindas(void){
    if (DEBUG) printf ("\nEntrando na fun��o de msgBoasVindas");
    printf("\n*******************");
    printf("\n Leitor de Arquivo");
    printf("\n*******************");
    if (DEBUG) printf ("\nSaindo da fun��o de msgBoasVindas");
}


int msgSaida(){
    if (DEBUG) printf ("\nEntrando na fun��o de msgSaida");
    printf("\n*******************");
    printf("\n      Adeus!");
    printf("\n*******************");
    getchar();
    if (DEBUG) printf ("\nSaindo da fun��o de msgSaida");
    return (0);
}

int lerArquivo(){
    msgBoasVindas();

    if (DEBUG) printf ("\nEntrando na fun��o de lerArquivo");
    char str[50];
    printf("\nDigite o nome do arquivo:");
    scanf(" %s",str);
	char ch;
	FILE *arq;

	arq = fopen(str, "r");
	if(arq == NULL){
	    printf("\nErro, n�o foi poss�vel abrir o arquivo\n");
	    system("pause");
	    system("CLS");
	    msgBoasVindas();
	}else{
        printf("\n");
	    while( (ch=fgetc(arq))!= EOF )
		    putchar(ch);
	    fclose(arq);
	    printf("\n");
	    system("pause");
	    system("CLS");
	    msgBoasVindas();
     }
    if (DEBUG) printf ("\nSaindo da fun��o de lerArquivo");
	return 0;
}

void setarAcentuacao(){
    if (DEBUG) printf ("\nEntrando na fun��o de setarAcentuacao");
    setlocale(LC_ALL, "Portuguese");
    if (DEBUG) printf ("\nSaindo da fun��o de setarAcentuacao");
}

int menuUsuario(){
    msgBoasVindas();
    if (DEBUG) printf ("\nEntrando na fun��o de menuUsuario");
    setbuf(stdin, NULL);
    int continuar=1;
    do
    {
        printf("\n1. Criptografar");
        printf("\n2. Decriptografar");
        printf("\n3. Ler Arquivo");
        printf("\n0. Sair");

        scanf(" %d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                criptografar();
                break;

            case 2:
                decriptografar();
                break;

            case 3:
                lerArquivo();
                break;

            case 0:
                msgSaida();
                break;

            default:
                msgBoasVindas();
                printf("\nDigite uma op��o valida!");
        }
    } while(continuar);
    if (DEBUG) printf ("\nSaindo da fun��o de menuUsuario");
}

void criptografar(){

}

void decriptografar(){

}
