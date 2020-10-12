////单链表前插
//#include<stdio.h>
//#include<stdlib.h>
//#include <cstddef>
//#include<malloc.h>
//
////定义结构体、声明新定义的数据类型
//typedef struct Node* PNode;
//typedef struct Node* LinkList;
//typedef int DataType;
//int InsertPost_link(LinkList llist,DataType x, DataType y);	//待填写函数声明
//struct Node {
//	DataType	  data;
//	struct Node* next;
//};
//
////建立空链表
//LinkList SetNullList_Link()
//{
//	LinkList head = (LinkList)malloc(sizeof(struct Node));
//	if (head != NULL) head->next = NULL;
//	else printf("alloc failure");
//	return head;
//}
////判断是否为空表
//int IsNull_Link(LinkList llist)
//{
//	return(llist->next == NULL);
//}
////建立链表
//void CreateList(struct Node* head)
//{
//	PNode p = NULL;  int data = 0;
//	printf("please input data:\n");
//	scanf_s("%d", &data);
//	while (data != -1) {
//		p = (struct Node*)malloc(sizeof(struct Node));
//		p->data = data;
//		p->next = head->next;
//		head->next = p;
//		printf("please input data:\n");
//		scanf_s("%d", &data);
//	}
//	return;
//}
////输出链表数据域的内容
//void print(LinkList head)
//{
//	PNode  p = head->next;
//	while (p) {
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	return;
//}
////释放之前申请的空间
//void DestoryList_Link(LinkList head)
//{
//	PNode  pre = head; PNode p = pre->next;
//	while (p) {
//		free(pre);
//		pre = p;
//		p = pre->next;
//	}
//	free(pre);
//}
//
//int main()
//{
//	LinkList head = NULL;
//	PNode p = NULL;
//	int searchdata, deldata = 0, insertdata;
//	head = SetNullList_Link();
//	CreateList(head);
//	printf("please input searchdata and isnertdata:\n");
//	scanf_s("%d %d", &searchdata, &insertdata);
//	InsertPost_link(head, searchdata, insertdata);
//	print(head);
//
//	DestoryList_Link(head);
//	return 0;
//}
//
///*请在这里填写拆入函数*/
////其中 llist是操作的链表，x是待插入元素y的前驱节点元素，y是待插入的元素
//int InsertPost_link(LinkList llist, DataType x, DataType y)
//{
//	LinkList p = NULL;
//	LinkList q = NULL;
//	p = (LinkList)malloc(sizeof(struct Node));
//	q = (LinkList)malloc(sizeof(struct Node));
//	if (p == NULL)
//	{
//		printf("Alloc failure!\n");
//		return 0;
//	}
//	else if (q == NULL)
//	{
//		printf("Alloc failure!\n");
//		return 0;
//	}
//	p = llist;
//	//找到目标前驱元素并插入
//	while (p != NULL)
//	{
//		if (p->data == x)
//		{
//			q->data = y;
//			q->next = p->next;
//			p->next = q;
//			return 1;
//		}
//		else {
//			p = p->next;
//			}
//	}
//	printf("not exist data %d\n", x);
//	return 0;
//}




////单链表删除
//#include<stdio.h>
//#include<stdlib.h>

