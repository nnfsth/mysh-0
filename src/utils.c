#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	char* temp=(char*)malloc(sizeof(char));
	char* tok;
	char i=0;
	*argc =0;
	*argv = (char**)malloc(sizeof(char));
	strcpy(temp,command);
	tok=strtok(temp," ");
	while(tok!=NULL){
		(*(*argv+i))=tok;
		tok=strtok(NULL," ");
		*argc +=1;
		i++;
	}

}
