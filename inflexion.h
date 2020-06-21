/** Author: Luis Ferrufino
  * Date: 6/20/20
  * File: inflexion.h
  * Project: declension-engine
  **/

#include <stdio.h>

#define MAXFORMS 12

char *cases[6] = { "NOM", "GEN", "DAT", "ACC", "ABL", "VOC" };

struct word {

    char *forms[MAXFORMS];
};

struct word createWord(char *decl[]) {

    struct word newWord;

    for ( int i = 0; i < MAXFORMS; i++ ) {

        newWord.forms[i] = decl[i];
    }
    return newWord;
}

/** There are two versions of getForm(), one that accepts the specific inflexion's
 *  code, and another that accepts the desired inflexion's number and case as
 *  separate characters. The codes are summarised as follows.
 *
 *  For the single-coded one:
 *          SINGULAR    PLURAL
 *  NOM     n           N
 *  GEN     g           G
 *  DAT     d           D
 *  ACC     a           A
 *  ABL     b           B
 *  VOC     v           V
 *
 *  For the double-coded one:
 *          SINGULAR    PLURAL
 *  NOM     s, n        p, n
 *  GEN     s, g        p, g
 *  DAT     s, d        p, d
 *  ACC     s, a        p, a
 *  ABL     s, b        p, b
 *  VOC     s, v        p, v
 *
 */

char *getForm(struct word w, char f) {

    switch ( f ) {

        case 'n': return w.forms[0];
        case 'g': return w.forms[1];
        case 'd': return w.forms[2];
        case 'a': return w.forms[3];
        case 'b': return w.forms[4];
        case 'v': return w.forms[5];
        case 'N': return w.forms[6];
        case 'G': return w.forms[7];
        case 'D': return w.forms[8];
        case 'A': return w.forms[9];
        case 'B': return w.forms[10];
        case 'V': return w.forms[11];
        default: return "**WRONG CODE, SILLY**";

    }
}

/*char *getForm(struct word w, char n, char c) {

}*/

void printTable(struct word w) {

    //char *output = "SINGULAR\t\t\tPLURAL\n";
    printf("   \tSINGULAR\t\tPLURAL\n");

    for ( int i = 0; i < MAXFORMS / 2; i++ ) {

        //strcat(output, "%s\t\t\t%s\n", w.forms[i], w.forms[i]);
        printf("%s\t%s\t\t\t%s\n", cases[i], w.forms[i], w.forms[i + 6]);
        //strcat(output, cases[i]);
        //strcat(output, w.forms[i]);
        //strcat(output, "\t\t\t");
        //strcat(output, w.forms[i + 6]);
    }

    //return output;
}