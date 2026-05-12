/*
 * XREFs of RaidAdapterSetPauseTimer @ 0x1C002F96C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResetBus @ 0x1C002E2C0 (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C0013F04 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0014194 (RaidResumeAdapterQueue.c)
 */

BOOLEAN __fastcall RaidAdapterSetPauseTimer(__int64 a1, struct _KTIMER *a2, struct _KDPC *Dpc, unsigned int a4)
{
  BOOLEAN v5; // di

  v5 = KeSetCoalescableTimer(a2, (LARGE_INTEGER)(-10000000LL * a4), 0, 0, Dpc);
  if ( v5 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1, 0);
  return v5;
}
