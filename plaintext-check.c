#include <string.h>

int plaintext_check(char *password, char *hash) {
  return (strcmp(password,hash)==0) ;
}

