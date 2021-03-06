#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define RUA 31
#define NOME 21

struct ENDERECO_COMERCIAL{
    char rua[RUA];
    int numero;
};

struct ENDERECO_RESIDENCIAL{
    char rua[RUA];
    int numero;
};

struct CADASTRO{
    char nome[NOME];
    int idade;
    struct ENDERECO_COMERCIAL comercial;
    struct ENDERECO_RESIDENCIAL residencial;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

	struct CADASTRO cadastro;

	printf("Digite seu nome: ");
	scanf(" %[^\n]s", &cadastro.nome);
    getchar();
    fflush(stdin);

	printf("Digite sua idade: ");
	scanf("%d", &cadastro.idade);
	getchar();
    fflush(stdin);

	if(cadastro.idade > 13){
        printf("Digite seu endereço comercial: ");
        scanf(" %[^\n]s", &cadastro.comercial.rua);
        getchar();
        fflush(stdin);

        printf("Digite o número do endereço comercial: ");
        scanf("%d", &cadastro.comercial.numero);
        getchar();
        fflush(stdin);

        if(cadastro.comercial.numero > 0){
            printf("Digite seu endereço residencial: ");
            scanf(" %[^\n]s", &cadastro.residencial.rua);
            getchar();
            fflush(stdin);

            printf("Digite o número do endereço residencial: ");
            scanf("%d", &cadastro.residencial.numero);
            getchar();
            fflush(stdin);

            if(cadastro.residencial.numero > 0){
                printf("\n");
                printf("*******DADOS CADASTRADOS******** \n");
                printf("Nome: %s\n", cadastro.nome);
                printf("Idade: %d anos\n", cadastro.idade);
                printf("Endereço Comercial: %s, %d\n", cadastro.comercial.rua, cadastro.comercial.numero);
                printf("Endereço Residencial: %s, %d", cadastro.residencial.rua, cadastro.residencial.numero);
            }else{
                printf("\n*** Número precisa ser maior que 0!!! ***\n");
                exit(0);
            }
        }else{
            printf("\n*** Número precisa ser maior que 0!!! ***\n");
            exit(0);
        }
	}else{
        printf("\n*** Idade precisa ser maior que 14!!! ***\n");
        exit(0);
	}

    return 0;
}
