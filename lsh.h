#ifndef LSH_H
#define LSH_H
// Import neccessary headers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<unistd.h>
// define macros
#ifndef LSH_RL_BUFSIZE
#define LSH_RL_BUFSIZE 1024
#endif
#ifndef LSH_TOK_BUFSIZE
#define LSH_TOK_BUFSIZE 64
#endif
#ifndef LSH_TOK_DELIM
#define LSH_TOK_DELIM " \t\r\n\a"
#endif

// define shell functions
void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char*);

// end ifndef
#endif
