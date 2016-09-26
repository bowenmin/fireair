# lab2

//
//  main.c
//  program2
//
//  Created by bowen min on 9/26/16.
//  Copyright © 2016 bowen min. All rights reserved.
//

#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h> //wait
#include <stdlib.h> //exit
#include <string.h>
int main(int argc, char*argv[])
{
    int i=0;
    //printf("i son/parent pid  \n");
    
    for(i=1;i<argc;i++){
        pid_t fpid=fork();
        if(fpid==0)
        {
            printf("Filename: %s\tPID: %d\n", argv[i],getpid());
            //printf("%d child %8d\n",i,getpid());
            exit(0);
        }
        
        else
        {
            wait(NULL);
            //printf("%d parent %7d\n",i,getpid());
            
        }
        
    }
    printf("done\n");
    return 0;
}


