/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x1408EEBC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140776550 (PopPowerAggregatorScheduleWorker.c)
 *     PdcTaskClientRequest @ 0x14091BB00 (PdcTaskClientRequest.c)
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
  if ( byte_140C21849 )
  {
    unk_140C21848 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  else
  {
    byte_140C21849 = 1;
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
    KeSetTimer2((__int64)&unk_140C21870, -50000000LL, 0LL, (__int64)v4);
  }
}
