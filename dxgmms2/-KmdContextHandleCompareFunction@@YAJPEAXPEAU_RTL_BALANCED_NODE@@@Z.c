__int64 __fastcall KmdContextHandleCompareFunction(struct _RTL_BALANCED_NODE *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( a1 == a2[-3].Children[0] )
    return 0LL;
  else
    return a1 < a2[-3].Children[0] ? -1 : 1;
}
