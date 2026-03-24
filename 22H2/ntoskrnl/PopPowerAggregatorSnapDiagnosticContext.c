/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1408EEB54
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140576510 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1368uLL, 0x67696450u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, &PopPowerAggregatorContext, 0x1368uLL);
    *a1 = v3;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
