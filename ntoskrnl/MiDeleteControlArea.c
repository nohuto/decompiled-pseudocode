/*
 * XREFs of MiDeleteControlArea @ 0x140215028
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x140214FAC (MiDereferenceControlAreaProbe.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140622024 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x1402150F8 (MiDecrementControlAreaCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140668EB4 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiDeleteFileExtents @ 0x1406A7130 (MiDeleteFileExtents.c)
 *     SeReleaseImageValidationContext @ 0x14079C458 (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x140A45458 (MiFreeRelocations.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  __int64 v1; // r14
  int v2; // eax
  __int64 v4; // rbp
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v1 = 0LL;
  v2 = *((_DWORD *)P + 14);
  v4 = *(_QWORD *)(qword_140C67048 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1416;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v8 + 32));
  }
  else if ( (v2 & 0x80u) == 0 )
  {
    v5 = v4 + 1424;
  }
  else
  {
    v6 = *((_QWORD *)P + 18);
    if ( v6 )
    {
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v6 + 34) & 1) != 0 && (*(_DWORD *)(v6 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v6, 1LL);
          v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          v1 += MiDecrementSubsectionViewCount(v6);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v13 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
      if ( v1 )
        MiReturnCrossPartitionSectionCharges(v4, 1LL, v1);
    }
  }
  MiDecrementControlAreaCount(v4, v5);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(P, 0);
}
