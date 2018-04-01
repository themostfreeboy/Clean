#include<stdio.h>
#include<conio.h>
main()
{
    FILE *p1;
    p1=fopen("一键清理系统垃圾文件.bat","w");
    char a,b,c,d,e,f;
    a='@';
    b='%';
    c='/';
    d='&';
    e='*';
    f='"';
    fprintf(p1,"%cecho off\ncolor 1b\ntitle 清理系统垃圾工具V1.0(贾翔龙编)\necho 正在清理系统垃圾及安装残留文件，请稍等......(贾翔龙编)\ndel %cf %cs %cq %csystemdrive%c\\%c.tmp\ndel %cf %cs %cq %csystemdrive%c\\%c._mp\ndel %cf %cs %cq %csystemdrive%c\\%c.log\ndel %cf %cs %cq %csystemdrive%c\\%c.gid\ndel %cf %cs %cq %csystemdrive%c\\%c.chk\ndel %cf %cs %cq %csystemdrive%c\\%c.old\ndel %cf %cs %cq %csystemdrive%c\\recycled\\%c.%c\ndel %cf %cs %cq %cwindir%c\\%c.bak\\ndel %cf %cs %cq %cwindir%c\\prefetch\\%c.%c\nrd %cs %cq %cwindir%c\\temp %c md %cwindir%c\\temp\ndel %cf %cq %cuserprofile%c\\cookies\\%c.%c\ndel %cf %cq %cuserprofile%c\\recent\\%c.%c\ndel %cf %cs %cq %c%cuserprofile%c\\Local Settings\\Temporary Internet Files\\%c.%c%c\ndel %cf %cs %cq %c%cuserprofile%c\\Local Settings\\Temp\\%c.%c%c\ndel %cf %cs %cq %c%cuserprofile%c\\recent\\%c.%c%c\ncls  \necho 系统垃圾清理完成。(贾翔龙编)\n",a,c,c,c,b,b,e,c,c,c,b,b,e,c,c,c,b,b,e,c,c,c,b,b,e,c,c,c,b,b,e,c,c,c,b,b,e,c,c,c,b,b,e,e,c,c,c,b,b,e,c,c,c,b,b,e,e,c,c,b,b,d,b,b,c,c,b,b,e,e,c,c,b,b,e,e,c,c,c,f,b,b,e,e,f,c,c,c,f,b,b,e,e,f,c,c,c,f,b,b,e,e,f);
    fclose(p1);
}
