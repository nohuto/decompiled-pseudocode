/*
 * XREFs of MmUpdateSlabRangeType @ 0x140B9732C
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertSlabEntry @ 0x140349C90 (MiInsertSlabEntry.c)
 *     MiEnumerateSlabAllocators @ 0x140360F88 (MiEnumerateSlabAllocators.c)
 *     MiRemoveSlabEntry @ 0x1403BC4FC (MiRemoveSlabEntry.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmUpdateSlabRangeType(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  int v5; // r15d
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  ULONG_PTR v10; // r9
  __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r10
  int v18; // eax
  bool v19; // zf
  ULONG_PTR v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  result = (unsigned int)dword_140C6B0C4;
  v4 = BugCheckParameter3;
  v5 = a3;
  if ( (dword_140C6B0C4 & 8) != 0 && BugCheckParameter3 )
  {
    BugCheckParameter4 = a3;
    do
    {
      v8 = *((unsigned int *)MiSearchNumaNodeTable(BugCheckParameter2) + 2);
      v21 = 0LL;
      v20 = BugCheckParameter2;
      MiEnumerateSlabAllocators(
        (__int64)MiSystemPartition,
        (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiUpdateSlabRangeTypeHelper,
        (__int64)&v20,
        v8);
      v9 = v21;
      if ( !v21 )
        KeBugCheckEx(0x1Au, 0x3030312uLL, BugCheckParameter2, v4, BugCheckParameter4);
      v10 = *(_QWORD *)(v21 + 24);
      if ( v10 != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, v10, 0LL);
      v11 = *(_QWORD *)(v21 + 40);
      v12 = *(_DWORD *)(v11 + 80);
      if ( v12 <= 3 && v12 != 2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, *(_QWORD *)(v21 + 40), *(int *)(v11 + 80));
      BugCheckParameter4 = v5;
      result = qword_140C6B0D0 + 23392;
      v13 = 264LL * *((int *)MmSlabTypeToMiSlabType + v5) + qword_140C6B0D0 + 23392 + 25408 * v8;
      if ( v13 != v11 )
      {
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 16));
        MiRemoveSlabEntry((__int64)MiSystemPartition, (unsigned __int64 *)v11, v9);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 16));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v19 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v14);
        *(_QWORD *)(v9 + 40) = v13;
        result = MiInsertSlabEntry((__int64)MiSystemPartition, v13, v9, 0);
        v5 = a3;
      }
      BugCheckParameter2 += 512LL;
      v4 -= 512LL;
    }
    while ( v4 );
  }
  return result;
}
