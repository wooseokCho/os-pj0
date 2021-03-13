#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char*argv[]){

    if(argc > 1){
        printf(2, "usage: count number of processes whose state is not UNUSED\n");
        exit();
    }

    printf(1, "%d\n", getprocs());
    exit();
}