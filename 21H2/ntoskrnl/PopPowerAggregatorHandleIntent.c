/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408EE468
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E34AC (PopDirectedDripsInitializeBroadcast.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408F0D84 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = PopPowerAggregatorHandleIntentUnsafe((_QWORD *)a1, a2, a3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v6;
}
