#include<iostream>
#include<conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

#define KEY_W 119 
#define KEY_A 97  
#define KEY_S 115 
#define KEY_D 100

struct player{
        int num;
        int x;
        int y;
};

int turf[5][10] = {0};

void printTurf(int turf[5][10])
{
    for (int i = 0; i < 5; i++)
    {
        for ( int j = 0; j < 10; j++)
            cout << turf[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void up(int turf[5][10], player* p1, player *p2)
{

    turf[p1->x][p1->y] = 0;

    p1->x=p1->x-1;

    turf[p1->x][p1->y] = p1->num;
}

void down(int turf[5][10], player* p1, player *p2)
{
    turf[p1->x][p1->y] = 0;

    p1->x=p1->x+1;

    turf[p1->x][p1->y] = p1->num;
}

void left(int turf[5][10], player* p1, player *p2)
{
    turf[p1->x][p1->y] = 0;

    p1->y=p1->y-1;

    turf[p1->x][p1->y] = p1->num;
}

void right(int turf[5][10], player* p1, player *p2)
{
    turf[p1->x][p1->y] = 0;

    p1->y=p1->y+1;

    turf[p1->x][p1->y] = p1->num;
}

void up2(int turf[5][10], player* p1, player *p2)
{
    turf[p2->x][p2->y] = 0;

    p2->x=p2->x-1;

    turf[p2->x][p2->y] = p2->num;
}

void down2(int turf[5][10], player* p1, player *p2)
{
    turf[p2->x][p2->y] = 0;

    p2->x=p2->x+1;

    turf[p2->x][p2->y] = p2->num;
}

void left2(int turf[5][10], player* p1, player *p2)
{
    turf[p2->x][p2->y] = 0;

    p2->y=p2->y-1;

    turf[p2->x][p2->y] = p2->num;
}

void right2(int turf[5][10], player* p1, player *p2)
{
    turf[p2->x][p2->y] = 0;

    p2->y=p2->y+1;

    turf[p2->x][p2->y] = p2->num;
}

void play(int turf[5][10], player p1, player p2)
{
    int c = 0;
    while(1)
    {
        c = 0;
        switch(c=getch()){
        case KEY_UP:
            up(turf, &p1 , &p2);
            break;
        case KEY_DOWN:
            down(turf, &p1, &p2);
            break;
        case KEY_LEFT:
            left(turf, &p1, &p2);
            break;
        case KEY_RIGHT:
            right(turf, &p1, &p2);
            break;
        case KEY_W:
            up2(turf, &p1, &p2);
            break;
        case KEY_A:
            left2(turf, &p1, &p2);
            break;
        case KEY_S:
            down2(turf, &p1, &p2);
            break;
        case KEY_D:
            right2(turf, &p1, &p2);
            break;
        }
        system("cls");
        printTurf(turf);
    }

}


int main()
{
    player p1;
    p1.num = 7;
    p1.x = 2;
    p1.y = 0;

    player p2;
    p2.num = 1;
    p2.x = 2;
    p2.y = 9;

    //initial positions
    turf[p1.x][p1.y] = p1.num;
    turf[p2.x][p2.y] = p2.num;

    printTurf(turf);    

    play(turf, p1, p2);
    
}