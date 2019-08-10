#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int libcall(char* x, char * y){
 int c = strcmp (x,y);
 return c;
}


int main(int argc, char** argv){
  char * a = "Aatira";
  int d = libcall (argv[1],a);
  if(d!=0) printf("argv[1] is not Aatira");
  d = libcall (argv[2],a);
  if(d!=0) printf("argv[2] is not Aatira");
  return 0; 
}

