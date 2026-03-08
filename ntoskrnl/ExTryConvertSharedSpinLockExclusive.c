/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x1403C1810
 * Callers:
 *     ExpAddTagForBigPages @ 0x1402C7A20 (ExpAddTagForBigPages.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1405CF3B8 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1404630E8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG i; // ecx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  for ( i = *SpinLock; (i & 0xBFFFFFFF) != 0x80000001; i = *SpinLock )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(SpinLock, 0x40000000u);
    KeYieldProcessorEx(&v5);
  }
  return 1;
}
