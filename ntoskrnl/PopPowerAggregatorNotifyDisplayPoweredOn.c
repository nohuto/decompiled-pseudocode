/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140990BB0
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140873100 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C6AC38 )
    qword_140C6AC38();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3A738 == 2 )
  {
    LOBYTE(xmmword_140C3A748) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
