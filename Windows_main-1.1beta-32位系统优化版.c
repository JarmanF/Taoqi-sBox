#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 
#include <string.h>
#define PAI 3.14159265358979323846

//--���� �� -- 
void menu(); //���˵� 
//--������ -- 
void Games_menu(); //�˵����� 
void Games_Choose();
void Games_gess(); //���� 
void Games_Hanxin(); //���ŵ�� 
void Games_AP(); //�Ȳ�����
void Games_GS(); //�ȱ����� 
void Games_Mean(); //ƽ����Ӧ��
void Games_gcd(); //���Լ�� 
void Games_HenRabbit(); //����ͬ�� 
void Games_boat(); //��ˮ����
void Games_chase(); //׷������ 
void Games_lastnum(); //β���Ĺ��� 
void Games_Somenum(); //�ҹ������� 
void Games_Peach(); //���ӳ���
void Games_Pro_thought(); //����˼��
void Games_Yanghui(); //�������
void Games_Plant_tree(); //ֲ������
void Games_Magic_square(); //�÷�
void Games_odd_even(); //��ż����Ӧ��

//--������ -- 
void Tools_menu(); //�˵����� 
void Tools_Choose();
void Tools_S(); //������� 
void Tools_V(); //�������
void Tools_Random(); //��������� 
void Tools_AP(); //�Ȳ��������  
void Tools_GS(); //�ȱ�������� 
void Tools_Pass(); //���ּ�/���� 
void Tools_gcd(); //�����Լ������С������
void Tools_computer(); //������
void Tools_Group(); //������������ 

int main()
{
	int input;
	menu(); //��ʾ�˵� 
	scanf("%d",&input); //�û�ѡ���� 
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
		menu(); /*ִ���깦���ٴ���ʾ�˵�����*/
		scanf("%d",&input);
	}
}
void menu() //���˵� 
{
	system("cls");
	system("color F2");
	printf("\n\n\n\n\n");
	printf("\t\t|-------------------���˵�-----------------|\n");
	printf("\t\t|\t 1.�������                        |\n");
	printf("\t\t|\t 2. ����                           |\n");
	printf("\t\t|\t 0. �˳�                           |\n");
	printf("\t\t|------------------------------------------|\n\n");
	printf("\t\t\t��ѡ��(0~2):");
}

void Games_menu() //�������˵� 
{
	system("cls");
	system("color F4"); //���� ���� ������ɫ
	printf("\n\n\n\n\n");
	printf("\t\t|------------------�������----------------|\n");
	printf("\t\t|\t 1. ����                           |\n");
	printf("\t\t|\t 2. ���ŵ��                       |\n");
	printf("\t\t|\t 3. �Ȳ�����                       |\n");
	printf("\t\t|\t 4. �ȱ�����                       |\n");
	printf("\t\t|\t 5. ƽ����Ӧ��                     |\n");
	printf("\t\t|\t 6. ���Լ��                     |\n");
	printf("\t\t|\t 7. ����ͬ������                   |\n");
	printf("\t\t|\t 8. ��ˮ����                       |\n");
	printf("\t\t|\t 9. ׷��������                     |\n");
	printf("\t\t|\t 10.β���Ĺ���                     |\n");
	printf("\t\t|\t 11.�ҹ�������                     |\n");
	printf("\t\t|\t 12.���ӳ���                       |\n");
	printf("\t\t|\t 13.����˼��                       |\n");
	printf("\t\t|\t 14.�������                       |\n");
	printf("\t\t|\t 15.ֲ������                       |\n");
	printf("\t\t|\t 16.�÷�                           |\n");
	printf("\t\t|\t 17.��ż����                       |\n");
	printf("\t\t|\t 0.����                            |\n");
	printf("\t\t|------------------------------------------|\n\n");
	printf("\t\t\t��ѡ��(0~17):");
 } 
