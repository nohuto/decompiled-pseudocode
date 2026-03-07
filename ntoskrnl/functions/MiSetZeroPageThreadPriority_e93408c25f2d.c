__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 168LL) + 48LL) + 16LL)
     + 25408LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 168LL) + 56LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 23160));
  if ( (*(_DWORD *)(a1 + 136) & 8) != 0 )
    v5 = 32;
  else
    v5 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 23160));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v5;
}
