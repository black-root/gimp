#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <libgimp.h>

int main(void){
int vector[10], i=0, num, ch, ok;
//int mayor=0;
for(i=0;i<10;i++){
	do{
	printf("ingresa un entero posicion[%i]: ",i+1);
	fflush(stdout);
	if((ok=scanf("%d", &vector[i]))==EOF){
	return -1;
	if((ch=getchar()) != '\n')
	ok=0;
while((ch=getchar())!= EOF && ch != '\n');
}
}while(!ok);
}

int mayor=llamada(vector);
return 0;
}
