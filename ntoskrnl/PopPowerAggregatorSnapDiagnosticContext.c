/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x14087EDCC
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403CFC20 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  Pool2 = (void *)ExAllocatePool2(256LL, 4440LL, 1734960208LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, &PopPowerAggregatorContext, 0x1158uLL);
    *a1 = v3;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
