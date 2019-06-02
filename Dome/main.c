#include <stdio.h>

int main()
{
    /**
    printf("hello world\n");
    printf("您好\n");
    printf("Bonjour\n");
    **/
    
    /**
    printf("12+34=%d\n", 12+34);
    printf("%d\n", 12+34);
    printf("23+43=%d\n", 23+43);
    **/
    
    /**
    int price = 0;
    printf("请输入金额(元):");
    scanf("%d", &price);
    int change = 100 - price;
    printf("找您%d元\n", change);
    **/
    
    /**
    const int AMOUNT = 100;
    int price = 0;
    printf("请输入金额(元):");
    scanf("%d", &price);
    int change = AMOUNT - price;
    printf("找您%d元 \n", change);
    return 0;
    **/
    
    /**
    int amount = 100;
    int price = 0;
    printf("请输入金额:");
    scanf("%d", &price);
    printf("请输入票面:");
    scanf("%d", &amount);
    int change = amount - price;
    printf("找您%d \n", change);
    return 0;
    **/
    
    /**
    int a;
    int b;
    printf("请输入两个整数\n");
    printf("第一个整数:");
    scanf("%d", &a);
    printf("第二个整数:");
    scanf("%d", &b);
    printf("相加结果\n");
    printf("%d + %d= %d\n", a, b, a+b);
    return 0;
    **/
    
    /**
    double foot;
    double inch;
    printf("请输入身高的英尺英寸\n");
    printf("英尺:");
    scanf("%lf", &foot);
    printf("英寸:");
    scanf("%lf", &inch);
    printf("换算后的身高为%f米:\n", ((foot + inch/12.0) * 0.3048));
    return 0;
    **/
    
    /**
    int hour1, minute1;
    int hour2, minute2;
    printf("输入第一个时间, 比如1点20分, 输入1 20:");
    scanf("%d %d", &hour1, &minute1);
    printf("输入第二个时间:");
    scanf("%d %d", &hour2, &minute2);
    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;
    int t = t2 - t1;
    printf("时间差是%d小时%d分\n", t / 60, t % 60);
    return 0;
    **/
    
    /**
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("%d和%d的平均数=%f\n", a, b, c);
    return 0;
    **/
    
    /**
    int a = 5;
    int b = 6;
    printf("a=%d, b=%d\n", a, b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("a=%d, b=%d\n", a, b);
    return 0;
    **/
    
    /**
    int a;
    a = 14;
    printf("a++=%d\n", a++);
    printf("a=%d\n", a);
    printf("++a=%d\n", ++a);
    printf("a=%d\n", a);
    return 0;
    **/
    
    /**
    double a = 0;
    double b = 1;
    double c = 2;
    double d = 3;
    double e = 4;
    double f = 5;
    a=b+=c++-d+--e/-f;
    printf("%lf", a);
    return 0;
    **/
    
    /**
    double a, b, c, d, e, f;
    a = 2;
    b = 2;
    c = 2;
    d = 2;
    e = 2;
    f = 2;
    a = b+=c++-d+--e/-f;
    printf("%lf, %lf, %lf, %lf, %lf, %lf\n", a, b, c, d, e, f);
    return 0;
    // a = b+=c++-d+--e/-f
    // f = f
    // e = e-1
    // d = d
    // c = c + 1
    // b = b + c - d + (e-1)/-f
    // a = b
    **/
    
    /**
    int a;
    printf("%d\n", a=2+2*(2*2-2)%2/3);
    return 0;
    **/
    
    /**
    int a;
    printf("%d\n", a=1+2+(3+4)*((5*6%7/8)-9)*10);
    return 0;
    **/
    
    /**
    int a =14;
    int t1 = a++;
    int t2 = ++a;
    printf("%d %d", t1, t2);
    return 0;
    **/
    
    /**
    int t;
    printf("input XXX:");
    scanf("%d", &t);
    int a=t%10;
    int b=t/10%10;
    int c=t/100;
    printf("%d\n", c+b*10+a*100);
    return 0;
    **/
    
    /**
    int hour1, minute1;
    int hour2, minute2;
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);
    int ih = hour2 - hour1;
    int im =minute2 - minute1;
    if ( im <0)
    { im = 60 + im;
        ih --;
    }
    printf (" %d %d \n", ih, im);
     return 0;
     **/
    
    /**
    printf("%d\n", 5==3);
    printf("%d\n", 5>3);
    printf("%d\n", 5<=3);
     return 0;
     **/
    
    /**
    printf("%d\n", 7>=3+4);
    return 0;
    **/
    
    /*
    int price = 0;
    int bill = 0;
    printf("bill: ");
    scanf("%d", &price);
    printf("input: ");
    scanf("%d", &bill);
    printf("re: %d\n", bill-price);
           return 0;
    */
    
    /*
    int price = 0;
    int bill = 0;
    printf("bill: ");
    scanf("%d", &price);
    printf("input: ");
    scanf("%d", &bill);
    if (bill >= price)
    { printf ("return: %d\n", bill - price);
    }
    return 0;
    */
    
    /*
    const int MINOR = 35;
    int age = 0;
    printf("input your age: ");
    scanf("%d", &age);
    printf("your age is %d \n", age);
    if ( age < MINOR)
    {
        printf("good age,");
    }
    printf("take care of your body \n");
    return 0;
    */
    
    /*
    int price = 0;
    int bill = 0;
    printf("bill: ");
    scanf("%d", &price);
    printf("input: ");
    scanf("%d", &bill);
    if (bill >= price)
    {
        printf("return your %d\n", bill - price);
    }
    else
    {
    printf("not enough\n");
    }
    return 0;
    */
    
    /*
    int a,b;
    printf("input 2 number: ");
    scanf("%d %d", &a, &b);
          int max = 0;
          if (a > b)
          {
              max = a;
          }
    else
    {
        max = b;
    }
    printf("max %d\n", max);
    return 0;
     
     */
    
    /*
    int a,b;
    printf("input 2 numbers: ");
    scanf("%d %d", &a, &b);
    int max = b;
    if (a > b)
    {
        max = a;
    }
    printf("max: %d\n", max);
    return 0;
    */
    
    /*
    const double RATE = 8.25;
    const int STANDARD =40;
    double pay = 0.0;
    int hours;
    printf("work hours: ");
    scanf("%d",&hours);
    printf("\n");
    if (hours > STANDARD)
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    else
        pay = hours * RATE;
    printf("pay: %f\n", pay);
    return 0;
    */
    
    /**
    const int PASS = 60;
    int score;
    printf("input score: ");
    scanf("%d", &score);
    printf("your score %d\n", score);
    if (score < PASS)
        printf("FAILL");
    else
        printf("PASS\n");
    printf("End\n");
    return 0;
    **/
    
    /**
    int a,b,c;
    printf("input 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
        max = c;
        }
    }
    printf("max %d\n", max);
    return 0;
    **/
    
    /**
    int a, b, c;
    printf("input 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    if (a > b)
        if (a > c)
            max = a;
    else
        max = c;
    else
        if (b > c)
            max = b;
    else
        max = c;
    printf("the max is %d\n", max);
    return 0;
    **/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
