/*
 * XREFs of xxxCleanupAndFreeDdeConv @ 0x1C01FB100
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CFBE0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01FB8A0 (xxxFreeDdeConv.c)
 */

__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagFREELIST *v2; // rcx

  v2 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v2 )
  {
    FreeListFree(v2);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
