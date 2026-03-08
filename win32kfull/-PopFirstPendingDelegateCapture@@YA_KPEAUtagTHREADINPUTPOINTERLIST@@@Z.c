/*
 * XREFs of ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C723C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopFirstPendingDelegateCapture(struct tagTHREADINPUTPOINTERLIST *a1)
{
  __int64 i; // rax
  int v2; // edx

  if ( *(struct tagTHREADINPUTPOINTERLIST **)a1 != a1 )
  {
    for ( i = *((_QWORD *)a1 + 1); (struct tagTHREADINPUTPOINTERLIST *)i != a1; i = *(_QWORD *)(i + 8) )
    {
      v2 = *(_DWORD *)(i + 48);
      if ( (v2 & 4) != 0 )
      {
        *(_DWORD *)(i + 48) = v2 & 0xFFFFFFFB;
        return *(_QWORD *)(i + 24);
      }
    }
  }
  return 0LL;
}
