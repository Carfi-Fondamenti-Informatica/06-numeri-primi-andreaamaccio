#include "lib.h"

int funzione(int a) {
    int b = a;
    while (b>1) {
        if (b==2)
            return true;
        else if (funzione(b-1) == true && a % (b-1) == 0)
                return false;
        else
            b--;
            }
        }
