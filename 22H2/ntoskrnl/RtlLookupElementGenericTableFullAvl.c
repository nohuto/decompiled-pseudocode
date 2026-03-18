/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x14031E6C0
 * Callers:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407885C4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x140789A18 (PiPnpRtlObjectEventCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v9 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v9 )
          break;
        if ( !i->LeftChild )
        {
          *NodeOrParent = i;
          *SearchResult = TableInsertAsLeft;
          return 0LL;
        }
        i = i->LeftChild;
      }
      if ( v9 != GenericGreaterThan )
        break;
      if ( !i->RightChild )
      {
        *NodeOrParent = i;
        *SearchResult = TableInsertAsRight;
        return 0LL;
      }
    }
    *NodeOrParent = i;
    *SearchResult = TableFoundNode;
    return (char *)*NodeOrParent + 32;
  }
  else
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
}
