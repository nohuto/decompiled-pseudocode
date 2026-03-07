PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  _RTL_BALANCED_LINKS *NodeOrParent; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax
  TABLE_SEARCH_RESULT SearchResult; // eax

  NodeOrParent = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( NodeOrParent = Table->BalancedRoot.RightChild; ; NodeOrParent = NodeOrParent->RightChild )
    {
      while ( 1 )
      {
        v9 = Table->CompareRoutine(Table, Buffer, &NodeOrParent[1]);
        if ( v9 )
          break;
        if ( !NodeOrParent->LeftChild )
        {
          SearchResult = TableInsertAsLeft;
          return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
        }
        NodeOrParent = NodeOrParent->LeftChild;
      }
      if ( v9 != GenericGreaterThan )
        break;
      if ( !NodeOrParent->RightChild )
      {
        SearchResult = TableInsertAsRight;
        return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
      }
    }
    SearchResult = TableFoundNode;
  }
  else
  {
    SearchResult = TableEmptyTree;
  }
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
}
