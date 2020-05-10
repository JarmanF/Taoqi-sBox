#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 
#include <string.h>
#define PAI 3.14159265358979323846

//--主控 类 -- 
void menu(); //主菜单 
//--奥数类 -- 
void Games_menu(); //菜单界面 
void Games_Choose();
void Games_gess(); //猜数 
void Games_Hanxin(); //韩信点兵 
void Games_AP(); //等差数列
void Games_GS(); //等比数列 
void Games_gcd(); //最大公约数 
void Games_HenRabbit(); //鸡兔同笼 
void Games_boat(); //流水问题
void Games_chase(); //追及问题 
void Games_lastnum(); //尾数的规律 
void Games_Somenum(); //找规律填数 
void Games_Peach(); //猴子吃桃
void Games_Pro_thought(); //程序思想
void Games_Yanghui(); //杨辉三角
void Games_Plant_tree(); //植树问题 --未完成 
//--工具类 -- 
void Tools_menu(); //菜单界面 
void Tools_Choose();
void Tools_S(); //面积计算 
void Tools_V(); //体积计算
void Tools_Random(); //生成随机数 
void Tools_AP(); //等差数列求和  
void Tools_GS(); //等比数列求和 
void Tools_Pass(); //文字加/解密 
void Tools_gcd(); //求最大公约数和最小公倍数
void Tools_computer(); //计算器
int main()
{
	int input;
	menu(); //显示菜单 
	scanf("%d",&input); //用户选择功能 
	while(input)
	{
		switch(input)
		{
			case 1:
				Games_Choose();
				break;
			case 2:
				Tools_Choose();
				break;
			default:
				break; 
		}
		menu(); /*执行完功能再次显示菜单界面*/
		scanf("%d",&input);
	}
}
void menu() //主菜单 
{

	printf("\n\n\n\n\n");
	printf("\t\t|-------------------主菜单-----------------|\n");
	printf("\t\t|\t 1.益智题库                        |\n");
	printf("\t\t|\t 2. 工具                           |\n");
	printf("\t\t|\t 0. 退出                           |\n");
	printf("\t\t|------------------------------------------|\n\n");
	printf("\t\t\t请选择(0~2):");
}

void Games_menu() //益智题库菜单 
{

	printf("\n\n\n\n\n");
	printf("\t\t|------------------益智题库----------------|\n");
	printf("\t\t|\t 1.猜数                            |\n");
	printf("\t\t|\t 2.韩信点兵                        |\n");
	printf("\t\t|\t 3.等差数列                        |\n");
	printf("\t\t|\t 4.等比数列                        |\n");
	printf("\t\t|\t 5.最大公约数                      |\n");
	printf("\t\t|\t 6.鸡兔同笼问题                    |\n");
	printf("\t\t|\t 7.流水问题                        |\n");
	printf("\t\t|\t 8.追及与相遇                      |\n");
	printf("\t\t|\t 9.尾数的规律                      |\n");
	printf("\t\t|\t 10.找规律填数                     |\n");
	printf("\t\t|\t 11.猴子吃桃                       |\n");
	printf("\t\t|\t 12.程序思想                       |\n");
	printf("\t\t|\t 13.杨辉三角                       |\n");
	printf("\t\t|\t 14.植树问题                       |\n");
	printf("\t\t|\t 0.返回                            |\n");
	printf("\t\t|------------------------------------------|\n\n");
	printf("\t\t\t请选择(0~14):");
 } 
