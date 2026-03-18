/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x14080B708
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403A0800 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
