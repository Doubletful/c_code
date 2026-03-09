//LeetCode    622.设计循环队列

/*
//定义双向循环队列结构
typedef struct {
    int* arr; //存储值的数组
    int head; //指向队头的下标
    int tail; //指向队尾的下一个位置的下标
    int k; //队列的容量
} MyCircularQueue;


//队列初始化
MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = malloc(sizeof(MyCircularQueue));
    //开辟数组容量为队列容量加1个用于判断队列已满情况
    obj->arr = malloc(sizeof(int) * (k + 1));
    obj->head = obj->tail = 0;
    obj->k = k;
    return obj;
}

//判断是否为空
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    //head和tail下标相等时为空
    return obj->head == obj->tail;
}

//判断是否已满
bool myCircularQueueIsFull(MyCircularQueue* obj) {
    //tail的下一个位置为队头时队列已满，取模用于实现循环作用和防止越界访问
    //解释：tail == k时，tail + 1取模k + 1让tail指向数组开头
    return (obj->tail + 1) % (obj->k + 1) == obj->head;
}

//入队
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    //队列已满返回false
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }
    obj->arr[obj->tail] = value;
    //tail++指向队尾的下一个位置，取模用于实现循环作用和防止越界访问
    //解释：tail == k时，tail + 1取模k + 1让tail指向数组开头
    obj->tail = (obj->tail + 1) % (obj->k + 1);
    return true;
}

//出队
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    //队列为空返回false
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    //head++指向当前队头的下一个位置，取模用于实现循环作用和防止越界访问
    //解释：head == k时，head + 1取模k + 1让head指向数组开头
    obj->head = (obj->head + 1) % (obj->k + 1);
    return true;
}

//返回队头元素
int myCircularQueueFront(MyCircularQueue* obj) {
    //队列为空返回-1
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    return obj->arr[obj->head];
}

//返回队尾元素
int myCircularQueueRear(MyCircularQueue* obj) {
    //队列为空返回-1
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    //tail指向数组开头时，取模用于实现循环作用和防止越界访问
    //解释：tail == 0时，tail - 1 + k + 1取模k + 1 == k，让tail等于数组末尾
    return obj->arr[(obj->tail - 1 + obj->k + 1) % (obj->k + 1)];
}

//销毁队列
void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->arr);
    free(obj);
}
*/