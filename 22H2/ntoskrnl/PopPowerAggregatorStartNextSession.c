/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x140878154
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140878110 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993710 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C733C (PopGetMonitorReasonFromPowerEventId.c)
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, int a2)
{
  __int64 MonitorReasonFromPowerEventId; // rax

  PopReleaseRwLock(&PopPowerAggregatorLock);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  PopSleepstudyStartNextSession(a1, MonitorReasonFromPowerEventId & 0xFFFFFF);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
