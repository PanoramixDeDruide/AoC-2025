/***********************************************************************

SPL, the Shakespeare Programming Language

Copyright (C) 2001 Karl Hasselström and Jon Åslund

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
USA.

***********************************************************************/

#ifndef __SHAKESPEARE__
#define __SHAKESPEARE__

#include <stdlib.h>

#define BUF_SIZE 1024

typedef struct _STACKNODE STACKNODE;
struct _STACKNODE {
  long value;
  STACKNODE *next;
};

typedef struct {
  long value;
  char *name;
  long on_stage;
  STACKNODE *stack;
} CHARACTER;

/* global variables */

extern CHARACTER **cast;
extern CHARACTER *first_person;
extern CHARACTER *second_person;

extern long truth_flag;
extern long num_on_stage;
extern long num_cast;

/* function prototypes */
extern void activate_character(long line, CHARACTER *character);
extern void assign(long line, CHARACTER *character, long value);
extern void char_input(long line, CHARACTER *character);
extern void char_output(long line, CHARACTER *character);
extern void enter_scene(long line, CHARACTER *character);
extern void exit_scene(long line, CHARACTER *character);
extern void exit_scene_all(long line);
extern void global_initialize();
extern CHARACTER *initialize_character(char *name);
extern long long_add(long line, long a, long b);
extern long long_cube(long line, long value);
extern long long_div(long line, long a, long b);
extern long long_factorial(long line, long n);
extern void long_input(long line, CHARACTER *character);
extern long long_mod(long line, long a, long b);
extern long long_mul(long line, long a, long b);
extern void long_output(long line, CHARACTER *character);
extern long long_sqrt(long line, long value);
extern long long_square(long line, long value);
extern long long_sub(long line, long a, long b);
extern long long_twice(long line, long value);
extern void pop(long line, CHARACTER *character);
extern void push(long line, CHARACTER *character, long value);
extern long value_of(long line, CHARACTER *character);

#endif /* __SHAKESPEARE__ */