void Games_Choose()
{
	int input;
 	Games_menu();
	scanf("%d",&input); //用户选择 
	while(input)
	{
		switch(input)
		{
			case 1:
				Games_gess();
				break;
			case 2:
				Games_Hanxin();
				break;
			case 3:
				Games_AP();
				break;
			case 4:
				Games_GS();
				break;
			case 5:
				Games_gcd();
				break; 
			case 6:
				Games_HenRabbit();
				break;
			case 7:
				Games_boat();
				break;
			case 8:
				Games_chase();
				break; 
			case 9:
				Games_lastnum();
				break;
			case 10:
				Games_Somenum();
				break;
			case 11:
				Games_Peach();
				break;
			case 12:
				Games_Pro_thought();
				break;
			case 13:
				Games_Yanghui();
				break; 
			case 14:
				Games_Plant_tree();
				break; 
			default:break;
		}
		Games_menu();
		scanf("%d",&input); //重新显示 
	 } 
}
//题库： 
void Games_gess()
{
	puts("====================猜数游戏====================");
	srand(time(0));
	int i,number,times;
	times=1;
	number = rand() % 198 + 2; //生成随机数 
	puts("\n请猜一个二百以内的数:");
	scanf("%d",&i);
	while(i!=number)
	{
		if(i>number)
		{
			puts(">>大了");
			times++; 
			scanf("%d",&i);
		}
		else if(i<number)
		{
			puts(">>小了");
			times++;
			scanf("%d",&i);
		}
		else
		{	break; }
	 } 
	 printf("这个数是%d,你猜了%d次",number,times);
	 printf("\n");

}
void Games_Hanxin()
{
	puts("====================韩信点兵====================");
	srand(time(0));
	int inum,number,times;
	times=1;
	number = rand() % 199 + 2;
	puts("韩信的军营人数在200以下");
	printf("两个两个地数，还剩%d个\n",number%2);
	printf("三个三个地数，还剩%d个\n",number%3);
	printf("五个五个地数，还剩%d个\n",number%5); //给出条件 
	printf("军营里可能有多少兵(8次机会):");
	scanf("%d",&inum);
	for(;times<=8;times++)
	{
		if(inum>number)
		{
			puts(">>多了"); 
			scanf("%d",&inum);
		}
		else if(inum<number)
		{
			puts(">>少了");
			scanf("%d",&inum);
		}
		else
		{	puts("猜对了！");break; }
	 } 
	 printf("军营里有%d个兵,你猜了%d次\n",number,times); 
	 printf("\n");

}
void Games_AP()
{
	puts("====================等差数列====================");
	int x,y,z,inum,last,geti;
	srand(time(0));
	x= rand() % 5 + 1; //首项 
	y= rand() % 7 + 1; //公差 
	z= rand() % 119 + 1; //项数 
	last=x+y*(z-1); //末项 
	printf("\n%d + %d + %d +···+%d的和是:",x,x+y,x+2*y,last); //给出条件 
	for(;z>=1;z--) //求和 
	{
		inum+=x;
		x+=y;
	}
	scanf("%d",&geti);
	if(geti==inum)
	{	puts(">>你对了");	}
	else
	{	puts(">>你错了");	}
	printf("这列等差数列的和为:%d\n",inum);
	printf("\n");

}
void Games_GS()
{
	puts("====================等比数列====================");
	srand(time(0));
	int x,y,z,last,inum,geti;
	x= rand() % 4 + 1; //首项 
	y= rand() % 3 + 2; //公比 
	z= rand() % 10 + 4; //项数 
	last = x*pow(y , (z-1)); //末项 
	printf("\n%d + %d +%d +···+%d的和是:",x,x*y,x*y*y,last); //给出条件 
	for(;z>=1;z--)
	{
		inum+=x;
		x*=y;
	}
	scanf("%d",&geti);
	if(geti==inum)
	{	puts(">>你对了");	}
	else
	{	puts(">>你错了");	}
	printf("这列等比数列的和为:%d\n",inum);
	printf("\n");

}
void Games_gcd()
{
	puts("====================最大公约数====================");
	int a,b,t,geti;
	srand(time(0));
	a = rand() %499 + 3;
	b = rand() %499 +2;
	printf("请问%d与%d的最大公约数是:",a,b); //给出条件 
	scanf("%d",&geti);
	while(b!=0) //辗转相除法 
	{
		t=a%b;
		a=b;
		b=t;
	 }
	if(geti==a)
	{
		puts(">>对了");
	}
	else
	{
		puts(">>错了");
	}
	printf("它们的最大公约数为:%d\n",a);
	printf("\n");

}
void Games_HenRabbit()
{
	int input;
	puts("====================鸡兔同笼====================");
	printf("\n1.入门\n2.普通\n3.困难\n0.退出\n请选择难度:");
	scanf("%d",&input);
	srand(time(0));
	if(input==1)
	{
		int hens,rabbits; //鸡、兔子 
		int inputh,inputr; //用户输入的答案：鸡、兔子 
		//生成随机数 
		hens= rand() % 65 + 5;
		rabbits= rand() % 65 + 4;
		printf("一个笼子里一共有%d只鸡和兔子，\n一共有%d条腿\n",hens+rabbits,hens*2+rabbits*4);
		printf("那么分别有多少只兔子和鸡:"); 
		scanf("%d %d",&inputr,&inputh);
		if(inputr==rabbits&&inputh==hens)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n有%d只兔子，有%d只鸡",rabbits,hens);
	}
	else if(input==2)
	{
		int zhizhu,qingting,chan; //蜘蛛、蜻蜓、蝉 
		int inzhi,inqing,inchan; //用户输入的蜘蛛、蜻蜓、蝉  
		//生成随机数 
		zhizhu = rand() % 28 + 2;
		qingting = rand() % 26 + 4;
		chan = rand() % 17 + 3;
		//给出条件： 
		printf("蜘蛛有8条腿,\n蜻蜓有6条腿和2对翅膀,\n蝉有6条腿和1对翅膀,\n");
		printf("\n现共有昆虫%d只,它们共有%d条腿和%d对翅膀。\n",zhizhu+qingting+chan,zhizhu*8+(qingting+chan)*6,qingting*2+chan);
		printf("那么分别有蜘蛛、蜻蜓、蝉多少只:");
		scanf("%d %d %d",&inzhi,&inqing,&inchan);
		if(inzhi==zhizhu && inqing==qingting && inchan==chan)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n有%d只蜘蛛，%d只蜻蜓，%d只蝉\n",zhizhu,qingting,chan);
	}
	else if(input==3)
	{
		int zhizhu,qingting,chan,deformitier; //蜘蛛、蜻蜓、蝉、畸形种 
		//生成随机数 
		zhizhu = rand() % 38 + 2;
		qingting = rand() % 36 + 4;
		chan = rand() % 27 + 3;
		deformitier = rand() % 15 + 5;
		//说明条件 
		printf("\n有四种昆虫:\n");
		printf("蜘蛛有8条腿,\n蜻蜓有6条腿和2对翅膀,\n蝉有6条腿和1对翅膀且身上有2道标记,\n畸形种有6条腿和1对翅膀且身上有3道标记\n");
		//给出具体条件 
		int all,leg,chi,biao;
		all = zhizhu + qingting + chan + deformitier; //所有昆虫总和 
		leg = zhizhu*8 + (qingting+chan+deformitier)*6;//所有昆虫的总腿数 
		chi = qingting*2 + chan + deformitier; //所有昆虫的翅膀 
		biao = chan*2+deformitier*3; //所有昆虫的标记 
		printf("\n现在有%d只昆虫，它们共有%d对翅膀，%d条腿和%d道标记",all,chi,leg,biao);
		//提出问题
		printf(",\n那么分别有蜘蛛、蜻蜓、蝉、畸形种多少只:");
		//用户输入 
		int inzhi,inqing,inchan,indefor;	//用户输入的蜘蛛、蜻蜓、蝉、畸形种的只数 
		scanf("%d %d %d %d",&inzhi,&inqing,&inchan,&indefor);
		//做出判断 
		if(inzhi==zhizhu && inqing==qingting && inchan==chan && indefor==deformitier)
		{
			puts(">>恭喜你做对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n有%d只蜘蛛，%d只蜻蜓,%d只蝉和%d只畸形种\n",zhizhu,qingting,chan,deformitier);
	}
	printf("\n");

}
void Games_boat()
{
	puts("====================流水问题====================");
	int speed,water_s,hour,roat,inhour;
	srand(time(0));
	speed = rand() % 75 + 15; //船速 
	water_s = rand() % 5 + 1; //水速 
	hour = rand() % 11 + 1; //行驶时间 
	roat = (speed+water_s)*hour; //顺水路程
	/*提问*/
	printf("\n一艘船的静水速度是 %d km/h,\n要在 %d km/h的水中顺水航行%d千米，需要多少小时:",speed,water_s,roat);
	scanf("%d",&inhour);
	if(inhour==hour)
	{
		puts(">>你对了");
	}
	else
	{
		puts(">>你错了");
	}
	printf("需要%d小时\n",hour);
	
	printf("\n");

}
void Games_chase()
{
	srand(time(0));
	puts("====================追及与相遇====================");
	int input;
	printf("\n1.入门\n2.普通\n3.困难\n0.退出\n请选择难度:");
	scanf("%d",&input);
	if(input==1)
	{
		int chase,run,chase_time;
		chase = rand() % 60 + 61; //速度较快者 
		run = rand() % 50 + 10;  //速度较慢者 
		chase_time = rand() % 12 + 2; //追击时间 
		int roat;
		roat = chase_time*(chase-run); //路程 
		printf("\nA、B两地相距%d千米，甲车在A地，乙车在B地\n若甲时速%d千米,乙时速%d千米\n若他们同向而行,则甲追乙需多少小时(保留整数):",roat,chase,run);
		int inctime; //用户输入：追及时间 
		scanf("%d",&inctime);
		if(inctime==chase_time)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n需要%d小时\n",chase_time);
		
		//再次提问 
		int meet_time;
		meet_time = roat/(chase+run); //相遇时间 
		printf("\n那么，若他们相向而行，则需多少小时(保留整数):");
		int inmtime;
		scanf("%d",&inmtime);
		if(inmtime==meet_time)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n需要%d小时\n",meet_time);
	}
	else if(input==2)
	{
		int boy,girl,dog,time;
		girl = rand() % 12 + 4; //小红速度 
		boy = girl*2-1; //小明速度 
		dog = rand() % 7 + 3; //小狗速度 
		time = rand() % 25 + 5; //时间 
		int roat;
		roat = (boy+girl)*time; //路长 
		printf("\n小明和小红在%d米的路上相向而行，\n小明出发时放了一条狗，在小明和小红之间来回跑，\n直到小明和小红相遇后才停止，\n",roat);
		printf("已知小明、小红和小狗的速度分别为:%dm/s、%dm/s、%dm/s\n那么狗一共跑了多少米:",boy,girl,dog);
		int indogroat; //用户输入：狗跑的路程 
		scanf("%d",&indogroat);
		int dogroat;
		dogroat = time*dog; //计算狗跑的路程 
		if(indogroat==dogroat)
		{
			puts(">>你对了");
		 }
		else
		{
			puts(">>你错了") ;
		}
		printf("这只狗一共跑了%d米",dogroat);
	}

	else if(input==3)
	{
		int Jia,Yi,Bing; //甲、乙、丙 
		//三人的速度 
		Jia = 30;
		Yi = 20;
		Bing = (rand()%5+1)*5; 
		
		int meet; //相遇次数 
		meet = (rand()%13 + 2);
		
		int meettime,more; //相遇时间、丙比甲多行路程 
		meettime = 12 +  24*(meet-1);
		more = Bing*meettime;
		
		//提出问题 
		printf("\n在一个1200米的环形跑道上，甲、乙各在跑道的一侧，相距600米。\n");
		printf("丙与甲在同一地点骑行，三人同时出发，\n");
		printf("若甲的速度是%d m/s,乙的速度是%d m/s,丙比甲快%d m/s ，\n",Jia,Yi,Bing);
		printf("若丙比甲多行了%d米后，三人都停下，\n此时甲与乙相遇了几次：",more);
		
		int inmeet;
		scanf("%d",&inmeet);
		if(inmeet==meet)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n他们相遇了%d次\n",meet);
	}
	printf("\n");
}
void Games_lastnum()
{
	puts("====================尾数的规律====================");
	int num,inum,lastnum,inlast;
	srand(time(0));
	num = rand() %8 + 2; //底数 
	inum = rand() %39 + 2; //指数
	//提问 
	printf("\n一个数的个位数称为它的尾数。\n");
	printf("则%d的%d次方的尾数是:",num,inum);
	scanf("%d",&inlast);
	
	num = pow(num,inum);
	lastnum = num%10; //计算位数 
	
	//判断 
	if(inlast == lastnum)
	{
		puts(">>你对了");
	}
	else
	{
		puts(">>你错了");
	}
	printf("\n它的尾数是%d\n",lastnum);
	
	printf("\n");

} 
void Games_Somenum()
{
	int input;
	puts("====================找规律填数====================");
	printf("\n1.入门\n2.普通\n3.困难\n0.退出\n请选择难度:");
	scanf("%d",&input);
	srand(time(0));
	if(input==1)
	{
		//等差数列 
		int i,count,s; //首项、项数、公差 
		i = rand() % 3 + 1;
		s = rand() % 3 + 2;
		count = rand() % 24 + 6;
		
		//提问 
		printf("观察:\n%d、%d、%d、%d···\n",i,i+s,i+2*s,i+3*s);
		printf("则第%d个数是:",count);
		while(count>1)
		{
			i+=s;
			count--;
		}
		
		int innum; //用户作答 
		scanf("%d",&innum);
		if(innum==i)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n这个数是:%d\n",i);
	}
	else if(input==2)
	{
		//等比数列 
		int i,count,s; //首项、项数、公比 
		i = rand() % 3 + 1;
		s = rand() % 3 + 2;
		count = rand() % 24 + 6;
		
		//提问 
		printf("观察:\n%d、%d、%d、%d···\n",i,i*s,i*s*s,i*s*s*s);
		printf("则第%d个数是:",count);
		while(count>1)
		{
			i*=s;
			count--;
		}
		
		//用户作答 
		int innum;
		scanf("%d",&innum);
		if(innum==i)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n这个数是:%d\n",i);
	}
	else if(input==3)
	{
		//综合规律数列 
		int i,count,s,k;
		i = rand() % 3 + 1; //首相 
		s = rand() % 3 + 2; //公差(绝对值差) 
		k = -1; //控制正负 
		count = rand() % 18 + 4; //项数 
		
		//给出条件 
		int put1=-1*pow(i,2);
		int put2=pow((i+s),2);
		int put3=-1*pow((i+s+s),2);
		printf("观察:\n%d、%d、%d···",put1,put2,put3);
		printf("\n则第%d个数是:",count);
		
		//计算所问之数 
		int add;
		while(count>=1)
		{
			add = pow(i,2)*k;
			k = -k;
			i += s;
			count--;
		}
		
		//用户作答 
		int innum;
		scanf("%d",&innum);
		if(innum==add)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n这个数是:%d\n",add);
	}
	
	
	printf("\n");

}
void Games_Peach()
{
	puts("====================猴子吃桃====================");
	int count;
	srand(time(0));
	count = rand() % 17 + 3; //个数
	
	//提问 
	printf("\n一只猴子采了若干个桃子，第一天吃掉了一半又一个，\n此后每天都吃掉昨天剩下的一半又一个，\
	到了第%d天，桃子只剩下一个了，\n求摘的桃子的个数：",count);
	
	//计算答案 
	int peach=1;
	for(;count>1;count--)
	{
		peach = (peach+1)*2;
	}
	
	//用户作答 
	int inpeach;
	scanf("%d",&inpeach);
	if(inpeach == peach)
	{
		printf("\n>>你对了\n");
	}
	else
	{
		printf("\n>>你错了\n");
	}
	printf("桃子的个数为:%d\n",peach);
	
	printf("\n");

 } 
void Games_Pro_thought()
{
	puts("====================程序思想==================="); 
	int x,y,zheng; 
	printf("\n给出以下条件:\n");
	puts("当x<=0时，y=x*-x");
	puts("当0<x<18时,y=x*5-7");
	puts("当x>=18时，y=x*8+(x-1)*6");
	
	zheng = rand() % 20 + 1; //生成随机数以决定x的正负 
	if(zheng<=10)
	{	x = rand() % 20 + 3; x = -x;	} //x为负数 
	else
	{	x = rand() % 29 + 2;	} //x为正 
	
	//提问 
	printf("\n当x=%d时,y=",x);
	
	//计算答案 
	if(x<=0)
	{
		y= -x*x; 
	}
	else if(x<18)
	{
		y=x*5-7;
	}
	else
	{
		y=x*8+(x-1)*6; 
	}
	
	
	
	//用户作答 
	int iny;
	scanf("%d",&iny);
	
	if(iny==y)
	{
		puts(">>你对了");
	}
	else
	{
		puts(">>你错了") ;
	} 
	printf("\ny=%d\n",y);
	
	printf("\n");

}
void Games_Yanghui()
{
	puts("====================杨辉三角===================");
	printf("下图是我国古代数学家杨辉发现的杨辉三角\n观察:\n\n");
	puts("           1          "); 
	puts("        1     1       ");
	puts("    1      2     1    ");
	puts(" 1     3      3    1  ");	
	puts("     ······     ");
	int list,add;
	list = rand() %8 + 6;
	add = pow(2,(list-1));
	printf("\n则第%d行的所有数之和为:",list);
	int inadd;
	scanf("%d",&inadd);
	if(inadd==add)
	{
		puts(">>你对了") ;
	}
	else
	{
		puts(">>你错了");
	}
	printf("\n第%d行的所有数之和为%d\n",list,add);
	printf("\n");

} 
void Games_Plant_tree()
{
	puts("====================植树问题====================");
	int input;
	printf("\n1.入门\n2.普通\n3.困难\n0.退出\n请选择难度:");
	scanf("%d",&input);
	
	srand(time(0));
	if(input==1)
	{
		int roat; //路长 
		int distance,trees; //树间距，树棵数 
		trees = rand() % 57 + 14;
		distance = rand() %8 + 3;
		roat = (trees-1)*distance; //路长 
		printf("\n在一条长%d米的路旁植树，每棵树间隔%d米,\n那么可以植多少棵数:",roat,distance);
		//用户作答 
		int intrees;
		scanf("%d",&intrees);
		
		if(intrees==trees)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n可以植%d棵树\n",trees);
	}
	
	else if(input==2)
	{
		int roat; //路长 
		int distance,trees; //树间距，树棵数 
		trees = rand() % 57 + 14;
		distance = rand() %8 + 3;
		roat = (trees-1)*distance; //路长
		int flower; //花
		flower = (trees-1)*5;
		printf("\n在一条长%d米的路旁植树，每棵树间隔%d米,\n",roat,distance);
		printf("若每两棵树间种5朵花，则可以种几朵：");
		
		//用户作答 
		int inflower;
		scanf("%d",&inflower);
		
		if(inflower==trees)
		{
			puts(">>你对了");
		}
		else
		{
			puts(">>你错了");
		}
		printf("\n可以种%d朵花\n",flower);
	}
	
	else if(input==3)
	{
		int a; //每边和对角线的树的棵数 
		a = rand() %18 + 3;
		
		//总棵树
		int all;
		if(a%2==0)//如果a为偶数 
		{	all = a*6 - 8; 		}
		
		else //如果为奇数 
		{	all = a*6 - 9;		}
		
		//提问
		int inall; 
		printf("\n有一块正方形土地，它的每条边和对角线都种了%d棵树，\n",a);
		printf("则一共种了几棵树：");
		scanf("%d",&inall);
		
		if(inall==all)
		{
			puts(">>你对了"); 
		}
		else
		{
			puts(">>你错了");
			puts("注意重合部分");
		}
		printf("一共种了%d棵树",all);
		
	}
	
	printf("\n");

}

 /*---------------------------*/
 
void Tools_menu()
{
	printf("\n\n\n\n\n");
	printf("\t\t|-------------------工具栏-----------------|\n");
	printf("\t\t|\t 1. 面积计算                   	   |\n");
	printf("\t\t|\t 2. 体积计算                       |\n");
	printf("\t\t|\t 3. 生成随机数                     |\n");
	printf("\t\t|\t 4. 等差数列计算                   |\n");
	printf("\t\t|\t 5. 等比数列计算                   |\n");
	printf("\t\t|\t 6. 文字加/解密                    |\n");
	printf("\t\t|\t 7. 约数与倍数                     |\n");
	printf("\t\t|\t 8. 计算器                         |\n");
	printf("\t\t|\t 0. 返回                           |\n");
	printf("\t\t|------------------------------------------|\n\n");
	printf("\t\t\t请选择(0~8):");
}
void Tools_Choose() //工具菜单
{
 	int input;
 	Tools_menu(); //显示菜单 
	scanf("%d",&input);
	while(input)
	{
		switch(input)
		{
			case 1:
				Tools_S();
				break;
			case 2:
				Tools_V();
				break;
			case 3:
				Tools_Random();
				break; 
			case 4:
				Tools_AP();
				break;
			case 5:
				Tools_GS();
				break; 
			case 6:
				Tools_Pass();
				break; 
			case 7:
				Tools_gcd();
				break;
			case 8:
				Tools_computer();
				break; 
			default:break;
		}
		Tools_menu(); //再次显示菜单 
		scanf("%d",&input);
	}
 }
//工具： 
void Tools_S()
{
	puts("===================面积计算器===================");
	int input;
	printf("\n1.圆\n2.三角形\n3.三角形(海伦公式)\n4.平行四边形\n5.梯形\n");
	printf("请输入你要计算的图形(面积)类型:");
	scanf("%d",&input);
	
	double S,a,b,h,r,half; //面积、长、宽、高、半径、三角形半周长 
	switch(input)
	{
		case 1:
			puts("请输入圆的半径:");
			scanf("%lf",&r);
			S = PAI*r*r;
			printf("该圆的面积为:\n%lf\n\n",S);
			break;
		case 2:
			puts("请分别输入三角形的底和高:");
			scanf("%lf %lf",&a,&h);
			S = a*h*0.5;
			printf("该三角形的面积为:\n%lf\n\n",S);
			break;
		case 3:
			puts("请由小到大输入三角形的三边:");
			scanf("%lf %lf %lf",&a,&b,&h);
			//海伦公式 
			half=(a+b+h)/2;
			S = sqrt(half*(half-a)*(half-b)*(half-h));
			printf("该三角形面积为:\n%lf\n\n",S);
			break;
		case 4:
			puts("请依次输入平行四边形(长方形)的底和高(长和宽):");
			scanf("%lf %lf",&a,&b);
			S = a*b;
			printf("该平行四边形的面积为:\n%lf\n\n",S);
			break;
		case 5:
			puts("请依次输入该梯形的上底、下底和高:");
			scanf("%lf %lf %lf",&a,&b,&h);
			S = (a+b)*h*0.5;
			printf("该梯形的面积为:\n%lf\n\n",S);
			break;
		default:
		puts("[error_00x00000]请输入一个正确的序号！");
		break;
	}
	
	printf("\n");

}
void Tools_V()
{
	puts("===================体积计算器===================");
	int input;
	puts("\n请输入(序号)你要计算的图形(体积)：\n1.四棱柱\n2.球体\n3.圆柱体\n4.圆锥体"); 
	scanf("%d",&input);
	
	double V; //体积 
	double a,b,h; //长宽高 
	double R; //底面半径 
	switch(input)
	{
		case 1:
			puts("依次输入长、宽、高:");
			scanf("%lf %lf %lf",&a,&b,&h);
			V=a*b*h;
			printf("它的体积为: %lf",V);
			break;
		
		case 2:
			puts("请输入球体的半径:");
			scanf("%lf",&R);
			V=(4.0/3.0)*PAI*R*R*R;
			printf("它的体积为：%lf",V);
			break;
		
		case 3:
			puts("请依次输入圆柱体的半径、高：");
			scanf("%lf %lf",&R,&h);
			V=PAI*R*R*h;
			printf("它的体积为:%lf",V);
			break;
		
		case 4:
			puts("请依次输入圆锥的底面半径、高：");
			scanf("%lf %lf",&R,&h);
			V=(1.0/3.0)*PAI*R*R*h;
			printf("它的体积为: %lf",V);
			break;
		
		default:
			puts("[error_00x00000]请输入一个正确的序号！");
			break;
	}
	printf("\n");

}
void Tools_Random()
{
	puts("=================随机数生成器=================");
	
	int a,i,l,max; //随机数、次数、次数上限、随机数大小上限 
	
	printf("\n需要多少以内的随机数:");
	scanf("%d",&max);
	printf("\n需要多少个随机数:");
	scanf("%d",&l);
	//开始生成 
	srand(time(0));
	for(i=1;i<=l;i++)
	{	
		a = rand() % max + 1;
		printf("第%d个随机数是%d.\n",i,a);
	}
	
	printf("\n");
	
} 
void Tools_AP()
{
	puts("===================等差数列求和===================");
	
	float x,y,z,i; //首项、公差、末项、和 
	puts("\n请分别输入：\n首项(数列的第一项)\n公差(每两项的差)\n末项(数列的最后一项)\n");
	scanf("%f %f %f",&x,&y,&z);
	
	z=(z-x)/y+1.0; //求出项数 
	for(;z>=1;z--,x+=y)
	{
		i+=x; 
	}
	printf("这列等差数列的和为:%.2f\n\n",i);
	
}
void Tools_GS()
{
	puts("===================等比数列求和===================");
	float x,y,z,i; //首相、公比、末项、和
	 
	puts("\n请分别输入：\n首项(数列的第一项)\n公比的反比(每两项的比的倒数)\n末项(数列的最后一项)\n");
	scanf("%f %f %f",&x,&y,&z);
	
	//求和 
	float count=x; 
	for(;z>=count;z/=y)
	{
		i+=x;
		x*=y;
	}
	printf("这列等比数列的和为:%.2f\n\n",i); 
	
	
 } 
void Tools_Pass()
{
	int input;
	do
	{
		puts("===================文字加/解密===================");
		printf("1.加密\n2.解密\n0.返回\n须知：少于600汉字或少于1200字母\n请选择:");
		scanf("%d",&input);
		getchar(); //重载缓冲区
		 
		char c[1201]; //限定长度
		
		//加密、解密 
		if(input==1)
		{ 
			printf("\n请输入要加密的文字:") ;
			scanf("%[^\n]",&c);
	    	char *pc=c;
	    	while(*pc){
	        	*pc += 9;
	        	pc++;
	    	}
	    	printf("\n\n加密后的文字为:\n%s\n\n",c);
	    	
		}
		else if(input==2)
		{
			printf("\n请输入要解密的文字:") ;
			scanf("%[^\n]",&c);
	    	char *pc=c;
	    	while(*pc){
	        	*pc -= 9;
	        	pc++;
	    	}
	    	printf("\n\n解密后的文字为:\n%s\n\n",c);
	    	
		} 
	}
	while(input==1 || input==2);
}
void Tools_gcd()
{
	puts("===================最大公约数和最小公倍数===================");
	int a,b;
	printf("\n请分别输入两数：");
	scanf("%d %d",&a,&b);
	//暂存a、b的值 
	int a1,b1;
	a1 = a;
	b1 = b;
	//辗转相除法 
	int t;
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("\n它们的最大公约数为:%d\n",a);
	//求出最小公倍数 
	int m;
	m = a1*b1/a;
	printf("它们的最小公倍数为:%d\n",m);
	printf("\n");
} 
void Tools_computer()
{
	int input;
	double a,b; //两数 
	double Add; //结果 
	
	do
	{
		puts("===================计算器===================");
		printf("\n1.加法\n2.减法\n3.乘法\n4.除法\n5.幂的运算\n6.开方运算\n0.返回\n");
		printf("请选择:");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				printf("\n*格式 a+b *\n请输入:");
				scanf("%lf+%lf",&a,&b);
				Add = a+b;
				printf("\n\n和为:%lf\n",Add);
				break;
				
			case 2:
				printf("\n*格式 a-b *\n请输入:");
				scanf("%lf-%lf",&a,&b);
				Add = a-b;
				printf("\n\n差为:%lf\n",Add);
				break;
				
			case 3:
				printf("\n*格式 a*b *\n请输入:");
				scanf("%lf*%lf",&a,&b);
				Add = a*b;
				printf("\n\n积为:%lf\n",Add);
				break;
				
			case 4:
				printf("\n*格式 a/b *\n请输入:");
				scanf("%lf/%lf",&a,&b);
				Add = a/b;
				printf("\n\n商为:%lf\n",Add);
				break;
			case 5:
				printf("\n*格式 a^b (意为a的b次方)*\n请输入:");
				scanf("%lf^%lf",&a,&b);
				Add = pow(a,b);
				printf("\n\n结果为:%lf\n",Add);
				break;
				
			case 6:
				printf("\n*格式 a>>b (意为a的b次方根)*\n请输入:");
				scanf("%lf>>%lf",&a,&b);
				b = 1/b;
				Add = pow(a,b);
				printf("\n\n结果为:%lf\n",Add);
				break;
			default:break;
		 } 
		 
		printf("\n");
	}while(input>0&&input<7);
}
