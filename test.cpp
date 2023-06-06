#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/syscall.h>
#define SYSPATH "/usr/include/asm-generic/fctl.h"

int stringConstantToInteger(char * constantBuf)
{
        int num = 0;
        char read_arr[100];

        FILE *fp =fopen(SYSPATH, "r");
        if(fp==NULL){
          printf("경로 틀림");
          return 1;
        }
        else{
          while (ch = fgetc(fp) != EOF){
            if(ch ==hello[0]){
              for (int i = 1)
            }

          }
          {
            /* code */
          }
          
        }
        //파일 열기
        //파일을 읽어서 constantBuf의 글자와 동일한 글자 찾기
        //글자를 찾으면 해당하는 글자의 숫자를 가져오기
        return num;
}

int main(void)
{
        char * constant_variable = "O_CREAT";
        int flagNumber = 0;
        flagNumber = stringConstantToInteger(constant_variable);
        //할려는 것
        //syscall(SYS_open, char * name, flagNumber , int mode); 여기서 flagNumber를 넣고 싶은 것
        return 0;
}

//int main (void)
//{
//
//        printf("%s | %d", "O_APPEND\n"    ,       O_APPEND);
//        printf("%s | %d", "O_ASYNC\n"     ,       O_ASYNC);
//        printf("%s | %d", "O_CLOEXEC"   ,       O_CLOEXEC);
//
//}