void Games_Choose()
{
	int input;
 	system("cls"); //��ҳ 
 	Games_menu();
	scanf("%d",&input); //�û�ѡ�� 
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
				Games_Mean();
				break;
			case 6:
				Games_gcd();
				break; 
			case 7:
				Games_HenRabbit();
				break;
			case 8:
				Games_boat();
				break;
			case 9:
				Games_chase();
				break; 
			case 10:
				Games_lastnum();
				break;
			case 11:
				Games_Somenum();
				break;
			case 12:
				Games_Peach();
				break;
			case 13:
				Games_Pro_thought();
				break;
			case 14:
				Games_Yanghui();
				break; 
			case 15:
				Games_Plant_tree();
				break; 
			case 16:
				Games_Magic_square();
				break;
			case 17:
				Games_odd_even();
				break;
			default:break;
		}
		Games_menu();
		scanf("%d",&input); //������ʾ 
	 } 
}
//��⣺ 
void Games_gess()
{
	puts("====================������Ϸ====================");
	srand(time(0));
	int i,number,times;
	times=1;
	number = rand() % 198 + 2; //��������� 
	puts("\n���һ���������ڵ���:");
	scanf("%d",&i);
	while(i!=number)
	{
		if(i>number)
		{
			puts(">>����");
			times++; 
			scanf("%d",&i);
		}
		else if(i<number)
		{
			puts(">>С��");
			times++;
			scanf("%d",&i);
		}
		else
		{	break; }
	 } 
	 printf("�������%d,�����%d��",number,times);
	 printf("\n");
	 system("pause");
}
void Games_Hanxin()
{
	puts("====================���ŵ��====================");
	srand(time(0));
	int inum,number,times;
	times=1;
	number = rand() % 199 + 2;
	puts("���ŵľ�Ӫ������200����");
	printf("����������������ʣ%d��\n",number%2);
	printf("����������������ʣ%d��\n",number%3);
	printf("��������������ʣ%d��\n",number%5); //�������� 
	printf("��Ӫ������ж��ٱ�(8�λ���):");
	scanf("%d",&inum);
	for(;times<=8;times++)
	{
		if(inum>number)
		{
			puts(">>����"); 
			scanf("%d",&inum);
		}
		else if(inum<number)
		{
			puts(">>����");
			scanf("%d",&inum);
		}
		else
		{	puts("�¶��ˣ�");break; }
	 } 
	 printf("��Ӫ����%d����,�����%d��\n",number,times); 
	 printf("\n");
	 system("pause");
}
void Games_AP()
{
	puts("====================�Ȳ�����====================");
	int x,y,z,inum,last,geti;
	srand(time(0));
	x= rand() % 5 + 1; //���� 
	y= rand() % 7 + 1; //���� 
	z= rand() % 96 + 5; //���� 
	last=x+y*(z-1); //ĩ�� 
	printf("\n%d + %d + %d +������+%d�ĺ���:",x,x+y,x+2*y,last); //�������� 
	inum = 0;
	for(;z>=1;z--) //��� 
	{
		inum+=x;
		x+=y;
	}
	scanf("%d",&geti);
	if(geti==inum)
	{	puts(">>�����");	}
	else
	{	puts(">>�����");	}
	printf("���еȲ����еĺ�Ϊ:%d\n",inum);
	printf("\n");
	system("pause");
}
void Games_GS()
{
	puts("====================�ȱ�����====================");
	srand(time(0));
	int x,y,z,last,inum,geti;
	x= rand() % 4 + 1; //���� 
	y= rand() % 3 + 2; //���� 
	z= rand() % 7 + 4; //���� 
	last = x*pow(y , (z-1)); //ĩ�� 
	printf("\n%d + %d +%d +������+%d�ĺ���:",x,x*y,x*y*y,last); //�������� 
	inum = 0;
	for(;z>=1;z--)
	{
		inum+=x;
		x*=y;
	}
	scanf("%d",&geti);
	if(geti==inum)
	{	puts(">>�����");	}
	else
	{	puts(">>�����");	}
	printf("���еȱ����еĺ�Ϊ:%d\n",inum);
	printf("\n");
	system("pause");
}
void Games_Mean()
{
	int input;
	puts("====================ƽ����Ӧ��===================");
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	srand(time(0));
 
	if(input==1)
	{
		//���ɳɼ� 
		int Ch,Math,En;
		Ch = rand() %61 +40;
		Math = rand() %61 +40;
		En = rand() %61 +40;
		//��ƽ����
		int mean = 0;
		mean = (Ch + Math + En) / 3;
		//����
		int inmean; 
		printf("\n���������ĳɼ���%d��\n��ѧ�ɼ���%d��\nӢ��ɼ���%d��\n",Ch,Math,En);
		printf("��ô��������ƽ������(��������)��");
		scanf("%d",&inmean);
		
		if(inmean==mean)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��������ƽ������%d��\n",mean);
	}
	
	else if(input==2)
	{
		//��������������˻���
		int day[2] = {0,0};
		day[0] = rand() % 5 + 3;
		day[1] = rand() % 6 + 3;
		int day_add; //������ 
		day_add = day[0] + day[1];
		int goods[2] = {0,0};
		goods[0] = rand() %1751 + 350;
		goods[1] = rand() %1751 + 360;
		//���ƽ��ÿ���˻�
		int mean = 0;
		mean = (day[0]*goods[0] + day[1]*goods[1]) / day_add;
		//����
		int inmean;
		printf("\nһ��������˾��%d���ǰ%d��ƽ��ÿ���˻�%d��,\n",day_add,day[0],goods[0]);
		printf("��%d��ƽ��ÿ���˻�%d�֣�\n",day[1],goods[1]);
		printf("����%d���﹫˾ƽ��ÿ���˻����ٶ�(��������)��",day_add);
		scanf("%d",&inmean);
		if(inmean==mean)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\nƽ��ÿ���˻�%d��\n",mean);
	}
	
	else if(input==3)
	{
		int count;
		//���������
		int num[5] = {0,0,0,0,0};
		for(count = 0;count < 5;count++)
		{	num[count] = rand() % 151 + 50; 	} 
		
		//����4��ƽ����
		float mean[4] = {0,0,0,0};
		for(count = 0; count < 4;count++) //1.ABCD 
		{	mean[0] += num[count];	}
		mean[0] /= 4.0; //ABCD��ƽ���� 
		//2.A��C��D��E ��ƽ����
		for(count=0;count<5;count++) //ABCDE�ĺ� 
		{	mean[1] += num[count];	} 
		mean[1] -= num[1]; //ACDE�ĺ� 
		mean[2] = mean[1] - num[2]; //Ϊ������ƽ������׼�� ADE�ĺ� 
		mean[1] /= 4.0; //ACDE��ƽ����;
		//3.ADE��ƽ����
		mean[2] /= 3.0;
		//4.BD��ƽ���� 
		mean[3] = (num[1] + num[3]) / 2.0;
		
		//���� 
		int A = 0;
		printf("\n��A��B��C��D��E �������\n����A��B��C��D ��ƽ������%f��\n",mean[0]);
		printf("A��C��D��E��ƽ������ %f,\nA��D��E ��ƽ������ %f,\nB��D��ƽ������ %f��\n",mean[1],mean[2],mean[3]);
		printf("\n��ô A ��ֵΪ(��������):");
		scanf("%d",&A);
		if(A==num[0])
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\nA = %d\n",num[0]);
	}
	
	printf("\n");
	system("pause");
}
void Games_gcd()
{
	puts("====================���Լ��====================");
	int a,b,t,geti;
	srand(time(0));
	a=0;	b=0;	t=0;	geti=0;
	a = rand() %499 + 3;
	b = rand() %499 +2;
	printf("����%d��%d�����Լ����:",a,b); //�������� 
	scanf("%d",&geti);
	while(b!=0) //շת����� 
	{
		t=a%b;
		a=b;
		b=t;
	 }
	if(geti==a)
	{
		puts(">>����");
	}
	else
	{
		puts(">>����");
	}
	printf("���ǵ����Լ��Ϊ:%d\n",a);
	printf("\n");
	system("pause");
}
void Games_HenRabbit()
{
	int input;
	puts("====================����ͬ��====================");
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	srand(time(0));
	if(input==1)
	{
		int hens,rabbits; //�������� 
		int inputh,inputr; //�û�����Ĵ𰸣��������� 
		//��������� 
		hens= rand() % 65 + 5;
		rabbits= rand() % 65 + 4;
		printf("һ��������һ����%dֻ�������ӣ�\nһ����%d����\n",hens+rabbits,hens*2+rabbits*4);
		printf("��ô�ֱ��ж���ֻ���Ӻͼ�:"); 
		scanf("%d %d",&inputr,&inputh);
		if(inputr==rabbits&&inputh==hens)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��%dֻ���ӣ���%dֻ��",rabbits,hens);
	}
	else if(input==2)
	{
		int zhizhu,qingting,chan; //֩�롢���ѡ��� 
		int inzhi,inqing,inchan; //�û������֩�롢���ѡ���  
		//��������� 
		zhizhu = rand() % 28 + 2;
		qingting = rand() % 26 + 4;
		chan = rand() % 17 + 3;
		//���������� 
		printf("֩����8����,\n������6���Ⱥ�2�Գ��,\n����6���Ⱥ�1�Գ��,\n");
		printf("\n�ֹ�������%dֻ,���ǹ���%d���Ⱥ�%d�Գ��\n",zhizhu+qingting+chan,zhizhu*8+(qingting+chan)*6,qingting*2+chan);
		printf("��ô�ֱ���֩�롢���ѡ�������ֻ:");
		scanf("%d %d %d",&inzhi,&inqing,&inchan);
		if(inzhi==zhizhu && inqing==qingting && inchan==chan)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��%dֻ֩�룬%dֻ���ѣ�%dֻ��\n",zhizhu,qingting,chan);
	}
	else if(input==3)
	{
		int zhizhu,qingting,chan,deformitier; //֩�롢���ѡ����������� 
		//��������� 
		zhizhu = rand() % 38 + 2;
		qingting = rand() % 36 + 4;
		chan = rand() % 27 + 3;
		deformitier = rand() % 15 + 5;
		//˵������ 
		printf("\n����������:\n");
		printf("֩����8����,\n������6���Ⱥ�2�Գ��,\n����6���Ⱥ�1�Գ����������2�����,\n��������6���Ⱥ�1�Գ����������3�����\n");
		//������������ 
		int all,leg,chi,biao;
		all = zhizhu + qingting + chan + deformitier; //���������ܺ� 
		leg = zhizhu*8 + (qingting+chan+deformitier)*6;//��������������� 
		chi = qingting*2 + chan + deformitier; //��������ĳ�� 
		biao = chan*2+deformitier*3; //��������ı�� 
		printf("\n������%dֻ���棬���ǹ���%d�Գ��%d���Ⱥ�%d�����",all,chi,leg,biao);
		//�������
		printf(",\n��ô�ֱ���֩�롢���ѡ����������ֶ���ֻ:");
		//�û����� 
		int inzhi,inqing,inchan,indefor;	//�û������֩�롢���ѡ����������ֵ�ֻ�� 
		scanf("%d %d %d %d",&inzhi,&inqing,&inchan,&indefor);
		//�����ж� 
		if(inzhi==zhizhu && inqing==qingting && inchan==chan && indefor==deformitier)
		{
			puts(">>��ϲ��������");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��%dֻ֩�룬%dֻ����,%dֻ����%dֻ������\n",zhizhu,qingting,chan,deformitier);
	}
	printf("\n");
	system("pause");
}
void Games_boat()
{
	puts("====================��ˮ����====================");
	int speed,water_s,hour,roat,inhour;
	srand(time(0));
	speed = rand() % 75 + 15; //���� 
	water_s = rand() % 5 + 1; //ˮ�� 
	hour = rand() % 11 + 1; //��ʻʱ�� 
	roat = (speed+water_s)*hour; //˳ˮ·��
	/*����*/
	printf("\nһ�Ҵ��ľ�ˮ�ٶ��� %d km/h,\nҪ�� %d km/h��ˮ��˳ˮ����%dǧ�ף���Ҫ����Сʱ:",speed,water_s,roat);
	scanf("%d",&inhour);
	if(inhour==hour)
	{
		puts(">>�����");
	}
	else
	{
		puts(">>�����");
	}
	printf("��Ҫ%dСʱ\n",hour);
	
	printf("\n");
	system("pause");
}
void Games_chase()
{
	srand(time(0));
	puts("====================׷��������====================");
	int input;
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	if(input==1)
	{
		int chase,run,chase_time;
		chase = rand() % 60 + 61; //�ٶȽϿ��� 
		run = rand() % 50 + 10;  //�ٶȽ����� 
		chase_time = rand() % 12 + 2; //׷��ʱ�� 
		int roat;
		roat = chase_time*(chase-run); //·�� 
		printf("\nA��B�������%dǧ�ף��׳���A�أ��ҳ���B��\n����ʱ��%dǧ��,��ʱ��%dǧ��\n������ͬ�����,���׷�������Сʱ(��������):",roat,chase,run);
		int inctime; //�û����룺׷��ʱ�� 
		scanf("%d",&inctime);
		if(inctime==chase_time)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��Ҫ%dСʱ\n",chase_time);
		
		//�ٴ����� 
		int meet_time;
		meet_time = roat/(chase+run); //����ʱ�� 
		printf("\n��ô��������������У��������Сʱ(��������):");
		int inmtime;
		scanf("%d",&inmtime);
		if(inmtime==meet_time)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��Ҫ%dСʱ\n",meet_time);
	}
	else if(input==2)
	{
		int boy,girl,dog,time;
		girl = rand() % 12 + 4; //С���ٶ� 
		boy = girl*2-1; //С���ٶ� 
		dog = rand() % 7 + 3; //С���ٶ� 
		time = rand() % 25 + 5; //ʱ�� 
		int roat;
		roat = (boy+girl)*time; //·�� 
		printf("\nС����С����%d�׵�·��������У�\nС������ʱ����һ��������С����С��֮�������ܣ�\nֱ��С����С���������ֹͣ��\n",roat);
		printf("��֪С����С���С�����ٶȷֱ�Ϊ:%dm/s��%dm/s��%dm/s\n��ô��һ�����˶�����:",boy,girl,dog);
		int indogroat; //�û����룺���ܵ�·�� 
		scanf("%d",&indogroat);
		int dogroat;
		dogroat = time*dog; //���㹷�ܵ�·�� 
		if(indogroat==dogroat)
		{
			puts(">>�����");
		 }
		else
		{
			puts(">>�����") ;
		}
		printf("��ֻ��һ������%d��",dogroat);
	}

	else if(input==3)
	{
		int Jia,Yi,Bing; //�ס��ҡ��� 
		//���˵��ٶ� 
		Jia = 30;
		Yi = 20;
		Bing = (rand()%5+1)*5; 
		
		int meet; //�������� 
		meet = (rand()%13 + 2);
		
		int meettime,more; //����ʱ�䡢���ȼ׶���·�� 
		meettime = 12 +  24*(meet-1);
		more = Bing*meettime;
		
		//������� 
		printf("\n��һ��1200�׵Ļ����ܵ��ϣ��ס��Ҹ����ܵ���һ�࣬���600�ס�\n");
		printf("�������ͬһ�ص����У�����ͬʱ������\n");
		printf("���׵��ٶ���%d m/s,�ҵ��ٶ���%d m/s,���ȼ׿�%d m/s ��\n",Jia,Yi,Bing);
		printf("�����ȼ׶�����%d�׺����˶�ͣ�£�\n��ʱ�����������˼��Σ�",more);
		
		int inmeet;
		scanf("%d",&inmeet);
		if(inmeet==meet)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n����������%d��\n",meet);
	}
	printf("\n");
	system("pause");
}
void Games_lastnum()
{
	puts("====================β���Ĺ���====================");
	int num,inum,lastnum,inlast;
	srand(time(0));
	num = rand() %8 + 2; //���� 
	inum = rand() %39 + 2; //ָ��
	//���� 
	printf("\nһ�����ĸ�λ����Ϊ����β����\n");
	printf("��%d��%d�η���β����:",num,inum);
	scanf("%d",&inlast);
	
	lastnum = 0;
	num = pow(num,inum);
	lastnum = num%10; //����β�� 
	
	//�ж� 
	if(inlast == lastnum)
	{
		puts(">>�����");
	}
	else
	{
		puts(">>�����");
	}
	printf("\n����β����%d\n",lastnum);
	
	printf("\n");
	system("pause");
} 
void Games_Somenum()
{
	int input;
	puts("====================�ҹ�������====================");
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	srand(time(0));
	if(input==1)
	{
		//�Ȳ����� 
		int i,count,s; //������������� 
		i = rand() % 3 + 1;
		s = rand() % 3 + 2;
		count = rand() % 24 + 6;
		
		//���� 
		printf("�۲�:\n%d��%d��%d��%d������\n",i,i+s,i+2*s,i+3*s);
		printf("���%d������:",count);
		while(count>1)
		{
			i+=s;
			count--;
		}
		
		int innum; //�û����� 
		scanf("%d",&innum);
		if(innum==i)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n�������:%d\n",i);
	}
	else if(input==2)
	{
		//�ȱ����� 
		int i,count,s; //������������� 
		i = rand() % 3 + 1;
		s = rand() % 3 + 2;
		count = rand() % 24 + 6;
		
		//���� 
		printf("�۲�:\n%d��%d��%d��%d������\n",i,i*s,i*s*s,i*s*s*s);
		printf("���%d������:",count);
		while(count>1)
		{
			i*=s;
			count--;
		}
		
		//�û����� 
		int innum;
		scanf("%d",&innum);
		if(innum==i)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n�������:%d\n",i);
	}
	else if(input==3)
	{
		//�ۺϹ������� 
		int i,count,s,k;
		i = rand() % 3 + 1; //���� 
		s = rand() % 3 + 2; //����(����ֵ��) 
		k = -1; //�������� 
		count = rand() % 18 + 4; //���� 
		
		//�������� 
		int put1=-1*pow(i,2);
		int put2=pow((i+s),2);
		int put3=-1*pow((i+s+s),2);
		printf("�۲�:\n%d��%d��%d������",put1,put2,put3);
		printf("\n���%d������:",count);
		
		//��������֮�� 
		int add;
		while(count>=1)
		{
			add = pow(i,2)*k;
			k = -k;
			i += s;
			count--;
		}
		
		//�û����� 
		int innum;
		scanf("%d",&innum);
		if(innum==add)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n�������:%d\n",add);
	}
	
	
	printf("\n");
	system("pause");
}
void Games_Peach()
{
	puts("====================���ӳ���====================");
	int count;
	srand(time(0));
	count = rand() % 17 + 3; //����
	
	//���� 
	printf("\nһֻ���Ӳ������ɸ����ӣ���һ��Ե���һ����һ����\n�˺�ÿ�춼�Ե�����ʣ�µ�һ����һ����\
	���˵�%d�죬����ֻʣ��һ���ˣ�\n��ժ�����ӵĸ�����",count);
	
	//����� 
	int peach=1;
	for(;count>1;count--)
	{
		peach = (peach+1)*2;
	}
	
	//�û����� 
	int inpeach;
	scanf("%d",&inpeach);
	if(inpeach == peach)
	{
		printf("\n>>�����\n");
	}
	else
	{
		printf("\n>>�����\n");
	}
	printf("���ӵĸ���Ϊ:%d\n",peach);
	
	printf("\n");
	system("pause");
 } 
void Games_Pro_thought()
{
	puts("====================����˼��==================="); 
	int x=0,y=0,zheng=0; 
	printf("\n������������:\n");
	puts("��x<=0ʱ��y=x*-x");
	puts("��0<x<18ʱ,y=x*5-7");
	puts("��x>=18ʱ��y=x*8+(x-1)*6");
	
	zheng = rand() % 20 + 1; //����������Ծ���x������ 
	if(zheng<=10)
	{	x = rand() % 20 + 3; x = -x;	} //xΪ���� 
	else
	{	x = rand() % 29 + 2;	} //xΪ�� 
	
	//���� 
	printf("\n��x=%dʱ,y=",x);
	
	//����� 
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
	
	
	
	//�û����� 
	int iny;
	scanf("%d",&iny);
	
	if(iny==y)
	{
		puts(">>�����");
	}
	else
	{
		puts(">>�����") ;
	} 
	printf("\ny=%d\n",y);
	
	printf("\n");
	system("pause");
}
void Games_Yanghui()
{
	puts("====================�������===================");
	printf("��ͼ���ҹ��Ŵ���ѧ����Է��ֵ��������\n�۲�:\n\n");
	puts("           1          "); 
	puts("        1     1       ");
	puts("    1      2     1    ");
	puts(" 1     3      3    1  ");	
	puts("     ������������     ");
	int list=0,add=0;
	list = rand() %8 + 6;
	add = pow(2,(list-1));
	printf("\n���%d�е�������֮��Ϊ:",list);
	int inadd;
	scanf("%d",&inadd);
	if(inadd==add)
	{
		puts(">>�����") ;
	}
	else
	{
		puts(">>�����");
	}
	printf("\n��%d�е�������֮��Ϊ%d\n",list,add);
	printf("\n");
	system("pause");
} 
void Games_Plant_tree()
{
	puts("====================ֲ������====================");
	int input;
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	
	srand(time(0));
	if(input==1)
	{
		int roat=0; //·�� 
		int distance=0,trees=0; //����࣬������ 
		trees = rand() % 57 + 14;
		distance = rand() %8 + 3;
		roat = (trees-1)*distance; //·�� 
		printf("\n��һ����%d�׵�·��ֲ����ÿ�������%d��,\n��ô����ֲ���ٿ���:",roat,distance);
		//�û����� 
		int intrees;
		scanf("%d",&intrees);
		
		if(intrees==trees)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n����ֲ%d����\n",trees);
	}
	
	else if(input==2)
	{
		int roat; //·�� 
		int distance,trees; //����࣬������ 
		trees = rand() % 57 + 14;
		distance = rand() %8 + 3;
		roat = (trees-1)*distance; //·��
		int flower; //��
		flower = (trees-1)*5;
		printf("\n��һ����%d�׵�·��ֲ����ÿ�������%d��,\n",roat,distance);
		printf("��ÿ����������5�仨��������ּ��䣺");
		
		//�û����� 
		int inflower;
		scanf("%d",&inflower);
		
		if(inflower==trees)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n������%d�仨\n",flower);
	}
	
	else if(input==3)
	{
		int a; //ÿ�ߺͶԽ��ߵ����Ŀ��� 
		a = rand() %18 + 3;
		
		//�ܿ���
		int all;
		if(a%2==0)//���aΪż�� 
		{	all = a*6 - 8; 		}
		
		else //���Ϊ���� 
		{	all = a*6 - 9;		}
		
		//����
		int inall; 
		printf("\n��һ�����������أ�����ÿ���ߺͶԽ��߶�����%d������\n",a);
		printf("��һ�����˼�������");
		scanf("%d",&inall);
		
		if(inall==all)
		{
			puts(">>�����"); 
		}
		else
		{
			puts(">>�����");
			puts("ע���غϲ���");
		}
		printf("һ������%d����",all);
		
	}
	
	printf("\n");
	system("pause");
}
void Games_Magic_square()
{
	puts("====================�÷�===================");
	srand(time(0));
	int input;
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	
	if(input==1) // ���׻÷����� 
	{
		//��ӡ�÷�
		printf("�۲���ͼ���ɣ�\n");
		printf("\t_____________\n");
		printf("\t|_4_|_9_|_2_|\n");
		printf("\t|_3_|_5_|_7_|\n");
		printf("\t|_8_|_1_|_6_|\n");
		
		//���ɵڶ����÷� 
		int num[9] = {4,9,2,3,5,7,8,1,6}; //ԭ�÷���Ӧ�� 
		int differ; //�ֻ÷���ԭ�÷��Ķ�Ӧ�� 
		differ = rand() % 18 + 3;
		int count; //ѭ������ 
		for(count = 0;count < 9;count++) //����ֻ÷��Ķ�Ӧ�� 
		{
			num[count] += differ;
		}
		
		//����
		printf("\n����ͼ��\n");
		printf("\t_____________________\n");
		printf("\t|______|_____|__%d__|\n",num[2]);
		printf("\t|______|__x__|__%d__|\n",num[5]);
		printf("\t|__%d__|_____|__%d__|\n",num[6],num[8]);
		printf("\n�Ա���ͼ���� x =");
		int x;
		scanf("%d",&x);
		
		//�ж�
		if(x==num[4])
		{
			puts(">>�����");
		 } 
		else
		{
			puts(">>�����");
		}
		
		printf("\nx = %d\n",num[4]);
		
	}
	
	else if(input==2) //���׻÷����� 
	{
		
		//ͨ�������÷����ɻ÷� 
		int num[9] = {4,9,2,3,5,7,8,1,6}; //�����÷���Ӧ�� 
		int differ; //�ֻ÷�������÷��Ķ�Ӧ�� 
		differ = rand() % 23 + 3;
		int count; //ѭ������ 
		for(count = 0;count < 9;count++) //����ֻ÷��Ķ�Ӧ�� 
		{
			num[count] += differ;
		}
		int Add; //����ú� 
		Add = num[4] * 3;
		
		//����
		int inx;
		printf("\n����ͼ��\n");
		printf("\t_____________________\n");
		printf("\t|______|_____|______|\n");
		printf("\t|______|_____|__%d__|\n",num[5]);
		printf("\t|__%d__|__x__|______|\n",num[6]);
		printf("\n��һ���о����׻÷��Ĺ��ɣ��۲���ͼ\n");
		printf("\n��ÿ�С�ÿ�С�ÿб���������ĺͶ�Ϊ%d\n",Add);
		printf("��ó� x =");
		
		scanf("%d",&inx);
		
		if(inx==num[7])
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n x = %d",num[7]);
		
	}
	
	else if(input==3) //�Ľ׻÷� 
	{
		//��ӡ�÷�
		printf("�۲���ͼ���ɣ�\n");
		printf("\t_____________________\n");
		printf("\t|__7_|_12_|__1_|_14_|\n");
		printf("\t|__2_|_13_|__8_|_11_|\n");
		printf("\t|_16_|__3_|_10_|__5_|\n");
		printf("\t|__9_|__6_|_15_|__4_|\n");
		//���ɵڶ����÷�
		int num[16];//ԭ�÷���
		int differ; //�ֻ÷���ԭ�÷��Ĳ�
		differ = rand() % 23 + 3;
		int count; //ѭ������
		int inum = 1; //Ϊ���鸳ֵ 
		for(count=0;count < 16;count++) 
		{
			num[count] = inum;
			num[count] += differ;
			inum++;
		}
		//����
		printf("\n��16������\n\n");
		for(count=0;count < 16;count++)
		{
			printf("%d",num[count]);
			if((count+1)%4==0)
			{
				printf("\n");
			}
			else
			{
				printf("\t");
			}
		}
		int X;
		printf("\n��������������ͼ�ı���\nʹÿ�С�ÿ�С�ÿб�е����ĺͶ����\n");
		printf("\t_____________________\n");
		printf("\t|____|____|____|____|\n");
		printf("\t|____|____|____|____|\n");
		printf("\t|____|____|____|____|\n");
		printf("\t|____|____|____|__X_|\n");
		printf("\n�� X =");
		scanf("%d",&X);
		if((X==num[0]) || (X==num[3]) ||(X==num[12]) || (X==num[15]))
		{
			puts(">>���������֮һ");
		}
		else
		{
			puts("�����");
		}
		printf("\nX = %d �� %d �� %d �� %d\n",num[15],num[12],num[3],num[0]);
	}
	
	printf("\n");
	system("pause");
}
void Games_odd_even()
{
	puts("==================��ż����Ӧ��=================");
	srand(time(0));
	int input;
	printf("\n1.����\n2.��ͨ\n3.����\n0.�˳�\n��ѡ���Ѷ�:");
	scanf("%d",&input);
	
	if(input==1)
	{
		//�������� 
		int a; 
		a = rand() % 5 + 1; //��һ����
		int count;
		count = rand() % 961 + 40;  //���е�����
		//�ж����еĺ͵���ż��
		int add = 0;
		for(;count>=1;count--)
		{
			add += a;
			a += 1;
		}
		char OE; //�ж���ż 
		if(add%2==0)
		{
			OE = 'Y';
		}
		else
		{
			OE = 'N';
		}
		//����
		char inOE;
		printf("\n%d + %d + %d +������+ %d�ĺͣ�\n",a,a+1,a+2,a+count-1);
		printf("\n�Ƿ���ż��(Y/N)��");
		getchar(); //��ֹ�������������� 
		scanf("%c",&inOE);
		
		if(inOE==OE || inOE==(OE+32))
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		
	}
	
	else if(input==2)
	{
		//쳲���������
		int count;
		count = rand() % 971 + 30;  //���е�����
		int iodd; //�����ĸ���
		iodd = count - count/3;
		//���� 
		int in_iodd;
		printf("\n�۲����쳲��������У�\n");
		printf("1��1��2��3��5��8��13��21��34��55������������\n\n");
		printf("����ǰ%d����(������%d����)�У����ж��ٸ�������",count,count);
		scanf("%d",&in_iodd);
		
		if(in_iodd==iodd)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n����%d������\n",iodd);
	}
	
	else if(input==3)
	{
		int count;
		count = rand() % 951 + 50; //���ݡ�ѧ������ 
		//��count�ڵ�����ƽ������Ϊ��
		int inum; //200�ڵ�ƽ�����ĸ��� 
		int inum_pow[44]; //ƽ���� 
		for(inum=0;(pow((inum+1),2))<count;inum++)
		{
			inum_pow[inum] = pow((inum+1),2);
		} 
		//����
		int innum;
		printf("\n\n��һ���������%dյ���ų�һ�У�������������� 1~%d��\n",count,count) ;
		printf("ÿյ���϶���һ�����أ��տ�ʼʱ�����е�����ġ���1��ѧ���߽�����\n");
		printf("�����������1�ı����ĵ�ƿ��ض�����һ�£���2��ѧ�������������2�ı����ĵ��\n");
		printf("������һ�£���3��ѧ����������������%d��ѧ�������������%d�ı����ĵ������һ�£�\n",count,count);
		printf("\n��󣬻�ʣ����յ�����ţ�");
		scanf("%d",&innum);
		
		if(innum==inum)
		{
			puts(">>�����");
		}
		else
		{
			puts(">>�����");
		}
		printf("\n��ʣ%dյ������\n",inum);
		printf("��Щ�Ƶ���ŷֱ��ǣ�\n\n");
		int list;
		for(list=0;list<inum;list++)
		{
			printf("%d",inum_pow[list]);
			if((list+1)%4==0)
			{
				printf("\n");
			}
			else
			{
				printf("\t");
			}
		}
	}
	
	printf("\n\n");
	system("pause");
}

 /*---------------------------*/
 
void Tools_menu()
{
	system("cls");
 	system("color F3"); //���� ���� ������ɫ 
	printf("\n\n\n\n\n");
	printf("\t\t|-------------------������-----------------|\n");
	printf("\t\t|\t 1. �������                   	   |\n");
	printf("\t\t|\t 2. �������                       |\n");
	printf("\t\t|\t 3. ���������                     |\n");
	printf("\t\t|\t 4. �Ȳ����м���                   |\n");
	printf("\t\t|\t 5. �ȱ����м���                   |\n");
	printf("\t\t|\t 6. ���ּ�/����                    |\n");
	printf("\t\t|\t 7. Լ���뱶��                     |\n");
	printf("\t\t|\t 8. ������                         |\n");
	printf("\t\t|\t 9. ���д���                       |\n");
	printf("\t\t|\t 0. ����                           |\n");
	printf("\t\t|------------------------------------------|\n\n");
	printf("\t\t\t��ѡ��(0~9):");
}
void Tools_Choose() //���߲˵�
{
 	int input;
 	system("cls"); //��ҳ 
 	Tools_menu(); //��ʾ�˵� 
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
			case 9:
				Tools_Group();
				break;
			default:break;
		}
		Tools_menu(); //�ٴ���ʾ�˵� 
		scanf("%d",&input);
	}
 }
