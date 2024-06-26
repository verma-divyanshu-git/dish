#include "headers.h"

char cwd[1000];
char tempHome[1000];
char sysname[1000];
char username[10000];
char *commands[1000];
char *token[1000];
char prevDir[1000];

int bjob_count;
bjob job_arr[100];
int job_num_available[100];
bjob curr_foregound_job;

char *pipes[1000];
pid_t shellpid;
