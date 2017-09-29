#include <stdio.h>
#include <string.h>

int main(){
  char string[] = "needle in haystack";
  char substring1[] = "needle";
  char substring2[] = "pin";
  char singlechar = "a";
  
  char * ss1;
  ss1 = strstr(string, substring1);
  printf("the substring is: %s\n", ss1);

  char * ss2;
  ss2 = strstr(string,substring2);
  printf("the substring is: %s\n", ss2);

  char * sc = strchr(string, singlechar);
  printf("string after \"%c\" is: %s\n", singlechar, sc);
  return 0;
}