//���ߣ� 
void Tools_S()
{
	puts("===================���������===================");
	int input;
	printf("\n1.Բ\n2.������\n3.������(���׹�ʽ)\n4.ƽ���ı���\n5.����\n");
	printf("��������Ҫ�����ͼ��(���)����:");
	scanf("%d",&input);
	
	double S,a,b,h,r,half; //������������ߡ��뾶�������ΰ��ܳ� 
	switch(input)
	{
		case 1:
			puts("������Բ�İ뾶:");
			scanf("%lf",&r);
			S = PAI*r*r;
			printf("��Բ�����Ϊ:\n%lf\n\n",S);
			break;
		case 2:
			puts("��ֱ����������εĵ׺͸�:");
			scanf("%lf %lf",&a,&h);
			S = a*h*0.5;
			printf("�������ε����Ϊ:\n%lf\n\n",S);
			break;
		case 3:
			puts("����С�������������ε�����:");
			scanf("%lf %lf %lf",&a,&b,&h);
			//���׹�ʽ 
			half=(a+b+h)/2;
			S = sqrt(half*(half-a)*(half-b)*(half-h));
			printf("�����������Ϊ:\n%lf\n\n",S);
			break;
		case 4:
			puts("����������ƽ���ı���(������)�ĵ׺͸�(���Ϳ�):");
			scanf("%lf %lf",&a,&b);
			S = a*b;
			printf("��ƽ���ı��ε����Ϊ:\n%lf\n\n",S);
			break;
		case 5:
			puts("��������������ε��ϵס��µ׺͸�:");
			scanf("%lf %lf %lf",&a,&b,&h);
			S = (a+b)*h*0.5;
			printf("�����ε����Ϊ:\n%lf\n\n",S);
			break;
		default:
		puts("[error_00x00000]������һ����ȷ����ţ�");
		break;
	}
	
	printf("\n");
	system("pause");
}
void Tools_V()
{
	puts("===================���������===================");
	int input;
	puts("\n������(���)��Ҫ�����ͼ��(���)��\n1.������\n2.����\n3.Բ����\n4.Բ׶��"); 
	scanf("%d",&input);
	
	double V; //��� 
	double a,b,h; //����� 
	double R; //����뾶 
	switch(input)
	{
		case 1:
			puts("�������볤������:");
			scanf("%lf %lf %lf",&a,&b,&h);
			V=a*b*h;
			printf("�������Ϊ: %lf",V);
			break;
		
		case 2:
			puts("����������İ뾶:");
			scanf("%lf",&R);
			V=(4.0/3.0)*PAI*R*R*R;
			printf("�������Ϊ��%lf",V);
			break;
		
		case 3:
			puts("����������Բ����İ뾶���ߣ�");
			scanf("%lf %lf",&R,&h);
			V=PAI*R*R*h;
			printf("�������Ϊ:%lf",V);
			break;
		
		case 4:
			puts("����������Բ׶�ĵ���뾶���ߣ�");
			scanf("%lf %lf",&R,&h);
			V=(1.0/3.0)*PAI*R*R*h;
			printf("�������Ϊ: %lf",V);
			break;
		
		default:
			puts("[error_00x00000]������һ����ȷ����ţ�");
			break;
	}
	printf("\n");
	system("pause");
}
void Tools_Random()
{
	puts("=================�����������=================");
	
	int a,i,l,max; //��������������������ޡ��������С���� 
	
	printf("\n��Ҫ�������ڵ������:");
	scanf("%d",&max);
	printf("\n��Ҫ���ٸ������:");
	scanf("%d",&l);
	//��ʼ���� 
	srand(time(0));
	for(i=1;i<=l;i++)
	{	
		a = rand() % max + 1;
		printf("��%d���������%d.\n",i,a);
	}
	
	printf("\n");
	system("pause");
} 
void Tools_AP()
{
	puts("===================�Ȳ��������===================");
	
	float x,y,z,i; //������ĩ��� 
	puts("\n��ֱ����룺\n����(���еĵ�һ��)\n����(ÿ����Ĳ�)\nĩ��(���е����һ��)\n");
	scanf("%f %f %f",&x,&y,&z);
	
	z=(z-x)/y+1.0; //������� 
	for(;z>=1;z--,x+=y)
	{
		i+=x; 
	}
	printf("���еȲ����еĺ�Ϊ:%.2f\n\n",i);
	system("pause");
}
void Tools_GS()
{
	puts("===================�ȱ��������===================");
	float x,y,z,i; //���ࡢ���ȡ�ĩ���
	 
	puts("\n��ֱ����룺\n����(���еĵ�һ��)\n���ȵķ���(ÿ����ıȵĵ���)\nĩ��(���е����һ��)\n");
	scanf("%f %f %f",&x,&y,&z);
	
	//��� 
	float count=x; 
	for(;z>=count;z/=y)
	{
		i+=x;
		x*=y;
	}
	printf("���еȱ����еĺ�Ϊ:%.2f\n\n",i); 
	
	system("pause");
 } 
