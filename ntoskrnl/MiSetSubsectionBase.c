/*
 * XREFs of MiSetSubsectionBase @ 0x1402A4B24
 * Callers:
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiSetSubsectionBase(__int64 *BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v9; // r14
  volatile LONG *v10; // r15
  unsigned __int64 v11; // rbp
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  v4 = *BugCheckParameter2;
  v9 = 0LL;
  v10 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v11 = ExAcquireSpinLockExclusive(v10);
  if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    v9 = (ULONG_PTR)BugCheckParameter2;
    MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    BugCheckParameter2[14] = a4;
  }
  v12 = *((_DWORD *)BugCheckParameter2 + 12);
  *((_WORD *)BugCheckParameter2 + 16) |= 1u;
  v13 = v12 & 0x3FFFFFFF;
  BugCheckParameter2[1] = a2;
  *((_DWORD *)BugCheckParameter2 + 12) = v13;
  if ( v9 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v14 = v13 | 0x40000000;
    else
      v14 = v13 | 0x80000000;
    *((_DWORD *)BugCheckParameter2 + 12) = v14;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
}
