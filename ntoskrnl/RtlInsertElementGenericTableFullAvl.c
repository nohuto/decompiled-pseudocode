/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x140245260
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406CBBDC (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406CEB28 (PiPnpRtlObjectEventCreate.c)
 * Callees:
 *     RebalanceNode @ 0x1402453A0 (RebalanceNode.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rsi
  __int64 v10; // rax
  char *v11; // rbx
  _BYTE *v12; // rcx
  _BYTE *v13; // r8
  _QWORD *i; // rdx
  bool v15; // zf
  char v16; // al
  char v17; // dl

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (char *)NodeOrParent;
LABEL_15:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return v11 + 32;
  }
  if ( BufferSize + 32 >= BufferSize )
  {
    v10 = ((__int64 (*)(void))Table->AllocateRoutine)();
    v11 = (char *)v10;
    if ( v10 )
    {
      *(_OWORD *)v10 = 0LL;
      *(_OWORD *)(v10 + 16) = 0LL;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v12 = NodeOrParent;
        v13 = (_BYTE *)v10;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v10;
        else
          *((_QWORD *)NodeOrParent + 2) = v10;
        *(_QWORD *)v10 = NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        for ( i = *(_QWORD **)v10; ; v12 = i )
        {
          v15 = i[1] == (_QWORD)v13;
          v16 = -1;
          v17 = v12[24];
          if ( !v15 )
            v16 = 1;
          if ( v17 )
            break;
          i = *(_QWORD **)v12;
          v13 = v12;
          v12[24] = v16;
        }
        if ( v17 == v16 )
        {
          RebalanceNode(v12);
        }
        else
        {
          v12[24] = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = (_RTL_BALANCED_LINKS *)v10;
        *(_QWORD *)v10 = Table;
        Table->DepthOfTree = 1;
      }
      memmove(v11 + 32, Buffer, v7);
      goto LABEL_15;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
