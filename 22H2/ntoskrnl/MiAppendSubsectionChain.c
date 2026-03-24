/*
 * XREFs of MiAppendSubsectionChain @ 0x1402F97CC
 * Callers:
 *     MiExtendSection @ 0x140669618 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x1402957F0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x1402B32E0 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x1402F5120 (MiInsertUnusedSubsection.c)
 *     MiInsertSubsectionNode @ 0x1402F994C (MiInsertSubsectionNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055502C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14055510C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  bool v6; // r15
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 j; // rdi
  __int64 i; // rdx
  __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  __int64 inserted; // rax
  __int64 v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r11
  _DWORD *v32; // r9
  int v33; // eax
  __int64 v36; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v36 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v10 = v36;
  v11 = 2;
  v12 = v8;
  if ( *(_QWORD *)(v36 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v23 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        goto LABEL_15;
      }
    }
    else
    {
      v6 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v4; i; i = *(_QWORD *)(v18 + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( MiControlAreaUsingExtents(v10) )
          *(_DWORD *)(v18 + 52) |= 0x40000000u;
      }
      goto LABEL_20;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    v11 = 1;
LABEL_15:
    __writecr8(v12);
    return v11;
  }
  if ( *(_QWORD *)(v4 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v4 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v4, 0x3FFFFFFFLL);
      *(_QWORD *)(v4 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += inserted;
    }
    while ( v4 );
    goto LABEL_42;
  }
  if ( (a3 & 2) != 0 )
  {
    v6 = 1;
LABEL_20:
    if ( !v6 )
      goto LABEL_4;
    do
    {
      v29 = MiDecrementSubsectionViewCount((_QWORD *)v4, 24LL, v9);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v29;
    }
    while ( v4 );
LABEL_42:
    v10 = v36;
  }
LABEL_4:
  *(_WORD *)(a1 + 34) &= 0xFu;
  v13 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 52) &= 0xC0000000;
  *(_DWORD *)(a1 + 40) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v14;
  for ( j = v14; j; v10 = v36 )
  {
    MiInsertSubsectionNode(v10, j, 1LL);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v23 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v12);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v36 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
