#include "simplemock.h"
#include "multiplydivide.h"

/**
 *(v1*v2)+(v3/v4)
 **/

int addMultiplyAndDivide(int v1, int v2,  /*Multiple*/ \
                          int v3, int v4)  /*Divide*/
{
  int result;
  result = multiply(v1,v2) + divide(v3,v4);
  return result;
}
