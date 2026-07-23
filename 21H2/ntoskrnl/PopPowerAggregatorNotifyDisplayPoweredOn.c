/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x14077A664
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140776550 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C54498 )
    qword_140C54498();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21828 == 2 )
  {
    LOBYTE(xmmword_140C21838) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
