#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm=DETECT;
	int r,x,y,p,midx,midy;
	clrscr();
	initgraph(&gd,&gm,"");
	printf("Enter the Radius of circle : ");
	scanf("%d",&r);
	
	x=0;
	y=r;
	p=1-r;			

	midx=getmaxx()/2;					//To get the max position (Bottom-Right corner) of screen. 
	midy=getmaxy()/2;					//Dividing by 2 to get the centre of screen.
	
	
	do{												

		putpixel(midx+ x, midy+ y , 1);				//All possible 8 combinations to draw 8 Segments
		putpixel(midx- x, midy- y , 2);
		putpixel(midx- x, midy+ y , 3);
		putpixel(midx+ x, midy- y , 4);
		putpixel(midx +y, midy+ x , 5);
		putpixel(midx +y, midy -x , 6);
		putpixel(midx -y, midy -x , 7);
		putpixel(midx -y, midy +x , 8);
		
		delay(20);

		x++;					//x will always increase , so it is incremented outside if-else
		
		if(p<0)
		{
			p=p+2*x+1;
		}
		else
		{
			y--;				//y decrements only when p>0
			p=p+2*(x-y)+1;
		}
	}while(x<=y);
	
	getch();
	closegraph();
}