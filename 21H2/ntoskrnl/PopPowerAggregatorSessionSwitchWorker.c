/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x1408EEA60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140776390 (PopPowerAggregatorScheduleWorker.c)
 *     PdcTaskClientRequest @ 0x14091B9A0 (PdcTaskClientRequest.c)
 */

void PopPowerAggregatorSessionSwitchWorker()
{
  char v0; // di
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( byte_140C217E9 )
  {
    unk_140C217E8 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  else
  {
    byte_140C217E9 = 1;
    v1 = 1;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( v0 )
  {
    PdcTaskClientRequest(v3, 0LL);
  }
  else if ( v1 )
  {
    LOBYTE(v2) = 1;
    PdcTaskClientRequest(v3, v2);
    v4[0] = 0LL;
    v4[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C21810, -50000000LL, 0LL, (__int64)v4);
  }
}
