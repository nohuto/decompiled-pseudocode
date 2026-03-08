/*
 * XREFs of MmGetControlAreaPartition @ 0x1402A1224
 * Callers:
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1402A1120 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402A42CC (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteSectionsForPartition @ 0x140536B34 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetControlAreaPartition(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C651C0);
  if ( *(_QWORD *)a1 )
    v3 = *(_QWORD **)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v3[25];
}
