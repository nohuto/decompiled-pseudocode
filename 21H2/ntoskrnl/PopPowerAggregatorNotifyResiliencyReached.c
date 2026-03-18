/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140995E20
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D6AC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C20BD0 == 1 )
    BYTE9(xmmword_140C20BE0) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
