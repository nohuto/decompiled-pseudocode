/*
 * XREFs of MiReferenceActiveSubsection @ 0x1403323F0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x140214CC0 (MiRemoveUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetCommittedPages @ 0x14034C3F0 (MiGetCommittedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140668AE8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // r13d
  KIRQL v6; // r12
  BOOL v9; // esi
  __int64 v10; // rdi
  BOOL v11; // esi
  int v12; // r15d
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // edx
  bool v18; // zf
  int SubsectionCharges; // r15d
  __int64 CommittedPages; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  __int64 v41; // [rsp+60h] [rbp+8h]
  unsigned int v42; // [rsp+68h] [rbp+10h]
  char v43; // [rsp+70h] [rbp+18h]

  v3 = *BugCheckParameter2;
  v4 = 0LL;
  v5 = 0;
  v6 = a3;
  v41 = 0LL;
  v9 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v42 = v9;
  if ( a3 == 17 )
  {
    v5 = 1;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  v43 = v6 + 1;
  while ( 1 )
  {
    v10 = *BugCheckParameter2;
    if ( !BugCheckParameter2[1] )
      goto LABEL_17;
    v11 = *(_QWORD *)(v10 + 64) != 0LL;
    v12 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    if ( v12 > 1 )
    {
      if ( v11 && (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
      {
        if ( (*((_BYTE *)BugCheckParameter2 + 34) & 8) != 0 )
          MiRemoveUnusedSubsection((__int64)BugCheckParameter2);
        *((_WORD *)BugCheckParameter2 + 16) |= 1u;
      }
      if ( v12 == 2 && (a2 & 0x20) != 0 && v41 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << v43);
            v18 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v6);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
          v42,
          v41);
        if ( !v5 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      }
      else if ( v5 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags )
        {
          v33 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v6 <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << v43);
            v18 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        __writecr8(v6);
      }
      return 0LL;
    }
    if ( !v12 )
      break;
    v9 = v42;
    v4 = v41;
LABEL_17:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && v6 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << v43);
          v18 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      __writecr8(v6);
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v9, v4);
      if ( !v5 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v41 = MiComputeCrossPartitionSectionCharges(BugCheckParameter2);
    v4 = v41;
    if ( v41 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v14 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && v6 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << v43);
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      __writecr8(v6);
      SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, v41);
      if ( SubsectionCharges < 0 )
      {
        if ( !v5 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        return (unsigned int)SubsectionCharges;
      }
      a2 |= 0x20u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      v4 = v41;
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v9 )
        {
          if ( !BugCheckParameter2[1] )
          {
LABEL_32:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            if ( KiIrqlFlags )
            {
              v21 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && v6 <= 0xFu && v21 >= 2u )
              {
                v22 = KeGetCurrentPrcb();
                v23 = v22->SchedulerAssist;
                v24 = ~(unsigned __int16)(-1LL << v43);
                v18 = (v24 & v23[5]) == 0;
                v23[5] &= v24;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v22);
              }
            }
            __writecr8(v6);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v9,
              v41);
            if ( !v5 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
        }
        else
        {
          CommittedPages = MiGetCommittedPages(v3);
        }
        if ( v41 != CommittedPages )
          goto LABEL_32;
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  if ( v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v6 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << v43);
        v18 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v6);
  }
  return 3221227019LL;
}
