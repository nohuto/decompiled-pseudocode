/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1407A991C
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1407A97EC (PopTriggerMonitorPowerEvent.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140983798 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407A9984 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v8 = PopPowerAggregatorHandleIntentUnsafe(a1, a2, a3, a4);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return v8;
}
