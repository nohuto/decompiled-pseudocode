__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  if ( a2 < (unsigned int)dword_140C6578C )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v5 = 4;
      if ( CurrentIrql != 2 )
        v5 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v5;
    }
    MiFlushCacheForAttributeChange(a1, a2, 3, 0LL);
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140C65784;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
