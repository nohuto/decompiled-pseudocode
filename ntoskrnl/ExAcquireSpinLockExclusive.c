KIRQL __stdcall ExAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // si
  unsigned int v3; // edi
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    v3 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock);
    while ( (*SpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (*SpinLock & 0x40000000) == 0 )
        _InterlockedOr(SpinLock, 0x40000000u);
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  return CurrentIrql;
}
