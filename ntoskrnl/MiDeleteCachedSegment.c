/*
 * XREFs of MiDeleteCachedSegment @ 0x140621514
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403A2790 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1406236E4 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDestroySection @ 0x1402017AC (MiDestroySection.c)
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14034C6C4 (MiUnlinkUnusedControlArea.c)
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned int v3; // ebx
  __int64 v4; // rsi
  _QWORD **v5; // r14
  unsigned __int64 v6; // rbp
  _QWORD *i; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rdx
  int v14; // ecx
  __int64 inserted; // rdi
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // rdx
  _DWORD *v18; // r9
  int v19; // eax

  v1 = (volatile LONG *)(a1 + 1408);
  v3 = 1;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1768);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (__int64)(i - 1);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
    return 0;
  }
  MiUnlinkUnusedControlArea(v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v14 = *(_DWORD *)(v4 + 56);
  if ( (v14 & 0x20) == 0 && *(_DWORD *)(v4 + 76) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
    inserted = MiInsertUnusedSegment(v4);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    __writecr8(v6);
    if ( inserted )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    return 0;
  }
  if ( (v14 & 0x20) != 0 || (unsigned int)MiFlushControlArea((PVOID)v4) )
  {
    LOBYTE(v13) = v6;
    MiDestroySection(v4, v13, 0LL);
  }
  else
  {
    return 0;
  }
  return v3;
}