//
//typedef struct Node* PNode;
//typedef struct Node* LinkList;
//typedef int DataType;
//void DelNode_Link(LinkList head, DataType deldata);
//
//struct Node {
//	DataType	  data;
//	struct Node* next;
//};
//
//LinkList SetNullList_Link()
//{
//	LinkList head = (LinkList)malloc(sizeof(struct Node));
//	if (head != NULL) head->next = NULL;
//	else printf("alloc failure");
//	return head;
//}
//
//int IsNull_Link(LinkList llist)
//{
//	return(llist->next == NULL);
//}
//
//void CreateList(struct Node* head)
//{
//	PNode p = NULL;
//	PNode q = head; int data;
//	printf("Please input data:\n");
//	scanf_s("%d", &data);
//	while (data != -1)
//	{
//		p = (struct Node*)malloc(sizeof(struct Node));
//		p->data = data;
//		p->next = NULL;
//		q->next = p;
//		q = p;
//		scanf_s("%d", &data);
//	}
//}
//void print(LinkList head)
//{
//	PNode  p = head->next;
//	while (p) {
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//void DestoryList_Link(LinkList head)
//{
//	PNode  pre = head;
//	PNode p = pre->next;
//	while (p)
//	{
//		free(pre);
//		pre = p;
//		p = pre->next;
//	}
//	free(pre);
//}
//
//int main()
//{
//	LinkList head = NULL;
//	PNode p = NULL;
//	int deldata;
//	head = SetNullList_Link();
//	CreateList(head);
//	printf("Please input the num you want to delete:\n");
//	scanf_s("%d", &deldata);
//	DelNode_Link(head, deldata);
//	print(head);
//	DestoryList_Link(head);
//	return 0;
//}
///* 请在这里填写答案 */
//void DelNode_Link(LinkList head, DataType deldata)
//{
//	LinkList p = NULL;
//	LinkList pre = NULL;
//	p = (LinkList)malloc(sizeof(struct Node));
//	pre = (LinkList)malloc(sizeof(struct Node));
//	if (p == NULL)
//	{
//		printf("Alloc failure!\n");
//		return ;
//	}
//	else if (pre == NULL)
//	{
//		printf("Alloc failure!\n");
//		return ;
//	}
//	pre = head;
//	p = head->next;
//	if (pre->data == deldata)
//	{
//		free(pre);
//		return ;
//	}
//	while (p != NULL)
//	{
//		if (p->data == deldata)
//		{
//			pre->next = p->next;
//			free(p);
//			return;
//		}
//		else {
//			pre = p;
//			p = p->next;
//		}
//	}
//	printf("not exist %d\n", deldata);
//	return ;
//}



////单链表-找最大值放在最后
//#include<stdio.h>
//#include<stdlib.h> 
//
////重定义类型和声明函数
//typedef struct Node* PNode;
//typedef struct Node* LinkList;
//typedef int datatype;
//struct Node
//{
//    datatype      data;
//    struct Node* next;
//};
//void movemaxtotail(LinkList h);
//void delnode_link(LinkList head, int deldata);
//
//LinkList setnulllist_link()
//{
//    LinkList head = (LinkList)malloc(sizeof(struct Node));
//    if (head != NULL) head->next = NULL;
//    else printf("alloc failure");
//    return head;
//}
//
//void createlist_tail(struct Node* head)
//{
//    PNode p = NULL;
//    PNode q = head;
//    datatype data;
//    printf("please input data you want to add:\n");
//    scanf_s("%d", &data);
//    while (data != -1)
//    {
//        p = (struct Node*)malloc(sizeof(struct Node));
//        p->data = data;
//        p->next = NULL;
//        q->next = p;
//        q = p;
//        scanf_s("%d", &data);
//    }
//    return;
//}
//
//void print(LinkList head)
//{
//    PNode  p = head->next;
//    while (p != NULL)
//    {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    return;
//}
//void destorylist_link(LinkList head)
//{
//    PNode  pre = head;
//    PNode p = pre->next;
//    while (p)
//    {
//        free(pre);
//        pre = p;
//        p = pre->next;
//    }
//    free(pre);
//    return;
//}
//
//
//
//int main()
//{
//    LinkList head = NULL;
//    head = setnulllist_link();
//    createlist_tail(head);
//    movemaxtotail(head);
//    print(head);
//    destorylist_link(head);
//    return 0;
//}
//
//void movemaxtotail(LinkList h)
//{
//  int maxn = 0;
//  LinkList p = NULL;
//	LinkList pre = NULL;
//  LinkList q = NULL;
//	p = (LinkList)malloc(sizeof(struct Node));
//	pre = (LinkList)malloc(sizeof(struct Node));
//    q = (LinkList)malloc(sizeof(struct Node));
//	if (p == NULL)
//	{
//		printf("alloc failure!\n");
//		return ;
//	}
//	else if (pre == NULL)
//	{
//		printf("alloc failure!\n");
//		return ;
//	}
//    if (q == NULL)
//    {
//        printf("alloc failure!\n");
//        return;
//    }
//    pre = h;
//    p = h->next;
//    while (p != NULL)
//    {
//        if (pre->data > maxn)
//        {
//            maxn = pre->data;//找到最大的数
//        }
//        else {
//            pre = p;
//            p = p->next;
//        }
//    }
//    if (pre->data > maxn)
//    {
//        maxn = pre->data;//找到最大的数
//        return;
//    }
//    q = pre;//记录尾结点
//    pre = h;
//    p = h->next;
//    while (p != NULL)
//    {
//        if (p->data == maxn)
//        {
//            pre->next = p->next;
//            q->next = p;
//            p->next = NULL;
//            break;
//        }
//        else {
//            pre = p;
//            p = p->next;
//        }
//    }
//    return;
//}



