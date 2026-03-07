void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  char v4; // dl

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v4 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v4);
  }
  else
  {
    v2 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock);
    while ( 1 )
    {
      v3 = *(unsigned int *)SpinLock;
      LODWORD(v3) = v3 & 0xBFFFFFFF;
      if ( (_DWORD)v3 == 0x80000000 )
        break;
      if ( (*SpinLock & 0x40000000) == 0 )
        _InterlockedOr(SpinLock, 0x40000000u);
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v3) )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
    }
  }
}
