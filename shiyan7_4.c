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
//void  PreOrderShow(BT* root, int  i)//输入参数为二叉树根结点root，层号i
//{
//	if (root != NULL) {
//		printf("%c %d\n", root->data, i);  //输出二叉树的根节点和层号
//		PreOrderShow(root->lchild, i + 1); //递归再加深左子树一层
//		PreOrderShow(root->rchild, i + 1); //递归再加深右子树一层
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
//	T = StaticLinkList2BT(&SLL, SLL.root);//将以静态链表存储的链表转化为二叉链表
//	PreOrderShow(T, 1);
//	return  0;
//}