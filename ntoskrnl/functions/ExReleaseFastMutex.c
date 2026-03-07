void __stdcall ExReleaseFastMutex(PFAST_MUTEX FastMutex)
{
  unsigned __int64 OldIrql_low; // rdi
  signed __int32 v3; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  OldIrql_low = LOBYTE(FastMutex->OldIrql);
  FastMutex->Owner = 0LL;
  v3 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( v3 )
    ExpReleaseFastMutexContended(&FastMutex->Count, v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)OldIrql_low <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql_low + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql_low);
  KeAbPostRelease((ULONG_PTR)FastMutex);
}
