# st2ch
```cpp
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/syscall.h>
int stringConstantToInteger(char * constantBuf)
{
        int num = 0;
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

``




