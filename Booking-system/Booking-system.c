#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int sum=0,i,j,b;
char c;
void shuoming();
void syzxx();
void glydl();
void zhuce();
void denglu();
void glcaidan();
void luru();
void chakan();
void xiugai();
void shanchu();
void zengjia();
void gai();
void ykcaidan();
void cxxx();
void dp();
void tp(); 
void sousuo();
void hbhao();
void qszhan();
void zdzhan();
void main()
{
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color,FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	printf("\t\t\t\t\t****************************************\n\n");
	SetConsoleTextAttribute(color,FOREGROUND_INTENSITY|FOREGROUND_RED);
	printf("\t\t\t\t\t\t    ��ӭʹ�ö�Ʊϵͳ\n\n");
	SetConsoleTextAttribute(color,FOREGROUND_INTENSITY|FOREGROUND_BLUE);
	printf("\t\t\t\t\t****************************************\n\n\n\n\n");
	SetConsoleTextAttribute(color,FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);
	syzxx();
}

void syzxx(int a)
{
	printf("\t\t\t\t\t***************ʹ����ѡ��***************\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��01������Աʹ��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��02���˿�ʹ��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��03������˵��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��00���˳�����\n\n");
	Sleep(100);
	printf("\t\t\t\t\t***************ʹ����ѡ��***************\n\n\n\n\n");
	Sleep(300);
	printf("������ѡ��(��Ӧ�˵����):");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{
			system("cls");
			glydl();
			break;
		}
	case 2:
		{
			printf("���ڼ��س���.....");
			Sleep(5000);
			system("cls");
			ykcaidan();
			break;
		}
	case 3:
		{
			system("cls");
			shuoming();
		}
	case 0:exit(0);break;
	default:
		{
			printf("û�и�ѡ��,����������!");
			system("pause");
			syzxx();
			break;
		}
	}
}

void glydl(int a)
{
	printf("\t\t\t\t\t*************����Ա��½ѡ��*************\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��01������Աע��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��02������Ա��½\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��03��ʹ����ѡ��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��00���˳�����\n\n");
	Sleep(100);
	printf("\t\t\t\t\t*************����Ա��½ѡ��*************\n\n\n\n\n");
	Sleep(300);
	printf("������ѡ��(��Ӧ�˵����):");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{	
			scanf("%c",&c);
			zhuce();
			break;
		}
	case 2:
		{
			scanf("%c",&c);
			denglu();
			break;
		}
	case 3:
		{
			scanf("%c",&c);
			system("cls");
			syzxx();
			break;
		}
	case 0:exit(0);break;
	default:
		{
			printf("û�и�ѡ��,����������!");
			system("pause");
			scanf("%c",&c);
			glydl();
			break;
		}
	}
}
void zhuce(char c,char g)
{
	FILE *yh,*mm;
	char a[100],b[100];
	printf("*****************************ע�����******************************\n\n");
	yh=fopen("�û�ע��.dat","w");
	mm=fopen("�û�����.dat","w");
	printf("����������Ҫע����û���:");
	gets(a);
	fputs(a,yh);
	fclose(yh);
	printf("����������Ҫע���õ�����:");
	gets(b);
	fputs(b,mm);
	fclose(mm);
	printf("ע�����!�Ƿ�ѡ���½(Y/N):");
	scanf("%c",&c);
	scanf("%c",&g);
	if(c=='y'||c=='Y')
		denglu();
	else system("pause");
}

