/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x1408095C4
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140808910 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14080C690 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x14039ADE8 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, int a2)
{
  __int64 MonitorReasonFromPowerEventId; // rax

  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  PopSleepstudyStartNextSession(a1, MonitorReasonFromPowerEventId & 0xFFFFFF);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
