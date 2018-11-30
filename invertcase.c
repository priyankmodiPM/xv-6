#include "types.h"
#include "stat.h"
#include "user.h"

void invertcase(char *c){
	int i;
	for(i=0;c[i]!='\0';i++){
		if (c[i] >= 'A' && c[i] <= 'Z')
	    	c[i] = c[i] + 32;
	    else if (c[i] >= 'a' && c[i] <= 'z')
	        c[i] = c[i] - 32;
	    else
	    	c[i] = c[i];  
		}
	printf(1,"%s ", c);
}

int
main(int argc, char *argv[])
{
  int i;
  for(i = 1; i < argc; i++){
    invertcase(argv[i]);
  }
  printf(1,"\n");
  exit();
}