void denglu()
{
	FILE *p,*q;
	char yh[100];
	char mm[100];
	char c[100],d[100],e,f,g;
	if((p=fopen("�û�ע��.dat","r"))==NULL)
	{
		printf("�㻹δע��!\n");
		printf("�Ƿ�ע�����Ա(Y/N):");
		scanf("%c",&g);
		if(g=='y'||g=='Y')
		{
			system("cls");
			glydl();
		}
		else 
		{
			system("pause");
			exit(0);
		}
	}
	if((q=fopen("�û�����.dat","r"))==NULL)
	{
		printf("�㻹δע��!\n");
		printf("�Ƿ�ע�����Ա(Y/N):");
		scanf("%c",&c);
		if(c=='y'||c=='Y')
		{
			system("cls");
			glydl();
		}
		else 
		{
			system("pause");
			exit(0);
		}
	}
	fgets(yh,strlen(yh),p);
	fclose(p);
	fgets(mm,strlen(mm)-1,q);
	fclose(q);
	printf("*****************************��½����******************************\n\n");
	if(sum==3)
	{
		printf("���������������,�Ƿ��һ��û���������(Y/N):");
		scanf("%c",&e);
		scanf("%c",&f);
		if(e=='y'||e=='Y')
		{
			printf("���ڵȴ������....\n");
			Sleep(10000);
			printf("��½�û���Ϊ:%s\n",yh);
			printf("��½����Ϊ:%s\n",mm);
			sum=0;
			denglu();
		}
		else system("pause");
	}
	printf("�������û���:");
	gets(c);
	printf("����������:");
	gets(d);
	for(i=0;i<strlen(yh);i++)
	{
		if(c[i]==yh[i])continue;
		else 
		{
			printf("�û�������,���ص�½����!\n");
			sum++;
			denglu();
		}
	}
	for(j=0;j<strlen(mm);j++)
	{
		if(d[j]==mm[j])continue;
		else 
		{
			printf("�������,���ص�½����!\n");
			sum++;
			denglu();
		}
	}
	if(i==strlen(yh)&&j==strlen(mm))
	{
		if(strlen(c)==strlen(yh)&&strlen(d)==strlen(mm))
		{
			printf("��½�ɹ�!\n");
			printf("���ڼ��س���.....");
			Sleep(5000);
			system("cls");
			glcaidan();
		}
		else if(strlen(c)>strlen(yh))
		{
			printf("�û�������,���ص�½����!\n");
			sum++;
			denglu();
		}
		else if(strlen(d)>strlen(mm))
		{
			printf("�������,���ص�½����!\n");
			sum++;
			denglu();
		}
	}
}

void glcaidan(int a,char c)
{
	printf("\t\t\t\t\t******************����Ա�˵�******************\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��01��¼�뺽����Ϣ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��02���鿴������Ϣ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��03���޸ĺ�������\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��04������ʹ����ѡ��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��00���˳�����\n\n");
	Sleep(100);
	printf("\t\t\t\t\t******************����Ա�˵�******************\n\n\n\n\n");
	Sleep(300);
	printf("������ѡ��(��Ӧ�˵����):");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{	scanf("%c",&c);
			luru();
			break;
		}
	case 2:
		{	
			scanf("%c",&c);
			chakan();
			break;
		}
	case 3:
		{	
			scanf("%c",&c);
			system("cls");
			xiugai();
			break;
		}
	case 4:
		{
			scanf("%c",&c);
			system("cls");
			syzxx();
			break;
		}
	case 0:exit(0);break;
	default:
		{
			printf("û�и�ѡ��,����������!");
			system("pause");
			scanf("%c",&c);
			glcaidan();
			break;
		}
	}
}

void xiugai(int a)
{
	printf("\t\t\t\t\t****************�޸ĺ�����Ϣ****************\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��01�����Ӻ�����Ϣ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��02��ɾ��������Ϣ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��03���޸ĺ�����Ϣ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��04�����ع���Աѡ��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��00���˳�����\n\n");
	Sleep(100);
	printf("\t\t\t\t\t****************�޸ĺ�����Ϣ****************\n\n\n\n\n");
	Sleep(300);
	printf("������ѡ��(��Ӧ�˵����):");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{
			scanf("%c",&c);
		 	zengjia();
			break;
		}
	case 2:
		{
			scanf("%c",&c);
			shanchu();
			break;
		}
	case 3:
		{
			scanf("%c",&c);
			gai();
			break;
		}
	case 4:
		{
			scanf("%c",&c);
			system("cls");
			glcaidan();
			break;
		}
	case 0:exit(0);break;
	default:
		{
			printf("û�д�ѡ��,������ѡ��!");
			system("pause");
			system("cls");
			xiugai();
		}
	}
}

void ykcaidan(int a,char c)
{
	printf("\t\t\t\t\t****************�˿Ͳ˵�****************\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��01����ѯ������Ϣ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��02������\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��03����Ʊ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��04����Ʊ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��05������ʹ����ѡ��\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��00���˳�����\n\n");
	Sleep(100);
	printf("\t\t\t\t\t****************�˿Ͳ˵�****************\n\n\n\n\n");
	Sleep(300);
	printf("������ѡ��(��Ӧ�˵����):");
	scanf("%d",&a);
	switch(a)
	{
	case 1:cxxx();break;
	case 2:
	{
		system("cls");
		sousuo();
		break;
	}
	case 3:dp();break;
	case 4:tp();break;
	case 5:
		{
			system("cls");
			syzxx();
			break;
		}
	case 0:exit(0);break;
	default:
		{
			scanf("%c",&c);
			printf("û�и�ѡ��,����������!");
			system("pause");
			ykcaidan();
			break;
		}
	}
}

