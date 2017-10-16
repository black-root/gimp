#include "libgimp.h"
#include <stdio.h>
#include <unistd.h>
//#include <linux/kernel.h>
int llamada(int *vector){
long int r=syscall(400,*vector);
printf("El mayor es: %d\n",r);
}
