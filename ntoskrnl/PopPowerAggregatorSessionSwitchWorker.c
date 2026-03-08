/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x140990F20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PdcTaskClientRequest @ 0x14067F048 (PdcTaskClientRequest.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140873100 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorSessionSwitchWorker()
{
  char v0; // di
  char v1; // bl
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( byte_140C3A759 )
  {
    unk_140C3A758 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  else
  {
    byte_140C3A759 = 1;
    v1 = 1;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( v0 )
  {
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 0);
  }
  else if ( v1 )
  {
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 1);
    v2[0] = 0LL;
    v2[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C3A780, -50000000LL, 0LL, (__int64)v2);
  }
}