void luru(char c)
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r+"))!=NULL)
	{
		fread(&hangban[0],sizeof(struct hb),1,p);
		if(hangban[0].number==0)
		{
			printf("������ϢΪ��,��¼�뺽����Ϣ!\n");
			fclose(p);
			system("pause");
		}
		else
		{
			printf("���к�����Ϣ,�Ƿ�����¼��(Y/N):\n");
			scanf("%c",&c);
			if(c=='y'||c=='Y');
			else 
			{
				system("cls");
				glcaidan();
			}
		}
	}
	p=fopen("������Ϣ.dat","w");
	for(i=0;i<=99;i++)
	{
		printf("��¼�뺽���(����)����ʼվ���յ�վ���ǻ�ʱ�䡢��Ʊ��(ÿ�����ݼ��ÿո����):\n");
		scanf("%d%s%s%s%d",&hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,&hangban[i].tickey);
		hangban[i].xuhao=i+1;
		fwrite(&hangban[i],sizeof(struct hb),1,p);
		printf("�Ƿ����¼��(Y/N):");
		scanf(" %c",&c);
		if(c=='y'||c=='Y')continue;
		else 
		{
			system("cls");
			fclose(p);
			glcaidan();
		}
	}
}

void chakan(char c)
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r"))==NULL)
	{
		printf("û�и��ļ�,�Ƿ�¼����Ϣ�����ļ�(Y/N):");
		scanf("%c",&c);
		if(c=='y'||c=='Y')luru();
		else 
		{
			system("cls");
			glcaidan();
		}
	}
	p=fopen("������Ϣ.dat","r+");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	fclose(p);
	printf("\n\n");
	printf("�Ƿ񷵻ع���Ա�˵�(Y/N):");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		system("cls");
		glcaidan();
	}
	else 
	{
		printf("�����˳�����!\n");
		system("pause");
		exit(0);
	}
}

void shanchu()
{
	FILE *p;
	int sign=-1;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r+"))==NULL)
	{
		printf("û���ҵ�¼���ļ�,�Ƿ�¼�뺽����Ϣ(Y/N):");
		scanf("%c",&c);
		if(c=='y'||c=='Y')luru();
		else 
		{
			system("cls");
			fclose(p);
			glcaidan();
		}
	}
	p=fopen("������Ϣ.dat","r+");
	fread(&hangban[0],sizeof(struct hb),1,p);
	if(hangban[0].number==0)
	{
		printf("û�к�����Ϣ,�����޸�!\n");
		printf("�Ƿ�¼�뺽����Ϣ(Y/N):\n");
		scanf("%c",&c);
		if(c=='y'||c=='Y')luru();
		else 
		{
			system("cls");
			fclose(p);
			xiugai();
		}
	}
	fclose(p);
	p=fopen("������Ϣ.dat","r+");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	fclose(p);
	printf("������Ҫɾ���ĺ�����Ϣ(���뺽���):");
	scanf("%d",&j);
	p=fopen("������Ϣ.dat","r+");
	for(b=0;b<=99;b++)
	{
		fread(&hangban[b],sizeof(struct hb),1,p);
		if(hangban[b].number==0)break;
	}
	fclose(p);
	p=fopen("������Ϣ.dat","r+");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(j==hangban[i].number)
		{
			fseek(p,sign*sizeof(struct hb),1);
			for(j=i+1;j<=b;j++)
			{
				fwrite(&hangban[j],sizeof(struct hb),1,p);
			}
			fclose(p);
			break;
		}
		else if(i==99)
		{
			printf("������Ϣ��û�ж�Ӧ�ĺ����,������ѡ��!\n\n");
			shanchu();
		}
	}
	printf("ɾ�����,�Ƿ�鿴������Ϣ(Y/N):\n");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')chakan();
	else 
	{
		system("cls");
		xiugai();
	}
}

