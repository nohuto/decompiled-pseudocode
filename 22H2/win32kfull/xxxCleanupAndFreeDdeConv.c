/*
 * XREFs of xxxCleanupAndFreeDdeConv @ 0x1C021C6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F13D0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C021D188 (xxxFreeDdeConv.c)
 */

__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagFREELIST *v2; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, 4, 14, 57, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)a1);
  v2 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v2 )
  {
    FreeListFree(v2);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
