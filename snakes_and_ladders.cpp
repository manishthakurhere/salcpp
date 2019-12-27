#include <iostream>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
#include<fstream>
int main()
{int i,j,gd=DETECT,gm,w=0,x1=110,y1=500,x2=140,y2=500,dr,row1=1,row2=1,pr1,pr2,qr2,qr1;   // row =1 for odd row(from bottom and row =0 for even row  // row1 is for player 1 and row2 is for player 2
char aya[30],res[10],snake[20],ladder[20];
initwindow(1000,600,"SNAKES AND LADDERS");
srand(time(NULL));

for(;;)
{    setfillstyle(1,5);
bar(0,0,45,600);
bar(45,0,1000,45);
bar(955,45,1000,600);
bar(45,550,955,600);
setfillstyle(1,15);
bar(45,50,50,550);
bar(45,550,950,555);
bar(45,45,950,50);
bar(950,45,955,555);
setcolor(14);
// snake 27 to 1
line(400,120,100,470);
line(100,470,120,470);
line(120,470,420,120);
circle(410,120,10);
bar(409,119,411,121);
//snake 21 to 9
line(530,230,600,370);
line(600,370,620,370);
line(620,370,550,230);
circle(540,230,10);
bar(539,229,541,231);
// snake 17 to 4
line(690,330,600,470);
line(600,470,620,470);
line(620,470,710,330);
circle(700,330,10);
bar(699,329,701,331);
// snake 19 to 7
line(910,230,820,370);
line(820,370,840,370);
line(840,370,930,230);
circle(920,230,10);
bar(919,229,921,231);
setcolor(11);
//ladder 5 to 8
line(750,470,730,420);
line(780,470,760,420);
line(750,470,780,470);
line(730,420,760,420);


// ladder 11 to 26
line(300,380,330,380);
line(300,380,230,120);
line(230,120,260,120);
line(260,120,330,380);
//ladder 3 to 22
line(450,480,380,220);
line(450,480,480,480);
line(480,480,410,220);
line(380,220,410,220);
//ladder 20 to 29
line(740,180,770,180);
line(740,180,680,120);
line(770,180,710,120);
line(680,120,710,120);


setcolor(15);
line(200,50,200,550);
line(350,50,350,550);
line(500,50,500,550);
line(650,50,650,550);
line(800,50,800,550);
line(50,150,950,150);
line(50,250,950,250);
line(50,350,950,350);
line(50,450,950,450);

setfillstyle(1,0);
floodfill(60,60,0);
floodfill(660,60,0);
floodfill(210,160,0);
floodfill(60,260,0);
floodfill(210,360,0);
floodfill(60,460,0);
floodfill(360,260,0);
floodfill(360,460,0);
floodfill(660,460,0);
floodfill(510,360,0);
floodfill(660,260,0);
floodfill(510,160,0);
floodfill(360,60,0);
floodfill(810,160,0);
floodfill(810,360,0);
floodfill(210,55,0);
floodfill(510,55,0);
floodfill(55,155,0);
floodfill(55,355,0);
floodfill(210,460,0);
floodfill(360,360,0);
floodfill(510,460,0);
floodfill(660,360,0);
floodfill(510,260,0);
floodfill(360,160,0);
floodfill(660,160,0);
floodfill(210,260,0);
floodfill(810,260,0);
floodfill(810,460,0);
setfillstyle(1,14);
floodfill(860,60,0);
setfillstyle(1,15);
setcolor(7);

outtextxy(100,75,"25");
outtextxy(275,75,"26");
outtextxy(425,75,"27");
outtextxy(575,75,"28");
outtextxy(725,75,"29");
outtextxy(875,75,"30");

outtextxy(100,175,"24");
outtextxy(275,175,"23");
outtextxy(425,175,"22");
outtextxy(575,175,"21");
outtextxy(725,175,"20");
outtextxy(875,175,"19");

outtextxy(100,275,"13");
outtextxy(275,275,"14");
outtextxy(425,275,"15");
outtextxy(575,275,"16");
outtextxy(725,275,"17");
outtextxy(875,275,"18");

outtextxy(100,375,"12");
outtextxy(275,375,"11");
outtextxy(425,375,"10");
outtextxy(575,375,"9");
outtextxy(725,375,"8");
outtextxy(875,375,"7");

outtextxy(100,475,"1");
outtextxy(275,475,"2");
outtextxy(425,475,"3");
outtextxy(575,475,"4");
outtextxy(725,475,"5");
outtextxy(875,475,"6");
setfillstyle(1,3);                          // colour 3 for player 1
bar(x1,y1,x1+10,y1+10);
outtextxy(30,20,"PLAYER 1: BLUE");
outtextxy(780,20,"PLAYER 2: PINK");

setfillstyle(1,12);                         //colour 12 for player 2
bar(x2,y2,x2+10,y2+10);
if(w==0)
{  //player 1 plays
    outtextxy(400,575,"Player '1' Press space bar to throw dice ");
    if(GetAsyncKeyState(VK_SPACE))
    {setfillstyle(1,0);                                                     //making previous marker disappear
    bar(x1,y1,x1+10,y1+10);
        dr=rand()%6+1;
        sprintf(res,"%d",dr);
            outtextxy(700,575,res);
            delay(800);
        {if(row1%2==1)
        {pr1=x1;
        qr1=y1;
            x1=x1+(150*dr);
            if(x1>885&&row1<5 )
            {row1++;
            if(row1<=5)
                {y1=y1-100;
                x1=875-(x1-875-150);}
            }
           if(row1==5&&x1>920)
                {
                    x1=pr1;
                    y1=qr1;
                }



        }

       else if(row1%2==0)
            {x1=x1-(150*dr);
                if(x1<42&&row1<5)
                    {row1++;
                    if(row1<=5)
                        {y1=y1-100;
                        x1=110+(110-x1)-110;}
                    }
            }
        }
setfillstyle(1,3);
                                  //if(player is at bottom of ladder or at mouth of snake
                //bitten by snake
if(x1>360&&x1<490&&y1>60&&y1<140)
{
    x1=110;
    y1=500;
    row1-=4;
     outtextxy(40,565,"PLAYER 1 BITTEN BY SNAKE !");
      delay(1200);
}
if(x1>510&&x1<640&&y1<240&&y1>160)
{
    x1=570;
    y1=400;
    row1-=2;
     outtextxy(40,565,"PLAYER 1 BITTEN BY SNAKE !");
      delay(1200);
}
if(x1>660&&x1<790&&y1<340&&y1>260)
{
    x1=560;
    y1=500;
    row1-=2;
     outtextxy(40,565,"PLAYER 1 BITTEN BY SNAKE !");
      delay(1200);
}
if(x1>810&&x1<940&&y1>160&&y1<240)
{
    x1=860;
    y1=400;
    row1-=2;
     outtextxy(40,565,"PLAYER 1 BITTEN BY SNAKE !");
      delay(1200);
}
           // ladder

if(x1>210&&x1<340&&y1>360&&y1<440)
{
    x1=260;
    y1=100;
    row1+=3;
     outtextxy(40,565,"PLAYER 1 CLIMBED A LADDER !");
      delay(1200);
}
if(x1>360&&x1<490&&y1<540&&y1>460)
{
    x1=410;
    y1=200;
    row1+=3;
     outtextxy(40,565,"PLAYER 1 CLIMBED A LADDER !");
      delay(1200);
}
if(x1>660&&x1<790&&y1>460&&y1<540)
{
    x1=710;
    y1=400;
    row1+=1;
     outtextxy(40,565,"PLAYER 1 CLIMBED A LADDER !");
      delay(1200);
}
if(x1>660&&x1<790&&y1>160&&y1<240)
{
    x1=710;
    y1=100;
    row1+=1;
     outtextxy(40,565,"PLAYER 1 CLIMBED A LADDER !");
      delay(1200);
}
    bar(x1,y1,x1+10,y1+10);
w=1;    }                                // w becomes 1 for player 2's chance

}
else                                          // player 2's turn
{//player 2 plays
        outtextxy(400,575,"Player '2' \nPress space bar to throw dice ");
    if(GetAsyncKeyState(VK_SPACE))
        {setfillstyle(1,0);                                                     //making previous marker disappear
    bar(x2,y2,x2+10,y2+10);
            dr=rand()%6+1;
            sprintf(res,"%d",dr);
            outtextxy(700,575,res);
                delay(800);
                if(row2%2==1)
                    { pr2=x2;
                    qr2=y2;
                         x2=x2+(150*dr);
                        if(x2>905&&row2<5)
                        {row2++;
                            if(row2<=5)
                            {y2=y2-100;
                            x2=895-(x2-895-150);}
                        }
                        if(row2==5&&x2>920)
                            {
                                x2=pr2;
                                y2=qr2;
                            }
                    }
                else if(row2%2==0)
                {x2=x2-(150*dr);
                    if(x2<42&&row2<5)
                    {row2++;
                        if(row2<=5)
                        {y2=y2-100;
                        x2=130+(130-x2)-130;}
                    }
                }
                    setfillstyle(1,12);
                                    //bitten by snake
if(x2>360&&x2<490&&y2>60&&y2<140)
{
    x2=120;
    y2=500;
      row2-=4;
      outtextxy(40,565,"PLAYER 2 BITTEN BY SNAKE !");
      delay(1200);
}
if(x2>510&&x2<640&&y2<240&&y2>160)
{
    x2=580;
    y2=400;
      row2-=2;
       outtextxy(40,565,"PLAYER 2 BITTEN BY SNAKE !");
      delay(1200);
}
if(x2>660&&x2<790&&y2<340&&y2>260)
{
    x2=570;
    y2=500;
      row2-=2;
       outtextxy(40,565,"PLAYER 2 BITTEN BY SNAKE !");
      delay(1200);
}
if(x2>810&&x2<940&&y2>160&&y2<240)
{
    x2=870;
    y2=400;
      row2-=2;
       outtextxy(40,565,"PLAYER 2 BITTEN BY SNAKE !");
      delay(1200);
}
           // ladder

if(x2>210&&x2<340&&y2>360&&y2<440)
{
    x2=270;
    y2=100;
    row2+=3;
     outtextxy(40,565,"PLAYER 2 CLIMBED A LADDER !");
      delay(1200);
}
if(x2>360&&x2<490&&y2<540&&y2>460)
{
    x2=420;
    y2=200;
    row2+=3;
     outtextxy(40,565,"PLAYER 2 CLIMBED A LADDER !");
      delay(1200);
}
if(x2>660&&x2<790&&y2>460&&y2<540)
{
    x2=720;
    y2=400;
    row2+=1;
     outtextxy(40,565,"PLAYER 2 CLIMBED A LADDER !");
      delay(1200);
}
if(x2>660&&x2<790&&y2>160&&y2<240)
{
    x2=720;
    y2=100;
    row2+=1;
     outtextxy(40,565,"PLAYER 2 CLIMBED A LADDER !");
      delay(1200);
}
    bar(x2,y2,x2+10,y2+10);
                    w=0;                                             //player 1's chance again
}
}
delay(100);
if(x1>820&&y1<160&&x1<955&&y1>45)
{outtextxy(400,20,"PLAYER 1 WINS !");
delay(3000);
exit(0);
}
if(x2>820&&y2<160&&x2<955&&y2>45)
{outtextxy(400,20,"PLAYER 2 WINS !");
delay(3000);
exit(0);}

}
closegraph();
}
