#include "stdlib.h"
#include "stdio.h"
#include "signal.h"
void signal_handler(int num)
{
	printf("\r\nSIGNALINT signal\r\n");
	exit(0);
}

int main(void)
{
	signal(SIGINT,signal_handler);
	while(1);
	return 0;	
}
