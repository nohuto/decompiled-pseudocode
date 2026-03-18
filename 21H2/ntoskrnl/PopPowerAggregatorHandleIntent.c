/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1407F2244
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1407F20B4 (PopTriggerMonitorPowerEvent.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x14098BDD4 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407F22AC (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v8 = PopPowerAggregatorHandleIntentUnsafe(a1, a2, a3, a4);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v8;
}
