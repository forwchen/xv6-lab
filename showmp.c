#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"
#include "memlayout.h"
#include "x86.h"



int
main(int argc, char *argv[])
{
    showmp(htoi(argv[1]), htoi(argv[2]));
    //printf(1, "%x %x\n", htoi(argv[1]), htoi(argv[2]));
    exit();
}
