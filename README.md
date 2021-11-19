
由于地图规模较小，所以采用BFS算法搜索航迹

# BFS算法步骤

>>步骤一：把`初始节点`S~0~放入Open表中；  
步骤二：如果Open表为空，则问题无解，失败退出；  
步骤三：把Open表的第一个节点取出放入Closed表，并记该节点为n；  
步骤四：考察节点n是否为目标节点。若是，则得到问题的解，成功推出；  
步骤五：若节点n不可扩展，则转（2）步；  
步骤六：扩展节点n,将其子节点放入Open表的尾部，并为每一个子节点设置指向父节点的指针，然后转向第（2）步。

# 代码框架
```
BFS（）  
{  
    初始化队列  
    while(队列不为空且未找到目标节点)  
    {  
        取队列首节点扩展，并将扩展出的节点放入队尾；  
        必要时要要记住每个节点的父节点；  
    }  
}
```
