#include <stdio.h>
#include <stdlib.h>


int libcall(int x, int y){
 int c; 
 if(y == 1) 
    c = x + y;
 
  if(y==2) 
   c = x-y;

  if(y==3)
   c = x*y;

  if(y==4)
   c = x/y;

  return c;

}


int main(int argc, char** argv){
  int a = libcall (argc+1, 1);
  int b = libcall (atoi(argv[1]),1);
  int d = libcall (argc+1, 2);
  int e = libcall (atoi(argv[1]),3);
  printf("%d\n",a+b+d+e);
  return 0; 
}

