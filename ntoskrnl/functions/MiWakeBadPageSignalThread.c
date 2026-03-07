void MiWakeBadPageSignalThread()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf

  if ( (MiFlags & 0x30) != 0 && (unsigned __int8)byte_140C67BC3 <= 1u )
  {
    v0 = ExAcquireSpinLockExclusive(&dword_140C6CB20);
    if ( byte_140C67BC3 == 1 )
    {
      stru_140C67BF0.Parameter = 0LL;
      stru_140C67BF0.List.Flink = 0LL;
      stru_140C67BF0.WorkerRoutine = (void (__fastcall *)(void *))MiBadPageSignaler;
      byte_140C67BC3 = 2;
      ExQueueWorkItem(&stru_140C67BF0, DelayedWorkQueue);
    }
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v0);
  }
}
