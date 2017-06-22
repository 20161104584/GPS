//
//  main.c
//  GPS
//
//  Created by 20161104584 on 17/6/22.
//  Copyright © 2017年 20161104584. All rights reserved.
//
#include<stdio.h>

int main (int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    // FILE *fw;
    char str1[70];
    char str2[70];
    fr=fopen("//Users//a20161104584//Desktop//GPS170510.log","r+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    fclose(fr);
    return 0;
}
