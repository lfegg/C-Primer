/*
    213如果存的是字符串数组,那么就算存字符'2','1','3',''\0
    213如果存的是int类型的值，那就算存数值的213
*/
//把命令行参数转换为数字
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    int i, times;

    if(argc < 2 || (times = atoi(argv[1])) < 1)
        printf("Usage:%s  positive-number\n", argv[0]);
    else
        for(i = 0; i < times; i++)
            puts("Hello,good looking");

    return 0;
}