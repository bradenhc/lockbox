//
// Created by braden on 10/24/18.
//
#include <stdio.h>

#include "command_line_utils.h"

int main(int argc, char* argv[]){
    lb_optargs_t* optargs = parse_command_line_args(argc, argv);
    if(optargs != NULL) {

    } else {
        printf("Hello, world!\n");
    }
    return 0;
}

