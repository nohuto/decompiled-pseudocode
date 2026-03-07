_RTL_BALANCED_LINKS *__fastcall ViAvlAllocateNode(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  _RTL_BALANCED_LINKS *Parent; // rax

  Parent = Table[1].BalancedRoot.Parent;
  Table[1].BalancedRoot.Parent = 0LL;
  return Parent - 1;
}