// //单链表合并
//#include<stdio.h>
//#include<stdlib.h>
//#include <malloc.h>
//
//typedef int datatype;
//typedef struct Node node;
//typedef struct Node* PNode;
//typedef struct Node* LinkList;
//struct Node
//{
//	datatype data;
//	struct Node* next;
//};
//
//PNode mergendeduplicatelist(PNode tail1, PNode tail2);
//
//PNode createemptylinkedlist()
//{
//	PNode current;
//	current = (PNode)malloc(sizeof(Node));
//	current->next = NULL;
//	current->data = -1;
//	return current;
//}
//
//PNode buildCircularLinkedList(int n, PNode tail)
//{
//	PNode current = NULL, prev;
//	prev = tail;
//	for (int i = 0; i < n; i++)
//	{
//		current = (PNode)malloc(sizeof(Node));
//		current->next = NULL;
//		scanf_s("%d", &current->data);
//		prev->next = current;
//		prev = current;
//	}
//	current->next = tail->next;
//	tail->next = current;
//	return tail;
//}
//
//void printcircularlinkedlist(PNode tail)
//{
//	PNode current, last;
//	last = tail->next;
//	current = last->next;
//	do
//	{
//		printf("%d ", current->data);
//		current = current->next;
//	} while (current != last->next);
//}
//
//int main()
//{
//	PNode list1 = 0, list2 = 0;
//	int list1_number, list2_number;
//	list1 = createemptylinkedlist();
//	list2 = createemptylinkedlist();
//	printf("please input lenth of list1:\n");
//	scanf_s("%d", &list1_number);
//	buildCircularLinkedList(list1_number, list1);
//	printf("please input lenth of list2:\n");
//	scanf_s("%d", &list2_number);
//	buildCircularLinkedList(list2_number, list2);
//	list1 = mergendeduplicatelist(list1, list2);
//	printcircularlinkedlist(list1);
//	return 0;
//}
//
///* 请在这里填写答案 */
//PNode mergendeduplicatelist(PNode tail1, PNode tail2)
//{
//	int i = 0, temp = 0, n = 1;
//	/*打印函数中的算法
//	PNode current, last;
//	last = tail1->next;
//	current = last->next;
//	do
//	{
//		printf("%d ", current->data);
//		current = current->next;
//	} while (current != last->next);*/
//	PNode pre = NULL, p = NULL, qre = NULL, q = NULL;
//	pre = tail1->next;
//	p = pre->next;
//	qre = tail2->next;
//	q = qre->next;
//	/*//用于查看链表tail1的data
//	printf("tail1->data=%d\n", tail1->data);
//	printf("pre->data=%d\n", pre->data);
//	printf("p->data=%d\n", p->data);
//	printf("p->data=%d\n", (p->next)->data);
//	printf("p->data=%d\n", ((p->next)->next)->data);
//	printf("p->data=%d\n", (((p->next)->next)->next)->data);*/
//	tail2->next = NULL;
//	free(tail2);
//	pre->next = q;
//	qre->next = p;
//	tail1->next = qre;
//	pre = qre;		//记录最后一个结点
//	q = p;			//记录第一个结点
//	//获取链表长度
//	while (p->next != q)
//	{
//		n++;
//		p = p->next;
//	}
//	p = q;
//	q = p->next;
//	//排序(有点小问题，只能排个大概)
//	for ( i = 0; i <= n; i++)
//	{
//		while (p != pre)
//		{
//			if (p->data > (p->next)->data)
//			{
//				temp = p->data;
//				p->data = (p->next)->data;
//
//			}
//			else 
//			{
//				p = p->next;
//			}
//		}
//	}
//	//去除重复、不对劲的结点
//	p = pre->next;
//	q = p->next;
//	while (p->next != pre)
//	{
//		if (p->data == q->data||p->data >q->data)
//		{
//			p->next = q->next;
//			free(q);
//			q = p->next;
//		}
//		else {
//			p = q;
//			q = q->next;
//		}
//	}
//	return tail1;
//}

