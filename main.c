#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "creat.h"
#include "access.h"
#include "ballfre.h"
#include "close.h"
#include "delete.h"
#include "dir.h"
#include "format.h"
#include "halt.h"
#include "iallfre.h"
#include "install.h"
#include "log.h"
#include "name.h"
#include "open.h"
#include "rdwt.h"
#include "igetput.h"

struct hinode hinode[NHINO];
struct dir dir;
struct file sys_ofile[SYSOPENFILE];
struct filesys filsys;
struct pwd pwd[PWDNUM];
struct user user[USERNUM];

FILE *fd;
struct inode *cur_path_inode;
int user_id;
unsigned short usr_id;
char usr_p[12];
char sel;
char temp_dir[12];
main()
{
    unigned short ab_fd1,ab_fd2,ab_fd3,ab_fd4,i,j;
    char *buf;
    int done = 1;
    printf("\nDo you want to format the disk(y or n)?\n");
    if(getchar()=='y')
    {
        printf("\nFormat will erase all context on the disk \n");
        printf("Formating...\n");
        format();
        printf("\nNow will install the fillsystem,please wait...\n");
        install();
        printf("\n----Login----\nPlease input your userid:");
        scanf("%u",&usr_id);
        printf("\nPlease input your password:");
        scnaf("%s",&usr_p);
        if(!login(usr_id,usr_p))
        return;

       
        
    }
}


