/**
 * File              : vc_print_params.c
 * Author            : Danilo & Daisuke
 * Date              : Fri 8 Feb 2019
 */
#include <stdio.h>
#include <tclDecls.h>


int main(int args, char *argv[]) {
    for(int i = 0; i < args; i++) {
        printf("%s\n ", argv[i]);
    }
    return 0;
}
