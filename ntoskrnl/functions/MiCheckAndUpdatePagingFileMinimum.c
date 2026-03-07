__int64 __fastcall MiCheckAndUpdatePagingFileMinimum(__int64 a1, unsigned int a2)
{
  volatile LONG *v2; // r14
  unsigned __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v2 = (volatile LONG *)(a1 + 232);
  v3 = a2;
  v5 = 1;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  if ( v3 > *(_QWORD *)a1 )
    v5 = 0;
  else
    *(_QWORD *)(a1 + 16) = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v5;
}
