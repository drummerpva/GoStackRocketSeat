#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
	Trabalho MAPA de Douglas Poma - Curso ADS - Unicesumar - 52/2019
*/
struct livro{
	int codigo = -1;
	char autor[50];
	char nome[50];
	char editora[50];
};
int menu = 3;
int cod = 0;
int i;

main(){
	setlocale(LC_ALL, "Portuguese");
	livro livros[5];
	while(menu != 0){
		fflush(stdin);
		system("cls");
		printf("==========> Biblio C - Beta <==========\n\n\n");
		printf("Menu\n");
		printf("1 - Inserir Livro\n");
		printf("2 - Mostrar todos os Livros\n");
		printf("0 - Encerrar\n");
		printf("Digite o número da opção desejada e tecle ENTER.:  ");
		scanf("%d",&menu);
		fflush(stdin);
		if(menu == 0 ){
			continue;
		} else if(menu > 2 || menu < 0){
			system("cls");
			printf("==========> Biblio C - Beta <==========\n\n\n");
			printf("Opção invalida, tente novamente!\n");
			system("pause");
		} else if(menu == 1){
			fflush(stdin);
			system("cls");
			printf("==========> Biblio C - Beta <==========\n\n\n");
			printf("=========> Cadastro de Livros <========\n");
			if(!(cod > 4)){
				printf("Insira o nome do Livro.: ");
				scanf("%[A-Za-z 0-9]", &livros[cod].nome);
				fflush(stdin);
				printf("\nInsira o autor do Livro.: ");
				scanf("%[A-Za-z 0-9]", &livros[cod].autor);
				fflush(stdin);
				printf("\nInsira a editora do Livro.: ");
				scanf("%[A-Za-z 0-9]", &livros[cod].editora);
				fflush(stdin);
				livros[cod].codigo = cod;
				cod++;
				printf("Livro Cadastrado com Sucesso!\n");
				system("pause");
			}else{
				printf("Sistema de cadastro lotado. Não é possivel armazenar mais informações!\n");
				system("pause");
			}
		}else if(menu == 2){
			fflush(stdin);
			system("cls");
			printf("==========> Biblio C - Beta <==========\n\n\n");
			printf("========> Relatório de Livros <========\n");
			if(cod > 0){
				
				for(i = 0; i <= 4; i++){
					if(livros[i].codigo != -1){
						printf("%dº Livro:\n", i+1);
						printf("	Titulo.: %s\n", livros[i].nome);
						printf("	Autor.: %s\n", livros[i].autor);
						printf("	Editora.: %s\n", livros[i].editora);
					}
				}
			}else{
				printf("Lista Vazia!\n");
			}
			system("pause");
		}
		menu = 3;
		
	}
	system("cls");
	printf("==========> Biblio C - Beta <==========\n\n\n\n\n");
	printf("Obrigado por usar nosso sistema! Tenha um bom dia.\n\n\n\n\n");
	system("pause");
	
	return 0;
	
}
