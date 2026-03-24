/*
 * XREFs of ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00122B0
 * Callers:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckTransferState(struct tagTHREADINFO *a1, struct tagQ *a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v7; // rax

  v4 = a3;
  v5 = *(_QWORD *)(a3 + *((_QWORD *)a1 + 54));
  if ( !v5 || *(struct tagTHREADINFO **)(v5 + 16) != a1 )
    return 0LL;
  if ( *(_QWORD *)((char *)a2 + v4) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( a4 )
    {
      v7 = *(_QWORD *)(gpqForeground + v4);
      if ( v7 )
      {
        if ( v5 != v7 )
          return 1LL;
      }
    }
  }
  return 2LL;
}
