/*
 * XREFs of MiAppendSubsectionChain @ 0x1402A5090
 * Callers:
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x140214E00 (MiInsertSubsectionNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x1402D4DE8 (MiInsertUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140668EB4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v4; // rdi
  bool v6; // r15
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned __int64 v11; // rsi
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rax
  __int64 j; // rdi
  ULONG_PTR i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  __int64 inserted; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r11
  _DWORD *v30; // r9
  int v31; // eax
  __int64 v34; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v34 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v9 = v34;
  v10 = 2;
  v11 = v8;
  if ( *(_QWORD *)(v34 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v12 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        goto LABEL_16;
      }
    }
    else
    {
      v6 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v4; i; i = *(_QWORD *)(i + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( (*(_BYTE *)(v34 + 62) & 0xC) != 0 )
          *(_DWORD *)(i + 52) |= 0x40000000u;
      }
      v12 = !v6;
      goto LABEL_4;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v12 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    v10 = 1;
LABEL_16:
    __writecr8(v11);
    return v10;
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
    goto LABEL_41;
  }
  v12 = (a3 & 2) == 0;
LABEL_4:
  if ( !v12 )
  {
    do
    {
      v27 = MiDecrementSubsectionViewCount(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v27;
    }
    while ( v4 );
LABEL_41:
    v9 = v34;
  }
  *(_WORD *)(a1 + 34) &= 0xFu;
  v13 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 52) &= 0xC0000000;
  *(_DWORD *)(a1 + 40) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v14;
  for ( j = v14; j; v9 = v34 )
  {
    MiInsertSubsectionNode(v9, j, 1uLL);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v12 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(v11);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v34 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
