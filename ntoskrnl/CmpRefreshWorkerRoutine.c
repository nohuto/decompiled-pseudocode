/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x140A0A1C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 32) != a2 || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, a3, 1);
  CmpMarkKeyUnbacked(a1, a3);
  CmpDiscardKcb(a1);
  return 2LL;
}
