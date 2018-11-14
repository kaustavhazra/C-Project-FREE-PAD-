#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <dirent.h>
union REGS in, out;
void show()
{
in.x.ax=1;
int86(0x33,&in,&out);
}
void move( int *x,int *y,int *b)
{
in.x.ax=3;
int86(0x33,&in,&out);
*x=out.x.cx;
*y=out.x.dx;
*b=out.x.bx;
}

void set( int x,int y)
{
in.x.ax=4;
in.x.cx=x;
in.x.dx=y;
int86(0x33,&in,&out);
}


void font5()
{
int i;
    //settextfill()
    setcolor(WHITE);
     for(i=81;i<=100;i++)
	{
	    line(15,i,50,i);
	}
	setcolor(LIGHTGRAY);
     for(i=102;i<=130;i++)
	{
	    line(15,i,50,i);
	}
}

void size5()
{
int i;
    //settextfill()
    setcolor(WHITE);
     for(i=81;i<=100;i++)
	{
	    line(60,i,98,i);
	}
	setcolor(LIGHTGRAY);
     for(i=102;i<=130;i++)
	{
	    line(60,i,98,i);
	}
}

void scan()
{
    FILE *fp,*fp1;
    char a[100];
    fp=fopen("freepad.txt","a");
    gotoxy(10,25);
    gets(a);
    fprintf(fp,"%s",a);
    fclose(fp);
    fp1=fopen("freepad.txt","r");
    setcolor(WHITE);
    settextstyle(0,HORIZ_DIR,1);
    while(!feof(fp1))
        {
            fgets(a,50,fp);
            settextstyle(1,HORIZ_DIR,1);
            outtextxy(105,105,a);
        }
    //gotoxy(15,15);
    fclose(fp1);

}
void save()
{
    int p,q;
    p=getmaxx();
    q=getmaxy();
    setcolor(DARKGRAY);
    setfillstyle(1,DARKGRAY);
    rectangle(p/2-100,q/2-50,p/2+100,q/2+20);
    floodfill(p/2,q/2,DARKGRAY);
    setcolor(15);
    rectangle(p/2-101,q/2-51,p/2+101,q/2+21);
    setcolor(15);
    settextstyle(0,HORIZ_DIR,1);
    outtextxy(p/2-75,q/2-30,"Do you want to save");
    rectangle(p/2-70,q/2,p/2-30,q/2+10);
    outtextxy(p/2-62,q/2+2,"Yes");
    rectangle(p/2+70,q/2,p/2+30,q/2+10);
    outtextxy(p/2+45,q/2+2,"No");
    //outtextxy();
}
void color1()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(1);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void color2()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(2);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void color3()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(3);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void color4()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(4);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void color5()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(5);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void color6()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(6);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}
void color7()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(7);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}
void color8()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}
void color9()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(9);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}
void color10()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(10);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}
void color11()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(11);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}
void color12()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(12);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}





void right1()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}


void right2()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(4,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}


void right3()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(7,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}



void bold()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(10,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void italic()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(5,HORIZ_DIR,2);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);
}

void font1()
{
    //settextfill()
    //setcolor(WHITE);
   // outtextxy(100,100,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(2,HORIZ_DIR,2);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

     font5();
}
void font2()
{
    //settextfill()
   // setcolor(WHITE);
   // outtextxy(100,120,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(6,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

     font5();
}
void font3()
{
    //settextfill()
    //setcolor(WHITE);
    //outtextxy(100,140,"hello");
    FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(8,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

    font5();
}
void font4()
{
    //settextfill()
    //setcolor(WHITE);
    //outtextxy(100,160,"hello");
    FILE *fp;
     int x,y,b,i,j;
     char msg[50];
     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(9,HORIZ_DIR,1);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

    font5();
}
void size1()
{
    //setcolor(GREEN);
    //outtextxy(200,160,"hello");
    FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,2);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

    size5();
}
void size2()
{
    //setcolor(GREEN);
    //outtextxy(200,180,"hello");
    FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,3);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

    size5();
}
void size3()
{
    //setcolor(GREEN);
   // outtextxy(200,200,"hello");
   FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,4);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

    size5();
}
void size4()
{
    //setcolor(GREEN);
    //outtextxy(200,220,"hello");
    FILE *fp;
     int x,y,b,i,j;
     char msg[50];

     fp=fopen("freepad.txt","r");

   gotoxy(5,5);
    settextstyle(1,HORIZ_DIR,5);

   while(!feof(fp))
    {
	fgets(msg,50,fp);
     setcolor(15);
	 outtextxy(105,105,msg);

    }
    fclose(fp);

    size5();
}