void zengjia()
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","rb+"))==NULL)
	{
		printf("û���ҵ�¼���ļ�,�Ƿ�¼�뺽����Ϣ(Y/N):");
		scanf("%c",&c);
		if(c=='y'||c=='Y')luru();
		else 
		{
			system("cls");
			xiugai();
		}
	}
	p=fopen("������Ϣ.dat","r+");
	fread(&hangban[0],sizeof(struct hb),1,p);
	if(hangban[0].number==0)
	{
		printf("û�к�����Ϣ,�����޸�!\n");
		printf("�Ƿ���������Ϣ(Y/N):\n");
		scanf("%c",&c);
		if(c=='y'||c=='Y');
		else 
		{
			system("cls");
			xiugai();
		}
	}
	fclose(p);
	p=fopen("������Ϣ.dat","r+");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	printf("������µĺ����(����)����ʼվ���յ�վ���ǻ�ʱ�䡢��Ʊ��(ÿ�����ݼ�ո����):\n");
	scanf("%d%s%s%s%d",&hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,&hangban[i].tickey);
	hangban[i].xuhao=i+1;
	fseek(p,(hangban[i].xuhao-1)*sizeof(struct hb),0);
	fwrite(&hangban[i],sizeof(struct hb),1,p);
	fclose(p);
	printf("�������,�Ƿ�鿴������Ϣ(Y/N):\n");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')chakan();
	else 
	{
		system("cls");
		xiugai();
	}
}
	
void gai(char c)
{
	FILE *p;
	int sign=-1;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r+"))==NULL)
	{
		printf("û���ҵ�¼���ļ�,�Ƿ�¼�뺽����Ϣ(Y/N):");
		scanf("%c",&c);
		if(c=='y'||c=='Y')luru();
		else 
		{
			system("cls");
			fclose(p);
			xiugai();
		}
	}
	p=fopen("������Ϣ.dat","r+");
	fread(&hangban[0],sizeof(struct hb),1,p);
	if(hangban[0].number==0)
	{
		printf("û�к�����Ϣ,�����޸�!\n");
		printf("�Ƿ�¼�뺽����Ϣ(Y/N):\n");
		scanf("%c",&c);
		if(c=='y'||c=='Y')luru();
		else 
		{
			system("cls");
			xiugai();
		}
	}
	fclose(p);
	p=fopen("������Ϣ.dat","r+");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	fclose(p);
	printf("������Ҫ�޸ĵĺ���(���뺽���):");
	scanf("%d",&j);
	p=fopen("������Ϣ.dat","r+");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(j==hangban[i].number)break;
		else if(i==99)
		{
			printf("������Ϣ��û�ж�Ӧ�ĺ����,������ѡ��!\n");
			xiugai();
		}
	}
	fseek(p,sign*sizeof(struct hb),1);
	printf("������¼���������(����š���ʼվ���յ�վ���ǻ�ʱ�䡢Ʊ��,�����ݼ��ÿո����):\n");
	scanf("%d%s%s%s%d",&hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,&hangban[i].tickey);
	fwrite(&hangban[i],sizeof(struct hb),1,p);
	fclose(p);
	printf("�޸����,�Ƿ�鿴������Ϣ(Y/N):\n");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')chakan();
	else 
	{
		system("cls");
		xiugai();
	}
}

void cxxx(char c)
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r"))==NULL)
	{
		printf("Ŀǰ��δ�к�����Ϣ,�����˳�����!\n");
		system("pause");
		exit(0);
	}
	p=fopen("������Ϣ.dat","r+");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=100;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	fclose(p);
	printf("\n\n");
	printf("�Ƿ񷵻ع˿Ͳ˵�(Y/N):");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		system("cls");
		ykcaidan();
	}
	else
	{
		printf("�����˳�����!\n");
		system("pause");
		exit(0);
	}
}

