#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#define TAM 3

//DESENVOLVIDO POR ÍCARO DIAS DOS SANTOS;

struct pinha{
    int topo;
    int n[TAM];
	int elementos[TAM];
};
typedef struct pinha Pilha;
    Pilha p;
	Pilha p1;
	Pilha p2;

int movimentos;
int tentativas;
char nome[30];
time_t tInicial, tFinal;

void global(){
	p.topo=2;
	p1.topo=-1;
	p2.topo=-1;
	tentativas=10;
	movimentos=0;

}	

void ImprimirJogo (){
	
	
	
	printf("\t\t\t     ..   \t     .. \t     ..\n");
	
	printf("\t\t\t    ####");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t    ####");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t  ########");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t  ########");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t############");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t############");
	printf("    _____||_____    _____||_____\n");
	printf("\t\t       |____________|  |____________|  |____________|\n\n\n");
	
}	
void imprimir (){
	
	system("color f9");
	printf("\n\n\t\t\t\t  ###### ###### ######  ######\n");
	printf("\t\t\t\t    ##   ###### ######  ######\n");
	printf("\t\t\t\t    ##   ##  ## ##      ##  ##\n");
	printf("\t\t\t\t    ##   ##  ## ##      ##  ##\n");
	printf("\t\t\t\t    ##   ##  ## ##      ##  ##\n");
	printf("\t\t\t\t    ##   ##  ## ##  ##  ##  ##\n");
	printf("\t\t\t\t    ##   ##  ## ##  ##  ##  ##\n");
	printf("\t\t\t\t##  ##   ##  ## ##  ##  ##  ##\n");
	printf("\t\t\t\t######   ###### ##  ##  ######\n"); 
	printf("\t\t\t\t######   ###### ######  ######\n\n\n");
		
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111111¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶11111111111111¶¶¶¶¶¶¶¶¶1111111111111¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶111111111111111111¶¶¶11111111111111111¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶11111111111111111111¶1111111111111111111¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶111111111111¶¶¶1111111111¶¶¶1111111111111¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶111111111111¶¶¶¶¶11111111¶¶¶¶¶1111111111111¶¶¶ \n");
	printf("\t\t\t¶¶¶¶11111111111¶¶¶¶¶¶11111111¶¶¶¶¶¶111111111111¶¶¶ \n");
	printf("\t\t\t¶¶¶11111111111¶¶¶¶¶111111111111¶¶¶¶¶11111111111¶¶¶ \n");
	printf("\t\t\t¶¶¶1111111111¶¶¶¶¶11111111111111¶¶¶¶¶1111111111¶¶¶ \n");
	printf("\t\t\t¶¶¶111111111¶¶¶¶11111111111111111¶¶¶¶¶111111111¶¶¶ \n");
	printf("\t\t\t¶¶¶11111111¶¶¶¶1111111111111111111¶¶¶¶¶11111111¶¶¶ \n");
	printf("\t\t\t¶¶¶¶111111¶¶¶¶¶11111111111111111111¶¶¶¶¶1111111¶¶¶ \n");
	printf("\t\t\t¶¶¶¶11111¶¶¶¶111111111111111111111111¶¶¶¶11111¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶1111¶¶¶1111111111111111111111111¶¶¶¶¶111¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶111¶¶¶1111111111111111111111111111¶¶¶111¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶11¶¶¶1111111111111111111111111111¶¶¶11¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶111111111111111111111111111111¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶111111111111111111111111111111¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶1111111111111111111111111111¶¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶11111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶11¶¶¶¶¶¶¶11¶¶111111111¶¶¶¶¶11111111¶¶¶11¶¶¶¶¶¶11¶\n");
	printf("\t\t\t¶¶111¶¶¶¶11¶¶¶11¶¶¶¶¶¶11¶¶¶111¶¶¶¶¶111¶¶11¶¶¶¶11¶¶\n");
	printf("\t\t\t¶¶¶¶11¶111¶¶¶¶11¶¶¶¶¶¶11¶¶11¶¶¶¶¶¶¶¶¶11¶¶11¶¶11¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶111¶¶¶111111111111¶¶¶11¶¶¶¶¶¶¶¶¶11¶¶¶1111¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶111¶¶¶1111111111111¶¶11¶¶¶¶¶¶¶¶¶11¶¶¶1111¶¶¶¶\n");
	printf("\t\t\t¶¶¶111¶111¶¶¶¶11¶¶¶¶¶¶¶11¶11¶¶¶¶¶¶¶¶¶11¶¶11¶¶11¶¶¶\n");
	printf("\t\t\t¶¶111¶¶¶¶11¶¶¶11¶¶¶¶¶¶¶11¶111¶¶¶¶¶¶¶111¶11¶¶¶¶11¶¶\n");
	printf("\t\t\t¶11¶¶¶¶¶¶¶11¶¶1111111111¶¶¶¶111111111¶¶11¶¶¶¶¶¶11¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶11111111¶¶¶¶¶¶¶11¶¶¶¶¶¶¶¶¶¶11¶¶1111111111111¶\n");
	printf("\t\t\t¶¶¶11111¶¶¶1111¶¶¶¶¶111¶¶¶¶¶¶¶¶¶11¶¶1111111111111¶\n");
	printf("\t\t\t¶¶111¶¶¶¶¶¶¶¶¶111¶¶¶1111¶¶¶¶¶¶¶¶11¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶111¶¶¶¶¶¶¶¶¶¶¶11¶¶¶11¶111¶¶¶¶¶¶11¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶11¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶11¶¶111¶¶¶¶¶11¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶11¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶11¶¶¶111¶¶¶¶11¶¶111111111111¶¶\n");
	printf("\t\t\t¶11¶¶¶¶¶¶¶¶¶¶¶¶¶11¶¶11¶¶¶¶¶11¶¶¶11¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶111¶¶¶¶¶¶¶¶¶¶¶111¶¶11¶¶¶¶¶¶111¶11¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶111¶¶¶¶¶¶¶¶¶111¶¶¶11¶¶¶¶¶¶¶11111¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶1111¶¶¶¶¶1111¶¶¶¶11¶¶¶¶¶¶¶¶1111¶¶111¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶111111111¶¶¶¶¶¶11¶¶¶¶¶¶¶¶¶¶11¶¶1111111111111¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	printf("\t\t\t¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\n\n");

	ImprimirJogo ();
	
	printf("\t\t\t1 - JOGAR 3 DISCOS\n");
	printf("\t\t\t2 - CONFIGURAÇÕES\n");
	printf("\t\t\t3 - DESLIGAR MEU COMPUTADOR! CUIDADO\n");
	printf("\t\t\t4 - SAIR\n");
	printf("\t\t\tOPÇÃO:");
}
void Imprimir1(){
	
	printf("\n\n\t\t\t     ..   \t     .. \t     ..\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t  ########");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t  ########");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t############");
	printf("\t    ####");
	printf("\t     ||\n");
	
	printf("\t\t\t############");
	printf("    ____####____    _____||_____\n");
	printf("\t\t       |____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir2(){
	printf("\n\n\t\t\t     ..   \t     .. \t     ..\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t  ########");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t  ########");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t############");
	printf("\t     ||");
	printf("\t\t    ####\n");
	
	printf("\t\t\t############");
	printf("    _____||_____    ____####____\n");
	printf("\t\t       |____________|  |____________|  |____________|\n\n\n");
	
}			
void Imprimir3(){
	printf("\n\n\t\t\t     ..   \t     .. \t     ..\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t     ||   ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t     ||   ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t############");
	printf("\t  ########");
	printf("\t    ####\n");
	
	printf("\t\t\t############");
	printf("    __########__    ____####____\n");
	printf("\t\t       |____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir4(){
	
	printf("\n\n\t\t\t     ..   \t     .. \t     ..\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t     || ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t    ####  ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t    ####  ");
	printf("\t     ||");
	printf("\t\t     ||\n");
	
	printf("\t\t\t############");
	printf("\t  ########");
	printf("\t     ||\n");
	
	printf("\t\t\t############");
	printf("    __########__    _____||_____\n");
	printf("\t\t       |____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir5(){
	
	printf("\n\n\t\t\t     ..   \t     .. \t     ..\n");
	printf("\t\t\t     || \t     ||\t\t     ||\n");
	printf("\t\t\t     || \t     ||\t\t     ||\n");
	printf("\t\t\t    ####  \t     ||\t\t     ||\n");
	printf("\t\t\t    ####  \t     ||\t\t     ||\n");
	printf("\t\t\t############\t     ||     \t  ########\n");
	printf("\t\t\t############    _____||_____    __########__\n");
	printf("\t\t       |____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir6(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t ############        ####          ########       \n");
	printf("\t\t\t ############    ____####____    __########__     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir7(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t     ####        ############      ########       \n");
	printf("\t\t\t ____####____    ############    __########__     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir8(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||           ########           ||          \n");
	printf("\t\t\t      ||           ########           ||          \n");
	printf("\t\t\t     ####        ############         ||          \n");
	printf("\t\t\t ____####____    ############    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir9(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||           ########           ||          \n");
	printf("\t\t\t      ||           ########           ||          \n");
	printf("\t\t\t      ||         ############        ####         \n");
	printf("\t\t\t _____||_____    ############    ____####____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir10(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t   ########      ############        ####         \n");
	printf("\t\t\t __########__    ############    ____####____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir11(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t   ########      ############         ||          \n");
	printf("\t\t\t __########__    ############    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}				
void Imprimir12(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t   ########          ####        ############     \n");
	printf("\t\t\t __########__    ____####____    ############     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir13(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||           ########       \n");
	printf("\t\t\t      ||              ||           ########      \n");
	printf("\t\t\t      ||             ####        ############     \n");
	printf("\t\t\t _____||_____    ____####____    ############     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir14(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||             ####         \n");
	printf("\t\t\t      ||              ||             ####         \n");
	printf("\t\t\t      ||              ||           ########       \n");
	printf("\t\t\t      ||              ||           ########      \n");
	printf("\t\t\t      ||              ||         ############     \n");
	printf("\t\t\t _____||_____    _____||_____    ############     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir15(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t     ####          ########      ############     \n");
	printf("\t\t\t ____####____    __########__    ############     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}			
void Imprimir16(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t      ||           ########      ############     \n");
	printf("\t\t\t _____||_____    __########__    ############     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir19(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t   ########           ||              ||          \n");
	printf("\t\t\t   ########           ||              ||          \n");
	printf("\t\t\t ############        ####             ||          \n");
	printf("\t\t\t ############    ____####____    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir20(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t ############      ########           ||          \n");
	printf("\t\t\t ############    __########__    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir21(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||           ########       \n");
	printf("\t\t\t      ||              ||           ########       \n");
	printf("\t\t\t     ####             ||         ############     \n");
	printf("\t\t\t ____####____    _____||_____    ############     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}
void Imprimir22(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||             ####         \n");
	printf("\t\t\t      ||              ||             ####         \n");
	printf("\t\t\t ############         ||           ########       \n");
	printf("\t\t\t ############    _____||_____    __########__     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}	
void Imprimir23(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||             ####         \n");
	printf("\t\t\t      ||              ||             ####         \n");
	printf("\t\t\t      ||         ############      ########       \n");
	printf("\t\t\t _____||_____    ############    __########__     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}	
void Imprimir24(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t      ||         ############      ########       \n");
	printf("\t\t\t _____||_____    ############    __########__     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir25(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t ############      ########           ||          \n");
	printf("\t\t\t ############    __########__    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir26(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t   ########      ############         ||          \n");
	printf("\t\t\t __########__    ############    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
void Imprimir29(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t ############      ########          ####         \n");
	printf("\t\t\t ############    __########__    ____####____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}
void Imprimir30(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t      ||             ####             ||          \n");
	printf("\t\t\t   ########      ############         ||          \n");
	printf("\t\t\t __########__    ############    _____||_____     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}	
void Imprimir31(){
	
	printf("\n\n\t\t\t      ..              ..              ..      \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t      ||              ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t     ####             ||              ||          \n");
	printf("\t\t\t ############         ||           ########     \n");
	printf("\t\t\t ############    _____||_____    __########__     \n");
	printf("\t\t\t|____________|  |____________|  |____________|\n\n\n");
}		
int compara(Pilha p, Pilha p1, Pilha p2){
	
	
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==2&&p2.n[2]==1){
		printf("\n\t\tPARABÉNS! VOCÊ GANOU!\n");
			Imprimir14();
			return 1;}
	
	
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==1&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==2&&p2.n[2]==0){Imprimir13();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==2&&p1.n[1]==1&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==0&&p2.n[2]==0){Imprimir16();return 0;}//primeiro é zero
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==2&&p2.n[1]==1&&p2.n[2]==0){Imprimir23();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==2&&p1.n[2]==0&&p2.n[0]==1&&p2.n[1]==0&&p2.n[2]==0){Imprimir11();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==2&&p1.n[2]==1&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir10();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==1&&p1.n[2]==0&&p2.n[0]==2&&p2.n[1]==0&&p2.n[2]==0){Imprimir24();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==2&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==1&&p2.n[2]==0){Imprimir13();return 0;}
	
	
	
	
	if(p.n[0]==3&&p.n[1]==2&&p.n[2]==1&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){ImprimirJogo();return 0;}//ultimo é zero
	
	if(p.n[0]==3&&p.n[1]==2&&p.n[2]==0&&p1.n[0]==1&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir19();return 0;}//
	
	if(p.n[0]==3&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==2&&p1.n[1]==1&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir20();return 0;}
	
	if(p.n[0]==2&&p.n[1]==1&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir12();return 0;}
	
	if(p.n[0]==1&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==2&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir11();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==2&&p1.n[2]==1&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir10();return 0;}
	
	if(p.n[0]==2&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==1&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir30();return 0;}
	
	if(p.n[0]==3&&p.n[1]==1&&p.n[2]==0&&p1.n[0]==2&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir25();return 0;}
	
	
	
	if(p.n[0]==3&&p.n[1]==2&&p.n[2]==1&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir14();return 0;}
	
	if(p.n[0]==3&&p.n[1]==2&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==1&&p2.n[1]==0&&p2.n[2]==0){Imprimir2();return 0;}
	
	if(p.n[0]==3&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==2&&p2.n[1]==1&&p2.n[2]==0){Imprimir22();return 0;} 
	
	if(p.n[0]==2&&p.n[1]==1&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==0&&p2.n[2]==0){Imprimir12();return 0;}
	
	if(p.n[0]==1&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==2&&p2.n[2]==0){Imprimir21();return 0;}//do meio é zero
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==2&&p2.n[2]==1){Imprimir10();return 0;}
	
	if(p.n[0]==2&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==1&&p2.n[2]==0){Imprimir14();return 0;}
	
	if(p.n[0]==3&&p.n[1]==1&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==2&&p2.n[1]==0&&p2.n[2]==0){Imprimir31();return 0;}
	
	
	
	
	if(p.n[0]==3&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==2&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==1&&p2.n[1]==0&&p2.n[2]==0){Imprimir29();return 0;}
	if(p.n[0]==3&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==1&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==2&&p2.n[1]==0&&p2.n[2]==0){Imprimir6();return 0;}//
	
	
	if(p.n[0]==1&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==2&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==3&&p2.n[1]==0&&p2.n[2]==0){Imprimir15();return 0;}
	
	if(p.n[0]==3&&p.n[1]==2&&p.n[2]==0&&p1.n[0]==0&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==1&&p2.n[1]==0&&p2.n[2]==0){Imprimir2();return 0;}
	
	if(p.n[0]==2&&p.n[1]==1&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==0&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir12();return 0;}
	
	if(p.n[0]==1&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==2&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir11();return 0;}
	
	if(p.n[0]==0&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==2&&p1.n[2]==1&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir10();return 0;}
	
	if(p.n[0]==2&&p.n[1]==0&&p.n[2]==0&&p1.n[0]==3&&p1.n[1]==1&&p1.n[2]==0&&p2.n[0]==0&&p2.n[1]==0&&p2.n[2]==0){Imprimir14();return 0;}
	
	
	
}	
void ConfigurarTentativas(){
	
	printf("\n\n ======================= CONFIGURAÇÕES TENTATIVAS");
	printf(" =======================\n\n");
	printf("\t\t\tA QUANTIDADE DE TENTATIVAS É: MÍNIMO 7 E MÁXIMO 30\n\n");
	printf("     DIGITE A QUANTIDADE DE TENTATIVAS:");
	scanf("%i" ,&tentativas);
	while(tentativas<7||tentativas>30){
	system("cls");
	printf("\n\n \a======================= CONFIGURAÇÕES TENTATIVAS");
	printf(" =======================\n\n");
	printf("\t\t\tA QUANTIDADE DE TENTATIVAS É: MÍNIMO 7 E MÁXIMO 30\n\n");
	printf("     DIGITE A QUANTIDADE DE TENTATIVAS:");
	scanf("%i" ,&tentativas);
	}
	}
int Configuracao(){
	
	int Opcao;
	
	do{
		
	Opcao=0;	
	system("cls");
	system("color fc");
	
	printf("\n\n ============================== CONFIGURAÇÕES");
	printf(" ==============================\n   ");
	printf("\n"); 
	
	printf("   1)\a QUANTIDADE DE TENTATIVA DO(A) JOGADORA(A)\n");
	printf("   3)SAIR\n\n");
	printf("   OPÇÃO:");
	scanf("%i",&Opcao);
	switch(Opcao){
		
		case 1:
			ConfigurarTentativas();
			break;
	}
	}while(Opcao!=3);
}	
int push(){
	
	int Opcao;
	
	system("color 1a");
	
	printf("\n\n\n\t\t\tVOCÊ JA FEZ %i MOVIMENTO(S):\n", movimentos);
	printf("\n\n\n\t\t\t\t Opcao\n\n\t\t\t  1- do 1 para o 2\n\t\t\t  2- do 2 para o 1 \n\t\t\t  3- do 1 para o 3\n"); 
	printf("\t\t\t  4- do 3 para o 1\n\t\t\t  5- do 2 para o 3 \n\t\t\t  6- do 3 para o 2 \n\n\t\t\t >>>");
	
	scanf("%i",&Opcao);	
	movimentos++;
	switch (Opcao)
	{
		case 1:
			
			if(p.topo>-1){
				if(p1.topo==-1||p.n[p.topo]<p1.n[p1.topo]){
       		p1.topo++;
			p1.n[p1.topo]=p.n[p.topo];
			p.n[p.topo]=0;
      		p.topo--;
				}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
			}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
       	 	break;
       	 	
       	case 2:
       		
       		if(p1.topo>-1){
				if(p.topo==-1||p1.n[p1.topo]<p.n[p.topo]){
       		p.topo++;
			p.n[p.topo]=p1.n[p1.topo];
			p1.n[p1.topo]=0;
      		p1.topo--;	
				}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
			}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
       	 	break;  
       	 	
       	case 3:
       		
       		if(p.topo>-1){
				if(p2.topo==-1||p.n[p.topo]<p2.n[p2.topo]){
       		p2.topo++;
			p2.n[p2.topo]=p.n[p.topo];
			p.n[p.topo]=0;
      		p.topo--;	
				}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:1111\n");
				getche();
			}
			}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
       	 	break;  
       	 	
       	case 4:
       		
       		if(p2.topo>-1){
				if(p.topo==-1||p2.n[p2.topo]<p.n[p.topo]){
       		p.topo++;
			p.n[p.topo]=p2.n[p2.topo];
			p2.n[p2.topo]=0;
      		p2.topo--;	
				}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
			}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
       	 	break;  
       	 	
       	case 5:
       		
       		if(p1.topo>-1){
				if(p2.topo==-1||p1.n[p1.topo]<p2.n[p2.topo]){
       		p2.topo++;
			p2.n[p2.topo]=p1.n[p1.topo];
			p1.n[p1.topo]=0;
      		p1.topo--;
				}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
			}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
       	 	break;  	
       	 	
       	case 6:
       		
       		if(p2.topo>-1){
				if(p1.topo==-1||p2.n[p2.topo]<p1.n[p1.topo]){
       		p1.topo++;
			p1.n[p1.topo]=p2.n[p2.topo];
			p2.n[p2.topo]=0;
      		p2.topo--;	
				}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
			}else{
				printf("\n\aDIGITE UMA OPÇÃO VALIDA:\n");
				getche();
			}
       	 	break;  
       	
	}
	
	return 0;
}
void Derrota(){
	
	system("cls");
	system("color A");
						
	printf("\n\t\t %s VOCÊ PERDEU\n\n", nome);
	printf("\n\t\tVOCÊ LEVOU %.2f SEGUNDOS!!\n\n\n\n",difftime(tFinal, tInicial));
	
	printf("  ##        ##   ######    ######   #######         #####    #######   ####   ######    #######   ##    ##   #######\n");
	printf("   ##      ##    ##  ##    ##       ##              #    #   ##        ##     ##   ##   ##        ##    ##    ##### \n");
	printf("    ##    ##     ##  ##    ##       #####           #####    ####      ####   ##   ##   ####      ##    ##     ###  \n");
	printf("     ##  ##      ##  ##    ##       ##              ##       ##        ##     ##   ##   ##        ##    ##          \n");
	printf("      ####       ######    ######   #######         ##       #######   ####   ######    #######    ######       #\n\n\n");
		
	printf("\t\t                   10000000000011\n");
	printf("\t\t                10000000000000000001\n");
	printf("\t\t              00000000000000000000000\n");
	printf("\t\t             00000111000000001111100001\n");
	printf("\t\t           10001       10001       10001\n");
	printf("\t\t          1000          11           000\n");
	printf("\t\t          0001     101       11      1000\n");
	printf("\t\t          000      101       11      1000\n");
	printf("\t\t         10001           1           10001\n");
	printf("\t\t         100001         101         100001\n");
	printf("\t\t         10000001     1000001     10000001\n");
	printf("\t\t          0000000000000000000000000000000\n");
	printf("\t\t          1000000000001      100000000000\n");
	printf("\t\t           000000001            100000001\n");
	printf("\t\t            0000001              1000001\n");
	printf("\t\t             00000    10000001    00001\n");
	printf("\t\t               0000  100000000000 1001    111\n");
	printf("\t\t       1        0000000000000000001     00000\n");
	printf("\t\t      00000        11000000000001    1000000011\n");
	printf("\t\t      00000001                     100000000000\n");
	printf("\t\t     0000000000001              100000000000001\n");
	printf("\t\t     000000000000000011      110000111\n");
	printf("\t\t                  0100000000000011   \n");
	printf("\t\t             111100000001   1100000000000000001\n");
	printf("\t\t     0000000000000001           110000000000000\n");
	printf("\t\t     00000000000011                 110000000011\n");
	printf("\t\t      000000001                         1000001\n");
	printf("\t\t      100001                               1001\n");
	printf("\t\t                                             11\n");
	}
void Vitoria(){
	
	system("cls");
	system("color A");
	
	printf("\n\t\t %s você GANHOU, PARABÉNS!!!\n\n", nome);
	printf("\n\t\tVOCÊ LEVOU %.2f SEGUNDOS!!\n\n\n",difftime(tFinal, tInicial));
	
	printf("\n  ##        ##  ######   ######  #######     #####      #####   ##      ##  ##     ##   #######  ##    ##  #######\n");
	printf("   ##      ##   ##  ##   ##      ##         ##         ##   ##  ## ##   ##  ##     ##   ##   ##  ##    ##   ##### \n");
	printf("    ##    ##    ##  ##   ##      #####      ##         #######  ##  ##  ##  #########   ##   ##  ##    ##    ###  \n");
	printf("     ##  ##     ##  ##   ##      ##         ##    ###  ##   ##  ##     ###  ##     ##   ##   ##  ##    ##         \n");
	printf("      ####      ######   ######  #######     #######   ##   ##  ##      ##  ##     ##   #######   ######      #   \n");


			printf("\n\n\n"); 
			printf("\t\t\t        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t¶¶¶¶      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶       ¶¶¶¶ \n");
			printf("\t\t\t¶¶¶       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ¶¶¶ \n");
			printf("\t\t\t¶¶        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ¶¶¶ \n");
			printf("\t\t\t¶¶¶     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶      ¶¶¶ \n");
			printf("\t\t\t¶¶¶    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶    ¶¶¶¶ \n");
			printf("\t\t\t ¶¶¶   ¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶    ¶¶¶ \n");
			printf("\t\t\t ¶¶¶¶   ¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶  ¶¶¶¶ \n");
			printf("\t\t\t   ¶¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶ \n");
			printf("\t\t\t    ¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t      ¶¶¶¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶¶¶¶¶¶\n"); 
			printf("\t\t\t               ¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t                 ¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t                   ¶¶¶¶ \n");
			printf("\t\t\t                   ¶¶¶¶ \n");
			printf("\t\t\t                   ¶¶¶¶ \n");
			printf("\t\t\t                   ¶¶¶¶ \n");
			printf("\t\t\t               ¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t            ¶¶¶            ¶¶¶ \n");
			printf("\t\t\t            ¶¶¶   CAMPEÃO  ¶¶¶ \n");
			printf("\t\t\t            ¶¶¶            ¶¶¶ \n");
			printf("\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ \n");
			printf("\t\t\t          ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"); 
			printf("\t\t\t         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	
	system("musica.mp3");
}

void Jogar(){
	
	tInicial = time(NULL);
	int sair;
	system("cls");
	
	printf("\n\n\t\t\a\tQual o seu nome?\n\t\t\t>>>");
	scanf(" %29[^\n]", &nome);
	
	do{
	
	
	tentativas--;
	sair=compara(p, p1, p2);
	if(sair!=1)
		push();
	tFinal = time(NULL);
	
	system("cls");
	}while(sair!=1&&tentativas>0);
	
	
	if(tentativas>0){
		Vitoria();
		}else{
			Derrota();
		}
		
	global();
	system("pause");
		
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	global();
	
	int sair, opcao;
    
    	
    do{
    
	
    p.n[0]=3;
    p.n[1]=2;
    p.n[2]=1;
    
    
    p1.n[0]=0;
    p1.n[1]=0;
    p1.n[2]=0;
    
    
    p2.n[0]=0;
    p2.n[1]=0;
    p2.n[2]=0;
    
    imprimir();
    
	scanf("%i",&opcao);
	
	
	switch(opcao){
		
		case 1:
			Jogar();
			break;
		case 2:
			Configuracao();
			break;
		case 3:
			system("C:\\windows\\system32\\shutdown /s");
			break;
	}
    
    system("cls");
    
	}while(opcao!=4&&sair!=1);
    
    
    return 0;
}


