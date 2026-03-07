struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, int a2)
{
  __int64 MonitorReasonFromPowerEventId; // rax

  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  PopSleepstudyStartNextSession(a1, MonitorReasonFromPowerEventId & 0xFFFFFF);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
