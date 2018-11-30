#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int 
main(int argc, char *argv[])
{   
    int start, end ;
    start = uptime();
    double d = 0.01, z, x, id ; 

    id =fork() ; 
    if(id < 0){
        printf(1,"%d failed in fork!\n", getpid()) ;
    } else if(id > 0){
        // printf(1, "Parent %d creating child %d\n", getpid(), id) ; 
        wait() ;
    }else {
        // printf(1,"Child %d created\n", getpid(), id) ; 

        for(z =0 ; z < 2000000.0 ; z+=d)
            x = x+ 3.14*89.64 ;     
    }
    
    end = uptime();
    printf(1,"Time taken for pid %d : %d\n", getpid(), end - start) ; 
    exit() ;

    
}