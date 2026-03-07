void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)SpinLock);
  }
}
