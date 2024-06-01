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

char cwd[1000];
char tempHome[1000];
char sysname[1000];
char username[1000];

void init_shell();
void prompt();
void inputLoop();
void pwd();
void echo(int numTokens, char **token);