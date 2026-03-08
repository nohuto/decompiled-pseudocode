/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x1403C7F10
 * Callers:
 *     <none>
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140457EEC (KiTryToAcquireSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(SpinLock);
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    return 1;
  _mm_pause();
  return 0;
}
