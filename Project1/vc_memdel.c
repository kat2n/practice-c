#include <stdlib.h>

void vc_memdel(void **ap) {
  free(*ap);
  *ap = NULL;
}
