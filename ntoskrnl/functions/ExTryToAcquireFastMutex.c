BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al
  unsigned __int8 v6; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = KeAbPreAcquire((__int64)FastMutex, 0LL);
  v3 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex, v3);
    _mm_pause();
    return 0;
  }
  return result;
}