void Tools_Pass()
{
	int input;
	do
	{
		puts("===================���ּ�/����===================");
		printf("1.����\n2.����\n0.����\n��֪������600���ֻ�����1200��ĸ\n��ѡ��:");
		scanf("%d",&input);
		getchar(); //���ػ�����
		 
		char c[1201]; //�޶�����
		
		//���ܡ����� 
		if(input==1)
		{ 
			printf("\n������Ҫ���ܵ�����:") ;
			gets(c);
	    	char *pc=c;
	    	while(*pc){
	        	*pc += 9;
	        	pc++;
	    	}
	    	printf("\n\n���ܺ������Ϊ:\n%s\n\n",c);
	    	
	    	system("pause");
		}
		else if(input==2)
		{
			printf("\n������Ҫ���ܵ�����:") ;
			gets(c);
	    	char *pc=c;
	    	while(*pc){
	        	*pc -= 9;
	        	pc++;
	    	}
	    	printf("\n\n���ܺ������Ϊ:\n%s\n\n",c);
	    	
	    	system("pause");
		} 
	}
	while(input==1 || input==2);
}
void Tools_gcd()
{
	puts("===================���Լ������С������===================");
	int a,b;
	printf("\n��ֱ�����������");
	scanf("%d %d",&a,&b);
	//�ݴ�a��b��ֵ 
	int a1,b1;
	a1 = a;
	b1 = b;
	//շת����� 
	int t;
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("\n���ǵ����Լ��Ϊ:%d\n",a);
	//�����С������ 
	int m;
	m = a1*b1/a;
	printf("���ǵ���С������Ϊ:%d\n",m);
	printf("\n");
	system("pause");
} 
void Tools_computer()
{
	int input;
	double a,b; //���� 
	double Add; //��� 
	
	do
	{
		puts("===================������===================");
		printf("\n1.�ӷ�\n2.����\n3.�˷�\n4.����\n5.�ݵ�����\n6.��������\n0.����\n");
		printf("��ѡ��:");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				printf("\n*��ʽ a+b *\n������:");
				scanf("%lf+%lf",&a,&b);
				Add = a+b;
				printf("\n\n��Ϊ:%lf\n",Add);
				break;
				
			case 2:
				printf("\n*��ʽ a-b *\n������:");
				scanf("%lf-%lf",&a,&b);
				Add = a-b;
				printf("\n\n��Ϊ:%lf\n",Add);
				break;
				
			case 3:
				printf("\n*��ʽ a*b *\n������:");
				scanf("%lf*%lf",&a,&b);
				Add = a*b;
				printf("\n\n��Ϊ:%lf\n",Add);
				break;
				
			case 4:
				printf("\n*��ʽ a/b *\n������:");
				scanf("%lf/%lf",&a,&b);
				Add = a/b;
				printf("\n\n��Ϊ:%lf\n",Add);
				break;
			case 5:
				printf("\n*��ʽ a^b (��Ϊa��b�η�)*\n������:");
				scanf("%lf^%lf",&a,&b);
				Add = pow(a,b);
				printf("\n\n���Ϊ:%lf\n",Add);
				break;
				
			case 6:
				printf("\n*��ʽ a>>b (��Ϊa��b�η���)*\n������:");
				scanf("%lf>>%lf",&a,&b);
				b = 1/b;
				Add = pow(a,b);
				printf("\n\n���Ϊ:%lf\n",Add);
				break;
			default:break;
		 } 
		 
		printf("\n");
		system("pause");
	}while(input>0&&input<7);
}
void Tools_Group()
{
	puts("===================���д���===================");
	int max;
	double a[300];
	//ѡ�����д�С 
	printf("\n����Ҫ������ٸ���(������300��)��");
	scanf("%d",&max);
	//��ÿ������ֵ 
	printf("\n��������%d������ֵ��\n",max);
	int count;
	for(count=0;count<max;count++)
	{
		printf(" a[%d] =",count);
		scanf("%lf",&a[count]);
	}
	//ð�ݷ����� 
	double iTemp;
	int i,j;
	for(i=1;i<max;i++)
	{
		for(j=(max-1);j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				iTemp = a[j-1];
				a[j-1] = a[j];
				a[j] = iTemp;
			}
		}
	}
	printf("\n��������Ϊ��\n");
	for(count=0;count<max;count++)
	{
		printf("��%d����%lf",count+1,a[count]);
		if((count+1)%2==0)
		{
			printf("\n");
		}
		else
		{
			printf("\t\t");
		}
	}
	printf("\n");
	//��ƽ����
	double Mean; 
	for(count=0;count<max;count++)
	{
		Mean += a[count];
	}
	Mean /= max*1.0;
	printf("��Щ����ƽ�����ǣ�%lf\n\n",Mean);
	//������ֵ 
	double midpoint;
	midpoint = (a[max-1] - a[0]) /2.0;
	printf("��Щ��������ֵ�ǣ�%lf\n\n",midpoint);
	//����λ��
	double median; 
	if(max%2==0)
	{
		median = (a[max/2] + a[max/2 - 1]) / 2;
	}
	else
	{
		median = a[(max-1)/2];
	}
	printf("��Щ������λ���ǣ�%lf\n\n",median);
	
	printf("\n");
	system("pause");
}

