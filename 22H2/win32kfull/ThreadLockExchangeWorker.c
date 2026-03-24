/*
 * XREFs of ThreadLockExchangeWorker @ 0x1C00D1360
 * Callers:
 *     xxxTimersProc @ 0x1C0168118 (xxxTimersProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObjectWorker();
  if ( v2 )
    return HMUnlockObjectWorker(v2);
  else
    return 0LL;
}
