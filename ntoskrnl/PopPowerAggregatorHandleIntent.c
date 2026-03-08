/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x140757228
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1407570F8 (PopTriggerMonitorPowerEvent.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1409806E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v8 = PopPowerAggregatorHandleIntentUnsafe(a1, a2, a3, a4);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v8;
}
