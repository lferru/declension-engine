/** Author: Luis Ferrufino
  * Date: 6/20/20
  * File: run.c
  * Project: declension-engine
  **/
  
#include <stdio.h>
#include "inflexion.h"

int main(void) {

    char *dec[] = { "xiphias", "xiphiæ", "xiphiæ", "xiphian", "xiphiâ", "xiphiâ",
                "xiphiæ", "xiphiarum", "xiphiîs", "xiphias", "xiphiîs", "xiphiæ" };
    struct word swordfish = createWord(dec);
    //printf("%s\n", myWord.forms[5]);
    //printTable(myWord);
    printf("Mox enim %s capiam.\n", getForm(swordfish, 'b'));
}
