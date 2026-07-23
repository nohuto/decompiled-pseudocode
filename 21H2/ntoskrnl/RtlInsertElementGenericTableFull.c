/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x140237060
 * Callers:
 *     RtlInsertElementGenericTable @ 0x140236FF0 (RtlInsertElementGenericTable.c)
 * Callees:
 *     RtlSplay @ 0x1403644C0 (RtlSplay.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // r14
  _RTL_SPLAY_LINKS *v10; // rax
  _RTL_SPLAY_LINKS *v11; // rbx
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_10:
    Table->TableRoot = RtlSplay(v11);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v11[1].RightChild;
  }
  if ( BufferSize + 40 >= BufferSize )
  {
    v10 = (_RTL_SPLAY_LINKS *)((__int64 (*)(void))Table->AllocateRoutine)();
    v11 = v10;
    if ( v10 )
    {
      v10->LeftChild = 0LL;
      v12 = (struct _LIST_ENTRY *)&v10[1];
      v10->RightChild = 0LL;
      v10->Parent = v10;
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v12->Flink = &Table->InsertOrderList;
      v10[1].LeftChild = (_RTL_SPLAY_LINKS *)Blink;
      Blink->Flink = v12;
      Table->InsertOrderList.Blink = v12;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v10;
        else
          *((_QWORD *)NodeOrParent + 2) = v10;
        v10->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v10;
      }
      memmove(&v10[1].RightChild, Buffer, v7);
      goto LABEL_10;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
