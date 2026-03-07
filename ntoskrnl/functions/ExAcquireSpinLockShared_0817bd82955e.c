KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v4; // rdx
  signed __int32 v5; // [rsp+38h] [rbp+10h]
  signed __int32 v6; // [rsp+38h] [rbp+10h]
  signed __int32 v7; // [rsp+40h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v4) = 4;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    v7 = _InterlockedCompareExchange(SpinLock, v5 + 1, v5);
    if ( v7 != v5 )
    {
      while ( v7 >= 0 )
      {
        v6 = v7;
        v7 = _InterlockedCompareExchange(SpinLock, v7 + 1, v7);
        if ( v7 == v6 )
          return CurrentIrql;
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
