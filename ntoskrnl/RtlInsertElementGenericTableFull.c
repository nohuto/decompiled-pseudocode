/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x1402C2A50
 * Callers:
 *     RtlInsertElementGenericTable @ 0x1402C29E0 (RtlInsertElementGenericTable.c)
 * Callees:
 *     RtlSplay @ 0x1402C2B50 (RtlSplay.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rbp
  _QWORD *v10; // rax
  RTL_SPLAY_LINKS *v11; // rbx
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *Blink; // rdx

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_10:
    Table->TableRoot = RtlSplay(v11);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v11[1].RightChild;
  }
  if ( BufferSize + 40 >= BufferSize )
  {
    v10 = (_QWORD *)((__int64 (*)(void))Table->AllocateRoutine)();
    v11 = (RTL_SPLAY_LINKS *)v10;
    if ( v10 )
    {
      *v10 = v10;
      v10[1] = 0LL;
      v10[2] = 0LL;
      v12 = (struct _LIST_ENTRY *)(v10 + 3);
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v12->Flink = &Table->InsertOrderList;
      v11[1].LeftChild = (_RTL_SPLAY_LINKS *)Blink;
      Blink->Flink = v12;
      Table->InsertOrderList.Blink = v12;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v11;
      }
      memmove(&v11[1].RightChild, Buffer, v7);
      goto LABEL_10;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