void dp(int a,char c)
{
	FILE *p;
	int sign=-1;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r+"))==NULL)
	{
		printf("Ŀǰ��δ�к�����Ϣ,�������ع˿ͽ���!\n");
		system("pause");
		ykcaidan();
		exit(0);
	}
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=100;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	fclose(p);
	p=fopen("������Ϣ.dat","r+");
	printf("��ѡ���㶩Ʊ����Ӧ�ĺ����:");
	scanf("%d",&a);
	printf("\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(a==hangban[i].number)break;
		else if(i==99||a==0)
		{
			printf("������Ϣ��û�ж�Ӧ�ĺ����,�����¶�Ʊ!\n");
			dp();
		}
	}
	printf("���ʽ:��01��֧����\n         ��02��΢��\n         ��03�����п�\n         ��00��ȡ������\n\n");
	printf("��ѡ��:");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		{
			printf("���ڸ�����.....\n");
			Sleep(3000);
			printf("ʹ��֧��������ɹ�!\n");
			break;
		}
	case 2:
		{
			printf("���ڸ�����.....\n");
			Sleep(3000);
			printf("ʹ��΢�Ÿ���ɹ�!\n");
			break;
		}
	case 3:
		{
			printf("���ڸ�����.....\n");
			Sleep(3000);
			printf("ʹ�����п�����ɹ�!\n");
			break;
		}
	case 0:
		{
			printf("ȡ������,�Ƿ񷵻ع˿Ͳ˵�(Y/N):\n");
			scanf("%c",&c);
			if(c=='y'||c=='Y')ykcaidan();
			else
			{
				printf("�����˳�����!\n");
				system("pause");
				exit(0);
			}
		}
	default:
		{
			printf("û�иø��ʽ,����ȡ��!\n");
			system("pause");
			dp();
		}
	}		
	hangban[i].tickey-=1;
	fseek(p,sign*sizeof(struct hb),1);
	fwrite(&hangban[i],sizeof(struct hb),1,p);
	fclose(p);
	printf("��Ʊ���,�Ƿ񷵻ز˵�(Y/N):");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		system("cls");
		ykcaidan();
	}
	else 
	{
		printf("�����˳�����!\n");
		system("pause");
		exit(0);
	}
}

void tp(int a,char c)
{
	FILE *p;
	int sign=-1;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r+"))==NULL)
	{
		printf("Ŀǰ��δ�к�����Ϣ,�������ع˿ͽ���!\n");
		system("pause");
		ykcaidan();
		exit(0);
	}
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=100;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)break;
		printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
	}
	printf("**************************������Ϣ**************************\n\n");
	fclose(p);
	p=fopen("������Ϣ.dat","r+");
	printf("��ѡ������Ʊ����Ӧ�ĺ����:");
	scanf("%d",&a);
	for(i=0;i<=9;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(a==hangban[i].number)break;
		else if(i==99)
		{
			printf("������Ϣ��û�ж�Ӧ�ĺ����,�����¶�Ʊ!\n");
			tp();
		}
	}
	++hangban[i].tickey;
	fseek(p,sign*sizeof(struct hb),1);
	fwrite(&hangban[i],sizeof(struct hb),1,p);
	fclose(p);
	printf("������Ʊ��.....\n");
	Sleep(3000);
	fclose(p);
	printf("��Ʊ���,�˿������15���ڷ�����������п���!\n");
	printf("�Ƿ񷵻ز˵�(Y/N)");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		system("cls");
		ykcaidan();
	}
	else 
	{
		printf("�����˳�����!\n");
		system("pause");
		exit(0);
	}
}

void shuoming()
{
	printf("\t\t************************************����˵��************************************\n\n");
	Sleep(100);
	printf("\t\t\t   ��1����ע����������,��������������������ܻᵼ�³������!\n\n");
	Sleep(100);
	printf("\t\t\t   ��2��������Ϣ��¼����Ҫͨ������Ա��½���ܹ�����(����Ų�����50000)\n\n");
	Sleep(100);
	printf("\t\t\t   ��3����ʹ�ù˿�ѡ��ʱ,���û�к�����Ϣ,ѡ������ѡ����˳�����!\n\n\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t\t\t\t     ����Ա:������\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t\t\t\t     �����ο�,����Ϯ!\n\n");
	Sleep(100);
	printf("\t\t************************************����˵��************************************\n\n\n\n\n");
	Sleep(300);
	printf("�Ƿ񷵻�ʹ����ѡ�����(Y/N):");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		system("cls");
		syzxx();
	}
	else
	{
		printf("�����˳�����!\n");
		system("pause");
		exit(0);
	}
}

