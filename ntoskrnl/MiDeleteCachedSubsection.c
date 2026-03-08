/*
 * XREFs of MiDeleteCachedSubsection @ 0x140621708
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1406236E4 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDestroySection @ 0x1402017AC (MiDestroySection.c)
 *     MiDecrementModifiedWriteCount @ 0x140212BE4 (MiDecrementModifiedWriteCount.c)
 *     MiReduceUnusedSubsectionCount @ 0x140214D4C (MiReduceUnusedSubsectionCount.c)
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x1402D4DE8 (MiInsertUnusedSubsection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiRemoveUnusedSegment @ 0x14034C47C (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIsSubsectionClean @ 0x140622654 (MiIsSubsectionClean.c)
 *     MiPreventControlAreaDelete @ 0x14062297C (MiPreventControlAreaDelete.c)
 *     MiPurgeSubsection @ 0x140623294 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14075F248 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  _QWORD **v5; // r15
  unsigned __int64 v6; // r14
  _QWORD *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  __int64 inserted; // rdi
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  int v27; // ebx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  int IsSubsectionClean; // eax
  int v33; // r15d
  KIRQL v34; // al
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int64 v44; // r14
  signed __int64 v45; // r12
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int64 v50; // r14
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  __int64 v55; // r8
  unsigned __int64 v56; // r14
  int v57; // eax
  unsigned __int8 v58; // cl
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  BOOL v62; // r12d
  KIRQL v63; // al
  int v64; // ecx
  _QWORD *v65; // rdi
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  __int64 v70; // r12
  __int64 v71; // rdx
  _QWORD *v72; // rdi
  unsigned __int8 v73; // cl
  bool v74; // cf
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  _DWORD *v77; // r8
  int v78; // eax
  ULONG_PTR v79; // [rsp+40h] [rbp-68h]
  struct _IO_STATUS_BLOCK v80; // [rsp+48h] [rbp-60h] BYREF
  struct _FILE_OBJECT *Object; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  __int64 v84; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1408);
  v3 = 1LL;
  v80 = 0LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1784);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    result = 3221226021LL;
LABEL_25:
    __writecr8(v6);
    return result;
  }
  v14 = (_QWORD *)(v4 + 80);
  v15 = *(_QWORD *)(v4 + 80);
  v16 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v15 + 8) != v4 + 80 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v14 = v14;
  MiReduceUnusedSubsectionCount((unsigned int *)v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v17 = *(_DWORD *)(v3 + 56);
  if ( (v17 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
    result = 3221225587LL;
    goto LABEL_25;
  }
  if ( (v17 & 8) != 0 )
  {
    if ( *(int *)(v4 + 52) < 0 )
    {
      inserted = MiInsertUnusedSubsection(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  if ( *(_QWORD *)(v4 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v4, 0LL, 0LL);
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  P = *(PVOID *)(v4 + 8);
  if ( v27 )
  {
    ++*(_DWORD *)(v3 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
    __writecr8(v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        v35 = v34;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags )
        {
          v36 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
            v12 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v37);
          }
        }
        __writecr8(v35);
      }
      v33 = -1073741792;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    Object = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      v40 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v41);
      }
    }
    __writecr8(v6);
    v79 = *(_QWORD *)(v4 + 8);
    v84 = v79 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v33 = FsRtlAcquireFileForCcFlushEx(Object);
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v45 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1752LL) = 0LL;
    if ( v33 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v45 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v12 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
      __writecr8(v44);
      v50 = (unsigned __int64)Object;
      if ( v33 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(Object);
        v33 = -1073741431;
      }
      if ( !v45 )
      {
        MiDeleteControlArea((PVOID)v3);
        ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
        return (unsigned int)v33;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v12 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v47);
        }
      }
      __writecr8(v44);
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v50 = (unsigned __int64)Object;
      v33 = MiFlushSectionInternal(v79, v84, (__int64 *)v4, v4, 0LL, 2u, &v80);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(Object);
    }
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v3 + 64), v50, 0x63536D4Du);
  }
  v56 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v57 = *(_DWORD *)(v3 + 56);
  if ( (v57 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v57 & 0xFFFFFEFF;
    goto LABEL_110;
  }
  if ( v33 < 0 )
    goto LABEL_108;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v33 = -1073741823;
LABEL_108:
    v64 = 1;
    goto LABEL_109;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags )
  {
    v58 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v58 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v58 >= 2u )
    {
      v59 = KeGetCurrentPrcb();
      v60 = v59->SchedulerAssist;
      v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
      v12 = (v61 & v60[5]) == 0;
      v60[5] &= v61;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v59);
    }
  }
  __writecr8(v56);
  v62 = MiPurgeSubsection(v4) == 0;
  v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v64 = v62;
  LOBYTE(v56) = v63;
LABEL_109:
  *(_DWORD *)(v3 + 56) &= ~0x100u;
  if ( (*(_DWORD *)(v3 + 56) & 1) == 0 )
  {
    v70 = 0LL;
    if ( v64 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v33 = -1073741823;
      v70 = MiDecrementSubsectionViewCount((_QWORD *)v4, 0LL, v55);
      if ( !*(_QWORD *)(v4 + 96) )
        v70 += MiInsertUnusedSubsection(v4);
      P = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v4 + 120), 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v72 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v73 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v73 <= 0xFu && (unsigned __int8)v56 <= 0xFu )
        {
          v74 = v73 < 2u;
LABEL_140:
          if ( !v74 )
          {
            v76 = KeGetCurrentPrcb();
            v77 = v76->SchedulerAssist;
            v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
            v12 = (v78 & v77[5]) == 0;
            v77[5] &= v78;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v76);
          }
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        LOBYTE(v71) = v56;
        MiDestroySection(v3, v71, 0LL);
        goto LABEL_145;
      }
      v70 += MiInsertUnusedSegment(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        v75 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v75 <= 0xFu && (unsigned __int8)v56 <= 0xFu )
        {
          v74 = v75 < 2u;
          goto LABEL_140;
        }
      }
    }
    __writecr8((unsigned __int8)v56);
LABEL_145:
    if ( v72 )
      MiReleaseControlAreaWaiters(v72);
    if ( v70 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v70);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v33;
  }
LABEL_110:
  MiDecrementSubsectionViewCount((_QWORD *)v4, 0LL, v55);
  v65 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags )
  {
    v66 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v66 >= 2u )
    {
      v67 = KeGetCurrentPrcb();
      v68 = v67->SchedulerAssist;
      v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
      v12 = (v69 & v68[5]) == 0;
      v68[5] &= v69;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v67);
    }
  }
  __writecr8((unsigned __int8)v56);
  if ( v65 )
    MiReleaseControlAreaWaiters(v65);
  return 3221225473LL;
}