int main()
{
FILE *fp,*fp1,*fs,*ft,*fp11;
DIR *ddir;
    struct dirent *dir;
int gd=DETECT,gm;
int x,y,i,j,b,p,q,e,g,k,l,h,f,flag=0,flag1=0,xaxix,yaxix,rectangle1,circle1,iq,jq;
char data[50],a,filename[15],aa[50],ch;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
//setbkcolor(WHITE);

p=getmaxx();
q=getmaxy();
//upper design
setcolor(DARKGRAY);
setfillstyle(1,DARKGRAY);
rectangle(0,0,p,19);  //upper rectangle
floodfill(1,1,WHITE);
//end
setcolor(0);
setfillstyle(1,0);
rectangle(100,102,539,369);  //main middle write rectangle
floodfill(150,300,0);

//upper directory find
setcolor(LIGHTBLUE);
setfillstyle(1,LIGHTBLUE);
rectangle(0,1,40,17);
floodfill(1,10,LIGHTBLUE);

//exit button
//upper circle
setcolor(LIGHTGRAY);
setfillstyle(1,LIGHTGRAY);
circle(p/2,10,7);
floodfill(p/2,10,LIGHTGRAY);
setcolor(12);
setfillstyle(1,LIGHTRED);
circle(p/2+20,10,7);
floodfill(p/2+20,10,12);
//rectangle(p/2+13,3,p/2+27,17);
setcolor(LIGHTGREEN);
setfillstyle(1,LIGHTGREEN);
circle(p/2-20,10,7);
floodfill(p/2-20,10,10);

setcolor(15);
setfillstyle(1,15);
rectangle(0,20,p,100);   //main instrument rectangle
floodfill(p-22,22,15);
//left right beside
setcolor(7);
setfillstyle(1,7);
rectangle(1,102,15,370);
floodfill(2,200,7);
setfillstyle(1,7);
rectangle(p-15,102,p-1,370);
floodfill(p-2,200,7);
setcolor(7);
setfillstyle(1,7);
rectangle(1,102,100,370);
floodfill(10,200,7);
setfillstyle(1,7);
rectangle(p-100,102,p-1,370);
floodfill(p-5,200,7);
//orginal write option rectangle too lower
setcolor(12);
setfillstyle(7,12);
rectangle(1,370,p-1,380);
floodfill(10,371,12);
setfillstyle(7,12);
rectangle(1,q-30,p-1,q-20);
floodfill(10,q-28,12);
setfillstyle(7,12);
rectangle(1,371,10,q-20);
floodfill(5,412,12);
setfillstyle(7,12);
rectangle(p-10,371,p-1,q-20);
floodfill(p-8,412,12);
//for text left right middle
rectangle(15,385,45,400);
line(15,389,30,389);
line(15,393,30,393);
line(15,397,30,397);
rectangle(15,405,45,420);
line(22,409,35,409);
line(22,413,35,413);
line(22,417,35,417);
rectangle(15,425,45,440);
line(45,429,30,429);
line(45,433,30,433);
line(45,437,30,437);
rectangle(p-45,385,p-15,400);
rectangle(p-45,405,p-15,420);
rectangle(p-45,425,p-15,440);

//rectangle(1,380,p-1,390);
//other extra panel
setcolor(12);
rectangle(1,q-20,p-1,q-1);


//box
setcolor(BLACK);
rectangle(15,60,50,80);
settextstyle(0,HORIZ_DIR,1);
outtextxy(19,65,"Font");
 rectangle(60,60,98,80);
 settextstyle(0,HORIZ_DIR,1);
outtextxy(63,65,"Size");


//for color code
setcolor(1);
setfillstyle(1,1);
rectangle(120,25,145,35);
floodfill(121,26,1);
setcolor(2);
setfillstyle(1,2);
rectangle(150,25,175,35);
floodfill(151,26,2);
setcolor(3);
setfillstyle(1,3);
rectangle(180,25,205,35);
floodfill(181,26,3);
setcolor(4);
setfillstyle(1,4);
rectangle(120,40,145,50);
floodfill(121,41,4);
setcolor(5);
setfillstyle(1,5);
rectangle(150,40,175,50);
floodfill(151,41,5);
setcolor(6);
setfillstyle(1,6);
rectangle(180,40,205,50);
floodfill(181,41,6);
setcolor(7);
setfillstyle(1,7);
rectangle(120,55,145,65);
floodfill(121,56,7);
setcolor(8);
setfillstyle(1,8);
rectangle(150,55,175,65);
floodfill(151,56,8);
setcolor(9);
setfillstyle(1,9);
rectangle(180,55,205,65);
floodfill(181,56,9);
setcolor(10);
setfillstyle(1,10);
rectangle(120,70,145,80);
floodfill(121,71,10);
setcolor(11);
setfillstyle(1,11);
rectangle(150,70,175,80);
floodfill(151,71,11);
setcolor(12);
setfillstyle(1,12);
rectangle(180,70,205,80);
floodfill(181,71,12);
setcolor(0);
outtextxy(150,88,"Color");


//for paint
rectangle(250,30,280,60);
line(260,37,260,53);
line(270,37,270,53);
line(260,37,270,37);
line(260,53,270,53);
line(268,58,260,53);
line(268,58,270,53);
circle(305,43,10);
rectangle(330,35,365,50);
//line(390,35,377,55);
//line(390,35,403,55);
//line(377,55,403,55);
//rectangle(295,33,315,53);
//rectangle(377,35,402,55);

 settextstyle(0,HORIZ_DIR,1);
//outtextxy(115,65,"Color");
// rectangle(135,25,185,45);
// settextstyle(0,HORIZ_DIR,1);
//outtextxy(138,32,"Bullet");
// rectangle(190,25,240,45);
// settextstyle(0,HORIZ_DIR,1);
//outtextxy(194,32,"Number");
//line(p-10,20,p-10,100);
line(p/2-93,25,p/2-93,90);   //middle line
line(p/2+92,25,p/2+92,90);   //middle line
outtextxy(((p/2+92+(p-10))/2)-20,87,"Styles");
outtextxy((p/2-40),87,"Drawing");
//outtextxy(((p/2-92-22)/2),87,"Edit");
//for fontbox   for b i
setcolor(GREEN);
rectangle(30,25,((p/2-93)/4)-5,45);
outtextxy(36,32,"B");
rectangle(((p/2-93)/4)+10,25,((p/2-93)/2)-26,45);
//settextstyle(7,HORIZ_DIR,0);
outtextxy(((p/2-93)/4)+18,32,"I");
//rectangle(((p/2-93)/2)+12,25,((p/2-93)/4)+46,45);
//rectangle(((p/2-93)/2)+25,25,((p/2-93)/2)+48,45);
//rectangle(((p/2-93)/2)+67,25,(p/2-93-10),80);
//for style box
setcolor(BLACK);
rectangle(p/2+97,30,((p/2+92+(p-10))/2)-35,80);
rectangle(((p/2+92+(p-10))/2)-32,30,((p/2+92+(p-10))/2)+38,80);
rectangle(((p/2+92+(p-10))/2)+42,30,p-8,80);
//for mouse calculation
e=p/2+97;//1st rectangle
f=((p/2+92+(p-10))/2)-35; //1st rectangle
g=((p/2+92+(p-10))/2)-32;//2nd rectangle
h=((p/2+92+(p-10))/2)+38;//2nd rectangle
k=((p/2+92+(p-10))/2)+40;//3rd rectangle
l=p-13;// 3rd rectangle
settextstyle(1,HORIZ_DIR,4);
outtextxy(e+7,35,"ABC");
settextstyle(4,HORIZ_DIR,4);
outtextxy(g+2,35,"ABC");
settextstyle(7,HORIZ_DIR,4);
outtextxy(k+7,35,"ABC");
show();
set(p/2,q/2);
jump:
while(1)
{
move(&x,&y,&b);

    for(i=0;i<=40;i++)
    {
        for(j=1;j<=17;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    ddir = opendir("C:\\TURBOC3\\Projects .");
                    fp11=fopen("dirname.txt","w");
                    if (ddir)
                        {
                        while ((dir = readdir(ddir)) != NULL)
                            {
                                //printf("%s\n", dir->d_name);
                                fprintf(fp11,"%s\n",dir->d_name);
                            }
                        closedir(ddir);
                        }
                        fclose(fp11);

                }
            }
        }
    }

	for(i=5;i<=p-10;i++)
    {
        for(j=380;j<=q-20;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    scan();

                }
            }
        }
    }

 for(i=250;i<=280;i++)        //rectangle(250,30,280,60);
    {
        for(j=30;j<=60;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    /* while(b!=2)
                    {
                        move(&x,&y,&b);
                        xaxix=x;
                        yaxix=y;
                        while(b==1)
                        {
                            setcolor(3);
                            //circle(xaxix,yaxix,circle1);
                            //flag=1;
                            line(xaxix,yaxix,xaxix,yaxix);
                            //x=xaxix;
                            //y=yaxix;
                            line(x+1,y,x+1,y);
                            line(x,y,x,y);
                            line(x,y+1,x,y+1);
                            line(x,y-1,x,y-1);
                            line(x-1,y,x-1,y);
                            move(&x,&y,&b);

                        }
                    }*/
                   // setcolor(15);
                    //setfillstyle(1,15);
                    //rectangle(235,61,400,100);
                   // floodfill(236,63,15);
                    setcolor(1);
                    setfillstyle(1,1);
                    rectangle(240,63,265,73);
                    floodfill(243,65,1);
                    setcolor(2);
                    setfillstyle(1,2);
                    rectangle(270,63,295,73);
                    floodfill(271,65,2);
                    setcolor(3);
                    setfillstyle(1,3);
                    rectangle(300,63,325,73);
                    floodfill(301,65,3);
                    setcolor(4);
                    setfillstyle(1,4);
                    rectangle(330,63,355,73);
                    floodfill(331,65,4);
                    setcolor(5);
                    setfillstyle(1,5);
                    rectangle(360,63,385,73);
                    floodfill(361,65,5);
                    setcolor(6);
                    setfillstyle(1,6);
                    rectangle(240,75,265,85);
                    floodfill(243,76,6);
                    setcolor(9);
                    setfillstyle(1,9);
                    rectangle(270,75,295,85);
                    floodfill(271,76,9);
                    setcolor(10);
                    setfillstyle(1,10);
                    rectangle(300,75,325,85);
                    floodfill(301,76,10);
                    setcolor(11);
                    setfillstyle(1,11);
                    rectangle(330,75,355,85);
                    floodfill(331,76,11);
                    setcolor(12);
                    setfillstyle(1,12);
                    rectangle(360,75,385,85);
                    floodfill(361,76,12);
                    setcolor(0);
                    rectangle(387,63,395,85);
                    line(387,75,393,65);
                    line(387,75,393,85);
                    flag1=2;
                    while(1)
                        {
                            move(&x,&y,&b);
                            for(i=240;i<=265;i++)
                                {
                                    for(j=63;j<=73;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(1);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=270;i<=295;i++)
                                {
                                    for(j=63;j<=73;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(2);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=300;i<=325;i++)
                                {
                                    for(j=63;j<=73;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(3);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=330;i<=355;i++)
                                {
                                    for(j=63;j<=73;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(4);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=360;i<=385;i++)
                                {
                                    for(j=63;j<=73;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(5);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=240;i<=265;i++)
                                {
                                    for(j=75;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);for(i=300;i<=325;i++)
                                {
                                    for(j=75;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(10);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(6);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=270;i<=295;i++)
                                {
                                    for(j=75;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(9);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=300;i<=325;i++)
                                {
                                    for(j=75;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(10);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=330;i<=355;i++)
                                {
                                    for(j=75;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(11);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=360;i<=385;i++)
                                {
                                    for(j=75;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        while(b!=2)
                                                            {
                                                                move(&x,&y,&b);
                                                                xaxix=x;
                                                                yaxix=y;
                                                                while(b==1)
                                                                    {
                                                                    setcolor(12);
                                                                    //circle(xaxix,yaxix,circle1);
                                                                    //flag=1;
                                                                    line(xaxix,yaxix,xaxix,yaxix);
                                                                    //x=xaxix;
                                                                    //y=yaxix;
                                                                    line(x+1,y,x+1,y);
                                                                    line(x,y,x,y);
                                                                    line(x,y+1,x,y+1);
                                                                    line(x,y-1,x,y-1);
                                                                    line(x-1,y,x-1,y);
                                                                    move(&x,&y,&b);

                                                                    }
                                                            }

                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                for(i=387;i<=395;i++)//387,63,395,85
                                {
                                    for(j=63;j<=85;j++)
                                        {
                                            if(i==x&&j==y)
                                                {
                                                    if(b==1)
                                                        {
                                                            setcolor(8);
                                                        setfillstyle(1,8);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,8);
                                                        setcolor(15);
                                                        setfillstyle(1,15);
                                                        rectangle(235,61,397,85);
                                                        floodfill(236,63,15);
                                                        flag1=1;
                                                        }
                                                }
                                        }
                                }
                                if(flag1==1)
                                break;
                        }


                }
            }
        }
    }



 for(i=295;i<=315;i++)        //rectangle(250,30,280,60);
    {
        for(j=33;j<=53;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                     while(b!=2)
                    {
                        move(&x,&y,&b);
                        xaxix=x;
                        yaxix=y;
                        while(b==1)
                        {

                                            setcolor(0);
                                            //line(xaxix,yaxix,x,y);
                                            //x=xaxix;
                                            //y=yaxix;
                                            //line(x,y,xaxix,yaxix);
                                            line(xaxix,yaxix,xaxix,yaxix);
                                            line(x+1,y,x+1,y);
                                            line(x+2,y,x+2,y);
                                            line(x+3,y,x+3,y);
                                            line(x+4,y,x+4,y);
                                            //line(x,y,x,y);
                                            line(x,y+1,x,y+1);
                                            line(x,y+2,x,y+2);
                                            line(x,y+3,x,y+3);
                                            line(x,y+4,x,y+4);
                                            line(x,y-1,x,y-1);
                                            line(x,y-2,x,y-2);
                                            line(x,y-3,x,y-3);
                                            line(x,y-4,x,y-4);
                                            line(x-1,y,x-1,y);
                                            line(x-2,y,x-2,y);
                                            line(x-3,y,x-3,y);
                                            line(x-4,y,x-4,y);
                                            line(x,y,x,y);

                                            move(&x,&y,&b);
                        }
                    }

                }
            }
        }
    }

for(i=330;i<=365;i++)        //rectangle(250,30,280,60);
    {
        for(j=35;j<=50;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {

                   //freehand1();
                   while(b!=2)
                    {
                        move(&x,&y,&b);
                        xaxix=x;
                        yaxix=y;
                        while(b==1)
                        {
                            setcolor(15);
                            //circle(xaxix,yaxix,circle1);
                            //flag=1;
			    line(xaxix,yaxix,xaxix,yaxix);
			    //x=xaxix;
			    //y=yaxix;
			    line(x+1,y,x+1,y);
			    line(x,y,x,y);
			   line(x,y+1,x,y+1);
			   line(x,y-1,x,y-1);
			    line(x-1,y,x-1,y);
                            move(&x,&y,&b);
                        }
                    }

                }
            }
        }
    }



//for color code
for(i=120;i<=145;i++)
    {
        for(j=25;j<=35;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                     /*                   setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color1();

                }
            }
        }
    }

for(i=150;i<=175;i++)
    {
        for(j=25;j<=35;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                     /*                   setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color2();

                }
            }
        }
    }
    for(i=180;i<=205;i++)
    {
        for(j=25;j<=35;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                     /*   setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color3();

                }
            }
        }
    }
    for(i=120;i<=145;i++)
    {
        for(j=40;j<=50;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                   /*     setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color4();

                }
            }
        }
    }
    for(i=150;i<=175;i++)
    {
        for(j=40;j<=50;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {/*
                                        setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                   color5();

                }
            }
        }
    }
    for(i=180;i<=205;i++)
    {
        for(j=40;j<=50;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                     /*   setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color6();

                }
            }
        }
    }
    for(i=120;i<=145;i++)
    {
        for(j=55;j<=65;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                             /*           setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color7();

                }
            }
        }
    }
    for(i=150;i<=175;i++)
    {
        for(j=55;j<=65;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                 /*       setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color8();

                }
            }
        }
    }
    for(i=180;i<=205;i++)
    {
        for(j=55;j<=65;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                              /*          setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color9();

                }
            }
        }
    }
    for(i=120;i<=145;i++)
    {
        for(j=70;j<=80;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                              /*          setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color10();

                }
            }
        }
    }
    for(i=150;i<=175;i++)
    {
        for(j=70;j<=80;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                 /*       setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color11();

                }
            }
        }
    }
    for(i=180;i<=205;i++)
    {
        for(j=70;j<=80;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {/*
                                        setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);*/
                    color12();

                }
            }
        }
    }




    for(i=p/2+97;i<=((p/2+92+(p-10))/2)-35;i++)     //rectangle(p/2+97,30,((p/2+92+(p-10))/2)-35,80);
    {
        for(j=30;j<=80;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    setcolor(DARKGRAY);
                    setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
                    right1();

                }
            }
        }
    }

    for(i=((p/2+92+(p-10))/2)-32;i<=((p/2+92+(p-10))/2)+38;i++)    // rectangle(((p/2+92+(p-10))/2)-32,30,((p/2+92+(p-10))/2)+38,80);
    {
        for(j=30;j<=80;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    setcolor(DARKGRAY);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
                    right2();

                }
            }
        }
    }

    for(i=((p/2+92+(p-10))/2)+42;i<=p-8;i++)         //rectangle(((p/2+92+(p-10))/2)+42,30,p-8,80);
    {
        for(j=30;j<=80;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    setcolor(DARKGRAY);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
                    right3();

                }
            }
        }
    }





    for(i=30;i<=((p/2-93)/4)-5;i++)//rectangle(30,25,((p/2-93)/4)-5,45);
    {
        for(j=25;j<=45;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
                    bold();

                }
            }
        }
    }

    for(i=((p/2-93)/4)+10;i<=((p/2-93)/2)-26;i++)        //rectangle(((p/2-93)/4)+10,25,((p/2-93)/2)-26,45);
    {
        for(j=25;j<=45;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                                setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
                    italic();

                }
            }
        }
    }

    for(i=p/2+13;i<=p/2+27;i++)//p/2+13,3,p/2+27,17
    {
        for(j=3;j<=17;j++)
        {
            if(i==x&&j==y)
            {
                if(b==1)
                {
                    save();
                    while(1)
                    {
                        move(&x,&y,&b);
                        for(i=p/2-70;i<=p/2-30;i++)
                        {
                            for(j=q/2;j<=q/2+10;j++)
                            {
                                if(i==x&&j==y)
                                {
                                    if(b==1)
                                    {
                                        setcolor(DARKGRAY);
                                        setfillstyle(1,DARKGRAY);
                                        rectangle(p/2-100,q/2+21,p/2+100,q/2+50);
                                        floodfill(p/2,q/2+30,DARKGRAY);

                                        setcolor(0);
                                        setfillstyle(1,0);
                                        rectangle(p/2-50,q/2+33,p/2+90,q/2+48);
                                        floodfill(p/2,q/2+36,0);
                                        setcolor(15);
                                        outtextxy(p/2-95,q/2+37,"Enter:");
                                        outtextxy(p/2-40,q/2+37,"File Name.txt");
                                        setcolor(15);
                                        rectangle(p/2-101,q/2+21,p/2+101,q/2+51);
                                        gotoxy(35,18);
                                        scanf("%s",filename);

                                        ft=fopen(filename,"w");
                                        fs=fopen("freepad.txt","r");
                                        while(1)
                                            {
                                                ch=fgetc(fs);
                                                if(ch==EOF)
                                                {
                                                    break;
                                                }
                                                else

                                                    fputc(ch,ft);

                                            }
                                            fclose(fs);
                                                fclose(ft);
                                                remove("freepad.txt");
                                        return 0;


                                        //ft=fopen("")

                                    }
                                }
                            }
                        }

                        for(i=p/2+30;i<=p/2+70;i++)
                        {
                            for(j=q/2;j<=q/2+10;j++)
                            {
                                if(i==x&&j==y)
                                {
                                    if(b==1)
                                    {
                                        remove("freepad.txt");
                                        return 0;
                                        //ft=fopen("")

                                    }
                                }
                            }
                        }


                    }

                }

            }
        }
    }
    setcolor(0);
 rectangle(15,60,50,80);
    for(i=15;i<=50;i++)
	{
	  for(j=60;j<=80;j++)
	  {
	  if(i==x&&j==y)
		  {
		    if(b==1)
		      {
		          //flag=1;
		          setcolor(BLACK);
			 rectangle(15,80,50,90);
			 settextstyle(2,HORIZ_DIR,4);
			 outtextxy(20,80,"small");
			 rectangle(15,90,50,100);
			 outtextxy(20,90,"sans");
			 rectangle(15,100,50,110);
			 outtextxy(20,100,"gothi");
			 rectangle(15,110,50,120);
			 outtextxy(17,110,"script");
			 rectangle(15,120,50,130);
			 line(32,122,27,127);
			 line(32,122,37,127);
             flag=2;
			 while(1)
			 {
			  move(&x,&y,&b);
			  for(i=15;i<=50;i++)
				{
				 for(j=80;j<=90;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");
                                setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
							font1();
							flag=1;
							}
						 }
					}
				}
				for(i=15;i<=50;i++)
				{
				 for(j=90;j<=100;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");
							 setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);

							font2();
							flag=1;
							}
						 }
					}
				}

				for(i=15;i<=50;i++)
				{
				 for(j=100;j<=110;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");
							 setcolor(8);
                            setfillstyle(1,8);
                                rectangle(102,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);

							font3();
							flag=1;
							}
						 }
					}
				}

				for(i=15;i<=50;i++)
				{
				 for(j=110;j<=120;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");

                                setcolor(8);
                                setfillstyle(1,8);
                                rectangle(102,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);

							font4();
							flag=1;
							}
						 }
					}
				}

				for(i=15;i<=50;i++)
				{
				 for(j=120;j<=130;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");

							font5();
							flag=1;
							}
						 }
					}
				}
				if(flag==1)
                break;
			   }
             }
            }
		  }
	  }