////实现对单循环链表中奇数和偶数结点的移动
//#include<stdio.h>
//#include<stdlib.h>
//#include <cstddef>
//
//typedef int DataType;
//typedef struct Node* PNode;
//typedef struct Node* LinkList;
//struct Node {
//	DataType	  data;
//	struct Node* next;
//};
//PNode  Move_Odd_Even(LinkList tail);
//
//LinkList CreateList_Tail_loop()
//{
//	LinkList head = (LinkList)malloc(sizeof(struct Node));
//	PNode cur = NULL;
//	PNode tail = head;
//	DataType data;
//	printf("please input some nums:\n");
//	scanf_s("%d", &data);
//	while (data != -1)
//	{
//		cur = (struct Node*)malloc(sizeof(struct Node));
//		cur->data = data;
//		tail->next = cur;
//		tail = cur;
//		scanf_s("%d", &data);
//	}
//	tail->next = head;
//	return tail;
//}
//
//void print(LinkList tail)
//{
//	PNode  head = tail->next;
//	PNode p = head->next;
//	while (p != head)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//
//void DestoryList_Link(LinkList tail)
//{
//	PNode pre = tail->next;
//	PNode p = pre->next;
//	while (p != tail)
//	{
//		free(pre);
//		pre = p;
//		p = pre->next;
//	}
//	free(pre);
//	free(tail);
//}
//
//int main()
//{
//	LinkList tail = NULL;
//	LinkList p = NULL;
//	tail = CreateList_Tail_loop();
//	p = Move_Odd_Even(tail);
//	print(p);
//	DestoryList_Link(tail);
//	return 0;
//}
///* 请在这里填写答案 */
//PNode  Move_Odd_Even(LinkList tail)
//{
//	PNode last = NULL, p = NULL, pre = NULL, temp = NULL;
//	int flag = 1;
//	last = tail;
//	temp = tail->next;
//	pre = tail->next;
//	p = (tail->next)->next;
//	tail->next = NULL;
//	////查看链表情况
//	//printf("tail->data=%d\n",tail->data);
//	//printf("pre->data=%d\n",pre->data);
//	//printf("p->data=%d\n", p->data);
//	//第一个结点的data为奇数时
//	while (flag)
//	{
//		if (p == tail)
//		{
//			break;
//		}
//		if ((p->data) % 2 == 0)
//		{
//			pre->next = p->next;
//			p->next = NULL;
//			last->next = p;
//			last = p;
//			p = pre->next;
//		}
//		else
//		{
//			pre = p;	//记录p的前驱
//			p = p->next;
//		}
//	}
//	if (tail->data % 2 == 0)
//	{
//		pre->next = p->next;
//		p->next = NULL;
//		last->next = p;
//		last = p;
//	}
//	last->next = temp;
//	tail = last;
//	return tail;
//}


