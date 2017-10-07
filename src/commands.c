#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  chdir(argv[1]);
  
  // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  char *now= (char*)malloc(sizeof(char)*80);
  getcwd(now,1024);
  printf("%s\n",now);
  // TODO: Fill it!

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
  if(argc==2&&!strcmp(argv[0],"cd"))
  	return 1;
  else
	return 0;
}
int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
  if(argc==1&&!strcmp(argv[0],"pwd")){
  	return 1;
}
  else 
	return 0;
}
