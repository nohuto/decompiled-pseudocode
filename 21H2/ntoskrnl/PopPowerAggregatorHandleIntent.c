/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408EE308
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E334C (PopDirectedDripsInitializeBroadcast.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408F0C24 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775E14 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = PopPowerAggregatorHandleIntentUnsafe((_QWORD *)a1, a2, a3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v6;
}
