#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (){

int numero,i;

printf("[DIGITE UM NUMERO DESEJADO]\n");
scanf ("%i",&numero);

for (i = numero; i >= 1; i = i - 1)
{
	printf ("%d\n",i);
}

}
