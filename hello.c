#include<stdio.h>

void micrkernel_sendmsg(char *);

void main()	{
	printf("Helloworld!\n");
    printf("This must be a monolithic design\n");
    micrkernel_sendmsg("is more portable");
}

void micrkernel_sendmsg(char *a) {
    printf("microkernel: %s\n", a);
}