//have to correct

 setcolor(0);
 rectangle(60,60,98,80);
    for(i=60;i<=98;i++)
	{
	  for(j=60;j<=80;j++)
	  {
	  if(i==x&&j==y)
		  {
		    if(b==1)
		      {
		          //flag=1;
		          setcolor(BLACK);
			 rectangle(60,80,98,90);
			 settextstyle(0,HORIZ_DIR,1);
			 outtextxy(77,84,"2");
			 rectangle(60,90,98,100);
			 outtextxy(77,94,"4");
			 rectangle(60,100,98,110);
			 outtextxy(77,104,"6");
			 rectangle(60,110,98,120);
			 outtextxy(77,114,"8");
			 rectangle(60,120,98,130);
			 line(80,122,75,127);
			 line(80,122,85,127);
             flag1=2;
			 while(1)
			 {
			  move(&x,&y,&b);
			  for(i=60;i<=98;i++)
				{
				 for(j=81;j<=90;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						       setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
							size1();
							flag1=1;
							}
						 }
					}
				}
				for(i=60;i<=98;i++)
				{
				 for(j=91;j<=100;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");
                            setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);
							size2();
							flag1=1;
							}
						 }
					}
				}

				for(i=60;i<=98;i++)
				{
				 for(j=101;j<=110;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");
							 setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);

							size3();
							flag1=1;
							}
						 }
					}
				}

				for(i=60;i<=98;i++)
				{
				 for(j=111;j<=120;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");
							 setcolor(8);
                                setfillstyle(1,8);
                                rectangle(103,102,535,366);
                                floodfill(104,104,8);
							      setcolor(0);
                                setfillstyle(1,0);
                                rectangle(102,101,535,366);
                                floodfill(104,104,0);

							size4();
							flag1=1;
							}
						 }
					}
				}

				for(i=60;i<=98;i++)
				{
				 for(j=121;j<=130;j++)
					{
					 if(i==x&&j==y)
						{
						 if(b==1)
						   {
						     //  setcolor(15);
							 //outtextxy(200,200,"hello");

							size5();
							flag1=1;
							}
						 }
					}
				}

                if(flag1==1)
                break;
                }
		      }
		  }
	  }
	}
if(flag==2||flag1==2)
	 goto jump;
}
 getch();
closegraph();
}
