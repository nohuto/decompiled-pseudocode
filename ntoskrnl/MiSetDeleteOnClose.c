/*
 * XREFs of MiSetDeleteOnClose @ 0x1406239AC
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14034C47C (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  __int64 inserted; // rsi
  unsigned __int64 v5; // rdi
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  inserted = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x40000) == 0 )
  {
    if ( (v6 & 0x10000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
  }
  if ( a2 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
      1LL,
      inserted);
}
