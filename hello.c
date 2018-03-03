#include<stdio.h>

void micrkernel_sendmsg(char *);

void main()	{
	printf("Helloworld!\n");
    micrkernel_sendmsg("is more portable");
}

void micrkernel_sendmsg(char *a) {
    printf("microkernel: %s\n", a);
}
