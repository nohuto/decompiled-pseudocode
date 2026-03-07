__int64 __fastcall MiMakeUnusedSegmentDeleteOnClose(__int64 a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // r12
  KIRQL v5; // bl
  _QWORD *v6; // rax
  __int64 v7; // rbp
  volatile LONG *v8; // r14
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 inserted; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  __int64 result; // rax

  v1 = (volatile LONG *)(a1 + 1408);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  v4 = (_QWORD *)(a1 + 1768);
  while ( 1 )
  {
    v5 = v3;
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = (__int64)(v6 - 1);
    v8 = (volatile LONG *)(v6 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      MiUnlinkUnusedControlArea(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      inserted = MiInsertUnusedSegment(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( KiIrqlFlags )
      {
        v9 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && v5 <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v10);
        }
      }
      __writecr8(v5);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && v5 <= 0xFu && v19 >= 2u )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v13 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)v20);
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
