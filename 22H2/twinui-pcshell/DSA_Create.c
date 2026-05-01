/*
 * XREFs of DSA_Create @ 0x1804E76DC
 * Callers:
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159A1C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     <none>
 */

HDSA __stdcall DSA_Create(int cbItem, int cItemGrow)
{
  struct _DSA *v2; // r8
  HANDLE ProcessHeap; // rax
  struct _DSA *v6; // rax
  int v7; // eax

  v2 = 0LL;
  if ( cbItem > 0 )
  {
    ProcessHeap = GetProcessHeap();
    v6 = (struct _DSA *)HeapAlloc(ProcessHeap, 8u, 0x20uLL);
    v2 = v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 5) = cbItem;
      if ( 0x7FFFFFFF / cbItem < cItemGrow )
        cItemGrow = 0x7FFFFFFF / cbItem;
      v7 = 1;
      if ( cItemGrow > 1 )
        v7 = cItemGrow;
      *((_DWORD *)v2 + 6) = v7;
    }
  }
  return v2;
}
