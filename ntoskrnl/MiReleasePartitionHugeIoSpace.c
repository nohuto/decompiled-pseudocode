/*
 * XREFs of MiReleasePartitionHugeIoSpace @ 0x140620094
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x140658E84 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x14061FC7C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 */

__int64 __fastcall MiReleasePartitionHugeIoSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  KIRQL v4; // al
  _QWORD *v5; // rcx
  KIRQL v6; // si
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  _QWORD *i; // rax
  __int64 v17; // rdi
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  __int64 result; // rax
  ULONG_PTR v23; // r9

  v2 = **(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 200) + 64LL);
  do
  {
    v3 = *(_QWORD *)(BugCheckParameter2 + 16216) << 18;
    if ( v3 )
      MiAllocatePartitionPhysicalPages(BugCheckParameter2, v2, v3, 0, 769, 1);
    v4 = ExAcquireSpinLockShared(&dword_140C66F90);
    v5 = (_QWORD *)qword_140C66FE0;
    v6 = v4;
    v7 = 0LL;
    while ( v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v7 )
    {
      v8 = (_QWORD *)v7[1];
      v9 = v7;
      v10 = v7;
      if ( v8 )
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v10 )
            break;
          v10 = v7;
        }
      }
      if ( ((*(_QWORD *)(qword_140C67A70 + 8LL * (v9[3] & 0x3FFFFF)) >> 4) & 0x7FFLL) == *(_WORD *)BugCheckParameter2 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v6);
        MiMoveBadHugeRangeCrossPartition(v9[3], BugCheckParameter2, v2);
        v6 = ExAcquireSpinLockShared(&dword_140C66F90);
        v7 = 0LL;
        for ( i = (_QWORD *)qword_140C66FE0; i; i = (_QWORD *)*i )
          v7 = i;
      }
    }
    v17 = *(_QWORD *)(BugCheckParameter2 + 16216);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66F90);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && v6 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v15 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
    result = v6;
    __writecr8(v6);
  }
  while ( v17 );
  v23 = *(_QWORD *)(BugCheckParameter2 + 448);
  if ( v23 )
    KeBugCheckEx(0x1Au, 0x30000003uLL, BugCheckParameter2, v23, *(_QWORD *)(BugCheckParameter2 + 16216));
  return result;
}
