//LeetCode    771.宝石与石头

/*
int numJewelsInStones(char* jewels, char* stones) {
    //利用位运算映射对应关系
    //定义64位长的整型存储52个字母(大小写字母)的映射
    long long mark = 0;
    //存储石头数组中拥有的宝石数
    int ans = 0;
    //遍历宝石数组存储映射关系
    for (int i = 0; jewels[i]; i++)
    {
        //定义1ULL(无符号长长整型字面量)避免32位整型越界左移
        //每个字母的二进制位只有后六位不同，利用& 63只保留后六位，并将mark设置对应映射位
        mark |= 1ULL << (jewels[i] & 63);
    }
    //遍历石头数组利用映射判断
    for (int i = 0; stones[i]; i++)
    {
        //将mark存储的对应的映射位右移到最右位判断是否为1
        ans += mark >> (stones[i] & 63) & 1;
    }
    return ans;
}
*/