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
