/*
 * XREFs of MiDereferencePageRunsEx @ 0x1402EBA28
 * Callers:
 *     MiDereferencePageRuns @ 0x1402EBA0C (MiDereferencePageRuns.c)
 *     MiZeroNodePages @ 0x14038FAA0 (MiZeroNodePages.c)
 *     MiComputeNodeMemory @ 0x1403A6D2C (MiComputeNodeMemory.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 *     MiFinishResume @ 0x1406244A0 (MiFinishResume.c)
 *     MiGetListOfPendingBadPages @ 0x140627BD8 (MiGetListOfPendingBadPages.c)
 *     MiDeleteZeroThreadContext @ 0x140652704 (MiDeleteZeroThreadContext.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1406597F8 (MiUpdatePartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x140A4242C (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRunsEx(__int64 a1, int a2)
{
  void *v2; // r12
  __int64 v4; // r13
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  bool v8; // zf
  unsigned __int8 v9; // cl
  struct _KPRCB *v10; // r9
  int v11; // eax
  _DWORD *v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  _QWORD *v21; // rbx

  v2 = (void *)(a1 - 16);
  v4 = *(_QWORD *)(a1 - 16);
  v6 = 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 224));
  v8 = (*(_QWORD *)(a1 - 8))-- == 1LL;
  if ( !v8 )
    v2 = 0LL;
  if ( a2 )
  {
    if ( (_UNKNOWN *)v4 != &MiSystemPartition )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 224));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v8 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v7);
      LOBYTE(v7) = ExAcquireSpinLockExclusive(&dword_140C6B1A0);
    }
    if ( !--qword_140C6B0E8 )
    {
      v6 = (_QWORD *)qword_140C6B118;
      qword_140C6B118 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6B1A0);
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v8 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8((unsigned __int8)v7);
    if ( v6 )
    {
      do
      {
        v21 = (_QWORD *)*v6;
        KeSignalGate(v6 + 1, 1LL);
        v6 = v21;
      }
      while ( v21 );
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 224));
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = v10->SchedulerAssist;
        v8 = (v11 & v12[5]) == 0;
        v12[5] &= v11;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    __writecr8(v7);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
