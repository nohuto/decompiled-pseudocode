/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x140224E80
 * Callers:
 *     MiComputeAgingAmount @ 0x140224C50 (MiComputeAgingAmount.c)
 *     MiReferenceControlAreaPfn @ 0x140224DA0 (MiReferenceControlAreaPfn.c)
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v3 = ExpWaitForSpinLockExclusiveAndAcquire();
  while ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (*a1 & 0x40000000) == 0 )
      _InterlockedOr(a1, 0x40000000u);
    KeYieldProcessorEx(&v3);
  }
  return v3;
}
