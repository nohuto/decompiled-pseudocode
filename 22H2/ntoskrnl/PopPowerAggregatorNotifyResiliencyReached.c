/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x1408EE7B0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140576300 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C217F8 == 1 )
    LOBYTE(ymmword_140C21808.m256_f32[6]) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
