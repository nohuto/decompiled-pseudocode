/*
 * XREFs of MiAllocateAcceleratorDescriptor @ 0x1402A9850
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiEngineHasDescriptors @ 0x14065275C (MiEngineHasDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateAcceleratorDescriptor(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  int v7; // r14d
  KIRQL v8; // al
  PVOID **v9; // rdi
  unsigned __int64 v10; // rbp
  PVOID *v12; // rsi
  __int64 v13; // r9
  void *PoolMm; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  *a4 = 0LL;
  v7 = 1;
  v8 = ExAcquireSpinLockExclusive(&dword_140C694A0);
  v9 = (PVOID **)qword_140C69480;
  v10 = v8;
  if ( qword_140C69480 != &qword_140C69480 )
  {
    while ( 1 )
    {
      v12 = *v9;
      if ( *((_DWORD *)v9 + 6) == a2
        && (*((_DWORD *)v9 + 13) & 1) == 0
        && !byte_140C69494
        && (!a1 || !(unsigned int)MiEngineHasDescriptors(a1, v9)) )
      {
        break;
      }
      v9 = (PVOID **)v12;
      if ( v12 == &qword_140C69480 )
        goto LABEL_2;
    }
    v13 = *((unsigned int *)v9 + 6);
    LODWORD(v13) = v13 | 0x80000000;
    PoolMm = (void *)ExAllocatePoolMm(64LL, v9[4] + 4, 1817143629LL, v13);
    if ( PoolMm )
      ExFreePoolWithTag(PoolMm, 0);
    v7 = 0;
  }
LABEL_2:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C694A0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( !a1 || !v7 )
    return 0LL;
  *a4 = 0LL;
  return 1LL;
}
