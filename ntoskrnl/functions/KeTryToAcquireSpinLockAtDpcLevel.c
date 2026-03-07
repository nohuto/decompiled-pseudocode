BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(SpinLock);
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    return 1;
  _mm_pause();
  return 0;
}
