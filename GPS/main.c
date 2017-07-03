//
//  main.c
//  GPS
//
//  Created by 20161104584 on 17/6/22.
//  Copyright © 2017年 20161104584. All rights reserved.
//
#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    FILE *fr;
    FILE *fw;
    char str1[70],str2[70];
    char time[7];
    char lat[15];
    char longitute[15];
    char date[7];
    char high[5];
    char speed[7];
    char course[7];
    int i;
    fr=fopen("//Users//a20161104584//Desktop//test//GPS//GPS170510.log","r+");
    fw=fopen("//Users//a20161104584//Desktop//test//GPS//output.csv","w+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    while(fscanf(fr,"%s%s",str1,str2)!=EOF)
    {
    for(i=0;i<6;i++)
    {
        time[i]=str1[i+7];
    }
    time[6]='\0';
    for(i=0;i<8;i++)
    {
        lat[i]=str1[i+16];
    }
    lat[8]='\0';
    for(i=0;i<9;i++)
    {
        longitute[i]=str1[i+27];
    }
    longitute[9]='\0';
   
    for(i=0;i<6;i++)
    {
        date[i]=str1[i+51];
    }
    date[6]='\0';
    for(i=0;i<4;i++)
    {
        high[i]=str2[i+43];
    }
    high[4]='\0';
  
    for(i=0;i<5;i++)
    {
        speed[i]=str1[i+39];
    }
    speed[5]='\0';
    for(i=0;i<5;i++)
    {
        course[i]=str1[i+45];
    }
    course[5]='\0';
    printf("时间,纬度,经度,日期,海拔,地面速率,地面航向\n");
    fprintf(fw,"时间,纬度,经度,日期,海拔,地面速率,地面航向\n");
    printf("%s,%s,%s,%s,%s,%s,%s\n",time,lat,longitute,date,high,speed,course);
    fprintf(fw,"%s,%s,%s,%s,%s,%s,%s\n",time,lat,longitute,date,high,speed,course);
    }
    fclose(fr);
    
    return 0;
    
}