//
////链式存储实现多项式加法
//#include<stdio.h>
//#include<stdlib.h> 
//
////重定义类型和声明函数
//typedef struct Node* PNode;
//typedef struct Node* LinkList;
//typedef int Datatype;
//struct Node
//{
//	Datatype      coe;
//	Datatype      ind;
//	struct Node* next;
//};
//PNode Add_POLYA(LinkList head1, LinkList head2);
//
//LinkList setnulllist_link()
//{
//	LinkList head = (LinkList)malloc(sizeof(struct Node));
//	if (head != NULL) head->next = NULL;
//	else printf("alloc failure");
//	return head;
//}
//
//void createlist_tail(struct Node* head)
//{
//	PNode p = NULL;
//	PNode q = head;
//	Datatype coe;
//	Datatype ind;
//	printf("please input coefficient and index:\n");
//	scanf_s("%d,%d", &coe, &ind);
//	while ((coe != 0) || (ind != 0))
//	{
//		p = (struct Node*)malloc(sizeof(struct Node));
//		p->coe = coe;
//		p->ind = ind;
//		p->next = NULL;
//		q->next = p;
//		q = p;
//		scanf_s("%d,%d", &coe, &ind);
//	}
//	return;
//}
//
//void print(LinkList head)
//{
//	PNode  p = head->next;
//	while (p != NULL)
//	{
//		if (p->next != NULL) {
//			printf("%d,%d ", p->coe, p->ind);
//		}
//		else {
//			printf("%d,%d ", p->coe, p->ind);
//		}
//		p = p->next;
//	}
//	return;
//}
//
//void destorylist_link(LinkList head)
//{
//	PNode  pre = head;
//	PNode p = pre->next;
//	while (p)
//	{
//		free(pre);
//		pre = p;
//		p = pre->next;
//	}
//	free(pre);
//	return;
//}
//
//int main()
//{
//	LinkList head1 = NULL, head2 = NULL;
//	head1 = setnulllist_link();
//	head2 = setnulllist_link();
//	createlist_tail(head1);
//	createlist_tail(head2);
//	Add_POLYA(head1, head2);
//	print(head1);
//	destorylist_link(head1);
//	system("pause");
//	return 0;
//}
//
//PNode Add_POLYA(LinkList head1, LinkList head2)
//{
//	PNode pre = NULL, p = NULL, qre = NULL, q = NULL;
//	pre = head1;
//	p = head1->next;
//	qre = head2;
//	q = head2->next;
//	if (qre == NULL)
//	{
//		return head1;
//	}
//	while (p != NULL)
//	{
//		if (q == NULL)
//		{
//			return head1;
//		}
//		//两项和为0时
//		if (p->ind == q->ind)
//		{
//			p->coe = q->coe + p->coe;
//			if (p->coe == 0)
//			{
//				pre->next = p->next;
//				free(p);
//				p = pre->next;
//				qre->next = q->next;
//				free(q);
//				q = qre->next;
//			}
//			else {
//				pre = p;
//				p = p->next;
//				qre->next = q->next;
//				free(q);
//				q = qre->next;
//			}
//		}
//		//多项式1的项的指数大于多项式2的项时
//		else if (p->ind > q->ind)
//		{
//			qre->next = q->next;
//			q->next = p;
//			pre->next = q;
//			pre = q;
//			q = qre->next;
//		}
//		//多项式2的项指数大小在多项式1的项与下一项中间时
//		else if (q->ind > p->ind && q->ind < (p->next)->ind)
//		{
//			qre->next = q->next;
//			pre = p;
//			p = p->next;
//			q->next = p;
//			pre->next = q;
//			pre = q;
//			q = qre->next;
//		}
//		else if (q->ind > p->ind && q->ind >= (p->next)->ind)
//		{
//			pre = p;
//			p = p->next;
//		}
//	}
//
//	return head1;
//} 


