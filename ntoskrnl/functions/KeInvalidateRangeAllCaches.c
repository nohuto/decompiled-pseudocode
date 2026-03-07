void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 12 )
        LODWORD(v6) = 4096;
      else
        v6 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
      SchedulerAssist[5] |= v6;
    }
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1, 0LL, 0, 7LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      v7 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
