__int64 MiBadPageSignaler()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf

  v0 = ExAcquireSpinLockExclusive(&dword_140C6CB20);
  byte_140C67BC3 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v5 = (v4 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v4;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v0);
  return ZwUpdateWnfStateData((__int64)&WNF_MM_BAD_MEMORY_QUARANTINED, 0LL);
}