void sousuo(int a,char d[20])
{
	printf("\t\t\t\t\t******************����******************\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��01�������\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��02����ʼվ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��03���յ�վ\n\n");
	Sleep(100);
	printf("\t\t\t\t\t\t  ��00�����ع˿ͽ���\n\n");
	Sleep(100);
	printf("\t\t\t\t\t****************************************\n\n\n\n\n");
	Sleep(300);
	printf("��ѡ��������ʽ:");
	scanf("%d",&a);
	switch(a)
	{
	case 1:hbhao();break;
	case 2:qszhan();break;
	case 3:zdzhan();break;
	case 0:
		{
			system("cls");
			ykcaidan();
			break;
		}
	default:
		{
			printf("û�д�ѡ��,������ѡ��!");
			gets(d);
			system("pause");
			system("cls");
			sousuo();
		}
	}
}

void hbhao(int a)
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r"))==NULL)
	{
		printf("Ŀǰ��δ�к�����Ϣ,�����˳�����!\n");
		system("pause");
		exit(0);
	}
	p=fopen("������Ϣ.dat","r+");
	printf("������Ҫ�ҵĺ����:");
	scanf("%d",&a);
	printf("\n");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(a==hangban[i].number)
		{
			printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
			printf("���г������������,�Ƿ񷵻���������(Y/N):");
			scanf(" %c",&c);
			if(c=='y'||c=='Y')
			{
				fclose(p);
				system("cls");
				sousuo();
			}
			else
			{
				printf("�����˳�����!\n");
				system("pause");
				exit(0);
			}
		}
		else if(i==99)
		{
			printf("���г������������,�Ƿ񷵻���������(Y/N):");
			scanf(" %c",&c);
			if(c=='y'||c=='Y')
			{
				fclose(p);
				system("cls");
				sousuo();
			}
			else
			{
				printf("�����˳�����!\n");
				system("pause");
				exit(0);
			}
		}
	}
}

void qszhan(char a[20])
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r"))==NULL)
	{
		printf("Ŀǰ��δ�к�����Ϣ,�����˳�����!\n");
		system("pause");
		exit(0);
	}
	p=fopen("������Ϣ.dat","r+");
	printf("������Ҫ�ҵ���ʼվ:");
	scanf("%c",&c);
	gets(a);
	printf("\n");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)
		{
			printf("���г������������,�Ƿ񷵻���������(Y/N):");
			scanf("%c",&c);
			if(c=='y'||c=='Y')
			{
				fclose(p);
				system("cls");
				sousuo();
			}
			else
			{
				printf("�����˳�����!\n");
				system("pause");
				fclose(p);
				exit(0);
			}
		}
		for(j=0;j<20;j++)
		{
			if(a[j]==hangban[i].start[j]&&strlen(a)==strlen(hangban[i].start))
			{
				if(j==strlen(hangban[i].start)-1)
				{
					printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
					break;
				}
			}
		}
	}
}



void zdzhan(char a[20])
{
	FILE *p;
	struct hb
	{
		int number;
		char start[20];
		char end[20];
		char time[30];
		int tickey;
		int xuhao;
	}hangban[100]={0};
	if((p=fopen("������Ϣ.dat","r"))==NULL)
	{
		printf("Ŀǰ��δ�к�����Ϣ,�����˳�����!\n");
		system("pause");
		exit(0);
	}
	p=fopen("������Ϣ.dat","r+");
	printf("������Ҫ�ҵ��յ�վ:");
	scanf("%c",&c);
	gets(a);
	printf("\n");
	printf("**************************������Ϣ**************************\n\n");
	for(i=0;i<=99;i++)
	{
		fread(&hangban[i],sizeof(struct hb),1,p);
		if(hangban[i].number==0)
		{
			printf("���г������������,�Ƿ񷵻���������(Y/N):");
			scanf("%c",&c);
			if(c=='y'||c=='Y')
			{
				fclose(p);
				system("cls");
				sousuo();
			}
			else
			{
				printf("�����˳�����!\n");
				system("pause");
				fclose(p);
				exit(0);
			}
		}
		for(j=0;j<20;j++)
		{
			if(a[j]==hangban[i].end[j]&&strlen(a)==strlen(hangban[i].end))
			{
				if(j==strlen(hangban[i].end)-1)
				{
					printf("%d:�����:%5d ��ʼվ:%5s �յ�վ:%5s �ǻ�ʱ��:%5s ��Ʊ��:%5d\n\n",i+1,hangban[i].number,hangban[i].start,hangban[i].end,hangban[i].time,hangban[i].tickey);
					break;
				}
			}
		}
	}
}

	






	





