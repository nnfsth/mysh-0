#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mysh_parse_command(const char* command, int *argc, char*** argv)
{
	char* temp=(char*)malloc(sizeof(char)*80);
	char* tok=(char*)malloc(sizeof(char)*80);
	char i=0;
	*argc =0;
	*argv = (char**)malloc(sizeof(char)*80);
	strcpy(temp,command);
	int length=strlen(temp);
	if(*(temp+length-1)=='\n')
		*(temp+length-1)=0;
	tok=strtok(temp," \n\t");
	while(tok!=NULL){
   		*(*argv+i)=(char*)malloc(sizeof(char)*80);
		strcpy((*(*argv+i)),tok);
		*argc+=1;
		i++;
		tok=strtok(NULL," \n\t");
	}
	if(*argc==0){
		*argc=1;
		**argv=(char*)malloc(sizeof(char)*80);
		strcpy(**argv,"");
	}
}
