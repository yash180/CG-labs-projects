#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
inttlx,tly,brx,bry,px,py;  
void point_clip()  
{  
intwxmin,wymin,wxmax,wymax;  
wxmin=tlx;  
wxmax=brx;  
wymin=tly;  
wymax=bry;  
if(px>=wxmin&&px<=wxmax)  
if(py>=wymin&&py<=wymax)  
putpixel(px,py,RED);  
getch();  
closegraph();  
}  
void main()  
{   
intgd=DETECT,gm,xc,yc,r;  
clrscr();  
printf("Enter the top left coordinate");  
scanf("%d%d",&tlx,&tly);  
printf("Enter the bottom right coordinate");  
scanf("%d%d",&brx,&bry);  
printf("\n Enter the point");  
scanf("%d%d",&px,&py);  
initgraph(&gd,&gm,"c:\\tc\\bgi");  
setbkcolor(BLUE);  
setcolor(RED);  
rectangle(tlx,tly,brx,bry);  
point_clip();  
}  