#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <stdlib.h>
#include <grp.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>
#include <langinfo.h>
#include <signal.h>
#include <stdlib.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

extern char cwd[100000];
extern char tempHome[100000];
extern char sysname[100000];
extern char username[1000000];
extern char *commands[100000];
extern char *token[100000];
extern char prevDir[100000];


struct jobs{
    char name[10000];
    pid_t pid;
};
typedef struct jobs bjob;

extern int bjob_count;
extern bjob job_arr[100000];

void init_shell();
void prompt();
void inputLoop();
void pwd();
void echo(int numTokens, char **token);
void cd (int numTokens, char** token);
void ls(int numTokens);
void foreground();
void background(int numTokens);
void childHandler();
void pinfo(int numTokens);

#endif /* HEADERS_H */

