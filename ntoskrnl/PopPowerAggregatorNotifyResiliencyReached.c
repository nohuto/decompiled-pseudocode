/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x140990CD4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140597320 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void PopPowerAggregatorNotifyResiliencyReached()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3A710 == 1 )
    BYTE9(xmmword_140C3A720) = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
