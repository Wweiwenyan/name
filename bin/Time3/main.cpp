#include <iostream>
#include <stdio.h>
using namespace std;

class Time
{
public:
    Time():hour(0),minute(0),sec(0){};
    Time(int h,int m,int s):hour(h),minute(m),sec(s){};
    void set_time();
    void show_time();
    void add_a_sec();///����1����
    void add_a_minute();///����1����
    void add_an_hour();///����1Сʱ
    void add_seconds(int);///����n����
    void add_minutes(int);///����n����
    void add_hours(int);///����nСʱ
private:
    bool is_time(int,int,int);
    int hour;
    int minute;
    int sec;
};

void Time::set_time( )
{
    char c1,c2;
    cout<<"������ʱ��(��ʽhh:mm:ss)";
    while(1)
        {
            cin>>hour>>c1>>minute>>c2>>sec;
            if(c1!=':'||c2!=':')
                cout<<"��ʽ����ȷ������������"<<endl;
            else if (!is_time(hour,minute,sec))
                cout<<"ʱ��Ƿ�������������"<<endl;
            else
                break;
            }
            }


bool Time::is_time(int h,int m,int s)
{
        if
            (h<0 ||h>24 || m<0 ||m>60 || s<0 ||s>60)
            return false;
        return true;
}
void Time::add_hours(int n)
{    hour+=n;
     if (hour>23)
        hour%=24;
 }

 void Time::add_minutes(int n)
 {
     minute+=n;
     if (minute>59)
        {
            add_hours(minute/60);
     minute%=60;
     }
     }

void Time::add_seconds(int n)
{
    sec+=n;
    if (sec>59)
        {
             add_minutes(sec/60);
    sec%=60;
    }
    }



void Time::show_time()
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

/*void Time ::set_time()
{
    cin>>hour>>minute>>sec;
}*/

void Time::add_an_hour()
{
    ++hour;
    if(hour>23)
        hour=0;
}

void Time ::add_a_minute()
{
    ++minute;
    if(minute>59)
    {
        minute=0;
        add_an_hour();
    }
}

void Time::add_a_sec()
{
    ++sec;
    if(sec>59)
    {
        sec=0;
        add_a_minute();
    }
}

int main()
{
    /*Time t1(8,20,50);
    t1.add_a_sec();
    t1.show_time();
    t1.set_time();
    t1.show_time();
    Time t2(8,20,50);
    t2.add_a_sec();
    t2.show_time();
    return 0;*/
    /*int i;
    Time t1(8,20,50);
    for(i=0;i<20;i++)
    {
        t1.add_a_sec();
        t1.show_time();
    }
    Time t2(10,56,50);
    for(i=0;i<10;i++)
    {
        t2.add_a_minute();
        t2.show_time();
    }
    Time t3(21,20,50);
    for(i=0;i<10;i++)
    {
        t3.add_an_hour();
        t3.show_time();
    }
    return 0;*/
     /*int debug=1;
     Time t1(8,20,50);
     while(debug)
        {        t1.add_a_sec();    }
     debug=1;    while(debug)
     {        t1.add_a_minute();    }
     debug=1;    while(debug)
     {        t1.add_an_hour();    }
     return 0;*/
     /*Time t1(21,32,45);
     t1.add_seconds(40);
     t1.show_time();
     t1.add_minutes(127);
     t1.show_time();
     t1.add_hours(8);
     t1.show_time();
     return 0;*/
    Time t1;
    t1.set_time();
    t1.show_time( );
    return 0;
}

