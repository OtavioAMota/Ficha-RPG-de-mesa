#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned char nome[50],van[100000],desvan[100000],comando[50];
unsigned int pontos;
float lvl=0.1,exp=0.1,f=0.1,h=0.1,r=0.1,a=0.1,pdf=0.1;

int ficha(){
	printf("[---------------------------------------------------------------\n");
	printf("Nome:%s\n",nome);
	printf("Level:%.0f |Experiencia:%.1f/10\n",lvl,exp);
	printf("F:%.1f|H:%.1f|R:%.1f|A:%.1f|PdF:%.1f\n",f,h,r,a,pdf);
	printf("Vantagens:\n%s\n",van);
	printf("Desvantagens:\n%s\n",desvan);
	printf("[---------------------------------------------------------------\n");
	printf("Comandos:");
	scanf("%s",&comando);
	switch(comando){
		case 'help':
			system("cls");
			printf("Comandos:\n");
			system("pause");
			break;
	}
}


int main() {
	system("color 70");
	printf("pontos iniciais:");
	scanf("%d",&pontos);
	system("cls");
	printf("Nome do personagem:");
	scanf("%s",&nome);
	system("cls");
	ficha();
	return 0;
}
