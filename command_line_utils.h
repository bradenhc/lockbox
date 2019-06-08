//
// Created by braden on 10/24/18.
//

#ifndef LOCKBOX_COMMAND_LINE_UTILS_H
#define LOCKBOX_COMMAND_LINE_UTILS_H

#include <stdlib.h>

/// This structure defines a linked list for the options passed to the executable. This is easier to implement and
/// search rather than trying to dynamically allocate space for an array.
typedef struct lb_option_t {
    const char* flag;
    const char* value;
    struct lb_option_t* next;
} lb_option_t;

/// This structure defines a linked list for the arguments passed to the executable. This is easier to implement and
/// search rather than trying to dynamically allocate space for an array.
typedef struct lb_arg_t {
    const char* value;
    struct lb_arg_t* next;
} lb_arg_t;

typedef struct lb_optargs_t {
    unsigned int num_options;
    lb_option_t* options;
    unsigned int num_args;
    lb_arg_t* args;
} lb_optargs_t;

/// Retrieves the command line arguments passed to the executable puts them in an easily searchable structure.
lb_optargs_t* parse_command_line_args(int argc, const char* argv[]);

char* get_option(lb_optargs_t* optargs, const char* option);

char* get_arg(lb_optargs_t* optargs, size_t index);

#endif //LOCKBOX_COMMAND_LINE_UTILS_H
