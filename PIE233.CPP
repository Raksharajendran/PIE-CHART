#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm,x,y;
int i,elements;
float total=0;
float startangle[20],endangle[20],data[20];
printf("\nEnter number of elements:");
scanf("%d",&elements);
for(i=0;i<elements;i++)
{
printf("\nEnter the %d elements:",i+1);
scanf("%d",&data[i] );
}
for(i=0;i<elements;i++)
{
total=total+data[i];
}
startangle[0]=0;
for(i=0;i<elements;i++)
{
endangle[i]=startangle[i]+(data[i]*360/total);
startangle[i+1]=endangle[i];
}
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(100,10,"PIE CHART USING C GRAPHICS");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=0;i<elements;i++)
{
setfillstyle(SOLID_FILL,i+1);
pieslice(x,y,startangle[i],endangle[i],120);
}
getch();
closegraph();
return 0;
}