//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int DataType;
//struct Node {
//	DataType      data;
//	struct Node* next;
//};
//typedef struct Node* PNode;
//typedef struct Node* LinkStack;
//
//LinkStack SetNullStack_Link()
//{
//	LinkStack top = (LinkStack)malloc(sizeof(struct Node));
//	if (top != NULL) top->next = NULL;
//	else printf("Alloc failure");
//	return top;
//}
//
//int IsNullStack_link(LinkStack top)
//{
//	if (top->next == NULL)
//		return 1;
//	else
//		return 0;
//}
//
//void Push_link(LinkStack top, DataType x)
//{
//	PNode p;
//	p = (PNode)malloc(sizeof(struct Node));
//	if (p == NULL)
//		printf("Alloc failure");
//	else
//	{
//		p->data = x;
//		p->next = top->next;
//		top->next = p;
//	}
//}
//void Pop_link(LinkStack top)
//{
//	PNode p;
//	if (top->next == NULL)
//		printf("it is empty stack!");
//	else
//	{
//		p = top->next;
//		top->next = p->next;
//		free(p);
//	}
//}
//DataType Top_link(LinkStack top)
//{
//	if (top->next == NULL)
//	{
//		printf("It is empty stack!");
//		return 0;
//	}
//	else
//		return top->next->data;
//}
//
//void Conver(LinkStack stackA, DataType n);
//
//int main()
//{
//	LinkStack stackA = SetNullStack_Link();
//	DataType n = 0;
//	scanf_s("%d", &n);
//	Conver(stackA, n);
//	return 0;
//}
//
////答案
//void Conver(LinkStack stackA, DataType n)
//{
//	while (n)
//	{
//		Push_link(stackA, n % 8);
//		n = n / 8;
//	}
//	printf("result: ");
//	while (!IsNullStack_link(stackA))
//	{
//		n = Top_link(stackA);
//		printf("%d", n);
//		Pop_link(stackA);
//	}
//
//	return;
//}






#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct Node* PtrToNode;
struct Node {
	ElementType Data; /* 存储结点数据 */
	PtrToNode   Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

List ReadInput(); /* 裁判实现，细节不表 */
void PrintList(List L); /* 裁判实现，细节不表 */
void K_Reverse(List L, int K);

int main()
{
	List L;
	int K;

	L = ReadInput();
	scanf("%d", &K);
	K_Reverse(L, K);
	PrintList(L);

	return 0;
}

/* 你的代码将被嵌在这里 */
void K_Reverse(List L, int K)
{
	int i = 0, len = 0,num = 1;
	PtrToNode pre = NULL, p = NULL, q = NULL, qre = NULL;
	pre = L;
	p = L->Next;
	qre = p;
	q = qre->Next;
	//K = 1 
	if (K == 1)
	{
		return;
	}
	while (p)
	{
		len++;
		p = p->Next;
	}
	//K大于表长时
	if (len < K)
	{
		return;
	}
	p = L->Next;
	//完全逆置
	if (K == len)
	{
		pre->Next = NULL;
		while (p != NULL)
		{
			q = p;
			p = p->Next;
			q->Next = pre->Next;
			pre->Next = q;
		}
		return;
	}
	//按K长度取段
	while (len >= K)
	{
		i = 0;
		if(len - K < K)		//只反转一次
		{
			pre->Next = NULL;
			while (i < K)
			{
				q = p;
				p = p->Next;
				q->Next = pre->Next;
				pre->Next = q;
				i++;
			}
			while (q->Next != NULL)
			{
				q = q->Next;
			}
			q->Next = p;
			return;
		}
		else
		{
			if (num == 1) //多次反转的第一次反转
			{
				pre->Next = NULL;
				while (i < K)
				{
					q = p;
					p = p->Next;
					q->Next = pre->Next;
					pre->Next = q;
					i++;
				}
			}
			else {
				while (pre->Next != p)
				{
					pre = pre->Next;
				}
				while (i < K)
				{
					q = p;
					p = p->Next;
					q->Next = pre->Next;
					pre->Next = q;
					i++;
				}
			}
			num++;
		}
		len = len - K;
	}

	return;
}