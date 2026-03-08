/*
 * XREFs of CcShouldWorkOnThisQueue @ 0x140215CEC
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x14053741C (CcAsyncLazywriteWorker.c)
 * Callees:
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140219E24 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 */

bool __fastcall CcShouldWorkOnThisQueue(_DWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  _DWORD *v6; // r8
  _DWORD *v7; // r9

  v4 = *(_QWORD *)(a2 + 16);
  v5 = a3;
  if ( a4 && (unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(a1) )
    return 0;
  if ( CcEnablePerVolumeLazyWriter )
  {
    v6 = (_DWORD *)(v4 + 808);
    v7 = (_DWORD *)(v4 + 776);
  }
  else
  {
    v6 = a1 + 218;
    v7 = a1 + 210;
  }
  if ( v5 == a2 + 104 )
    return (unsigned int)(*(_DWORD *)(a2 + 188) + 1) <= a1[322];
  return !*v6 || (unsigned int)(*(_DWORD *)(a2 + 192) + 1) < *v7 || *(_DWORD *)(a2 + 152);
}
