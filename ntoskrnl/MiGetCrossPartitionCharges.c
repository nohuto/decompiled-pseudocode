/*
 * XREFs of MiGetCrossPartitionCharges @ 0x1406579B0
 * Callers:
 *     MiGetCrossPartitionCloneCharges @ 0x14066222C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiApplyCrossPartitionCharges @ 0x14065694C (MiApplyCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x140658D04 (MiReturnCrossPartitionCharge.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // r13
  __int64 v7; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v15; // eax
  _DWORD *SchedulerAssist; // r8
  bool v17; // zf

  v5 = (volatile LONG *)(a1 + 1408);
  v7 = 32LL * a2;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    v10 = *(_QWORD *)(v7 + a1 + 2128);
    v11 = -1073740640;
    if ( v10 != -1 )
      *(_QWORD *)(v7 + a1 + 2128) = v10 + 1;
  }
  else
  {
    v11 = MiApplyCrossPartitionCharges(a1, a2, a4);
    if ( v11 >= 0 && (a3 & 1) != 0 )
    {
      v11 = MiApplyCrossPartitionCharges(a1, a2 + 1, v12);
      if ( v11 < 0 )
        MiReturnCrossPartitionCharge(a1, (unsigned int)a2);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  return (unsigned int)v11;
}
