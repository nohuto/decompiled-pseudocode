/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140993D84
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599840 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AAB0 == 1 )
    BYTE9(xmmword_140C3AAC0) = 0;
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
