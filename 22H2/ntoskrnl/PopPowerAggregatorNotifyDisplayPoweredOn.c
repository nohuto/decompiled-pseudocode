/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993C60
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875FC0 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C6B0A8 )
    qword_140C6B0A8();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AAD8 == 2 )
  {
    LOBYTE(xmmword_140C3AAE8) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
