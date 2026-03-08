/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x1408794D4
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140879490 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140990660 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C2490 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, int a2)
{
  __int64 MonitorReasonFromPowerEventId; // rax

  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  PopSleepstudyStartNextSession(a1, MonitorReasonFromPowerEventId & 0xFFFFFF);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
