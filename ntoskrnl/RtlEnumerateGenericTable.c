/*
 * XREFs of RtlEnumerateGenericTable @ 0x1403B0050
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1402C1970 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1402C2B50 (RtlSplay.c)
 */

PVOID __stdcall RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  _RTL_SPLAY_LINKS *i; // rax
  RTL_SPLAY_LINKS *v6; // rcx
  PRTL_SPLAY_LINKS v7; // rax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0LL;
  if ( Restart )
  {
    for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
      TableRoot = i;
    v6 = TableRoot;
    goto LABEL_10;
  }
  v7 = RtlRealSuccessor(Table->TableRoot);
  TableRoot = v7;
  if ( v7 )
  {
    v6 = v7;
LABEL_10:
    Table->TableRoot = RtlSplay(v6);
  }
  return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
}
