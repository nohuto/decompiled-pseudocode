void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (volatile LONG *)(a1 + 224);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = v8;
  v11 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v11);
  MiComputeNodeMemory((__int16 *)a1, a3);
  if ( v10 )
    MiDereferencePageRunsEx(v10, 0);
  if ( v9 )
    MiDereferencePageRunsEx(v9, 0);
}
