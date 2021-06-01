//#include<stdio.h>
//#include<stdlib.h>
//
//#define  MAXLEN  128
//
//typedef  struct
//{
//	char  data;
//	int  lchild;
//	int  rchild;
//}  StaticLinkNode;
//
//typedef  struct
//{
//	StaticLinkNode  List[MAXLEN];
//	int  root;
//}  StaticLinkList;
//
//typedef  struct  bt
//{
//	char  data;
//	struct  bt* lchild;
//	struct  bt* rchild;
//}  BT;
//
//BT* StaticLinkList2BT(StaticLinkList* SLL, int  i)
//{
//	if (i != -1)
//	{
//		BT* T;
//		T = (BT*)malloc(sizeof(BT));
//		T->data = SLL->List[i].data;
//		T->lchild = StaticLinkList2BT(SLL, SLL->List[i].lchild);
//		T->rchild = StaticLinkList2BT(SLL, SLL->List[i].rchild);
//		return  T;
//	}
//	return  NULL;
//}
//
//void  PreOrderShow(BT* root, int  i)//�������Ϊ�����������root�����i
//{
//	if (root != NULL) {
//		printf("%c %d\n", root->data, i);  //����������ĸ��ڵ�Ͳ��
//		PreOrderShow(root->lchild, i + 1); //�ݹ��ټ���������һ��
//		PreOrderShow(root->rchild, i + 1); //�ݹ��ټ���������һ��
//	}
//}
//
//int  main(void)
//{
//	int  N = 0, i = 0;
//	StaticLinkList  SLL;
//	BT* T;
//	scanf("%d%d", &N, &SLL.root);
//	for (i = 0; i < N; i++)
//	{
//		getchar();
//		scanf("%c%d%d", &SLL.List[i].data, &SLL.List[i].lchild, &SLL.List[i].rchild);
//	}
//	T = StaticLinkList2BT(&SLL, SLL.root);//���Ծ�̬����洢������ת��Ϊ��������
//	PreOrderShow(T, 1);
//	return  0;
//}