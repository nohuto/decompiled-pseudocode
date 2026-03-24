/*
 * XREFs of MiCreatePrototypePtes @ 0x140278478
 * Callers:
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiControlAreaRequiresCharge @ 0x14025A51C (MiControlAreaRequiresCharge.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402788E0 (MiUpdateSystemProtoPtesTree.c)
 *     MiDecrementSubsectionViewCount @ 0x1402957F0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140296460 (MiIncrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x140297350 (MiGetCommittedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x140554E08 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055502C (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x140635A1C (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFCC0 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r15
  PVOID Pool; // rax
  void *v9; // r12
  int v10; // ebx
  __int64 CommittedPages; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r11
  int v14; // eax
  volatile LONG *v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  int v18; // r13d
  unsigned int v19; // r15d
  _BOOL8 v20; // rdx
  __int64 v22; // rdx
  ULONG_PTR v23; // r14
  struct _KTHREAD *v24; // rbx
  ULONG_PTR v25; // r9
  unsigned __int8 v26; // r13
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // ebx
  int v35; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v38; // r8d
  bool v39; // zf
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  _BOOL8 v44; // rdx
  ULONG_PTR v45; // r15
  struct _KTHREAD *v46; // rbx
  __int64 SessionId; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v60; // eax
  unsigned __int8 v61; // cl
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  int v65; // [rsp+30h] [rbp-40h]
  __int64 v66; // [rsp+48h] [rbp-28h]
  unsigned int v67; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v70; // [rsp+B0h] [rbp+40h]
  int v71; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v72; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v71 = 0;
  CurrentThread = KeGetCurrentThread();
  v66 = *(_QWORD *)BugCheckParameter2;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v70 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v34 = 5;
    v35 = a2 & 0x400;
    if ( !v35 || (v34 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v34);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v35 )
          MiChargeLargeProtoSubsection(BugCheckParameter2, 0LL);
      }
      return (unsigned int)FileExtents;
    }
    return 3221225626LL;
  }
  if ( *(_QWORD *)(v5 + 64) )
  {
    CommittedPages = a3;
    v12 = v5;
  }
  else
  {
    v12 = v5;
    CommittedPages = MiGetCommittedPages(v5);
  }
  LOWORD(v13) = -1;
  if ( (a2 & 4) != 0 )
  {
    v14 = 1;
    v65 = 1;
    goto LABEL_7;
  }
  if ( (a2 & 0x80u) != 0 )
    v22 = 3LL;
  else
    v22 = (a2 >> 7) & 2;
  v14 = MiControlAreaRequiresCharge(v12, v22);
  v65 = v14;
  if ( v14 )
  {
    while ( 1 )
    {
LABEL_7:
      if ( v14 == 2 )
      {
        if ( CommittedPages )
        {
          SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
          v13 = -1LL;
          v19 = SubsectionCharges;
          if ( SubsectionCharges < 0 )
          {
            CommittedPages = 0LL;
            goto LABEL_21;
          }
        }
      }
      else
      {
        CommittedPages = 0LL;
      }
      if ( !v70 )
      {
        v71 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v15 = (volatile LONG *)(v12 + 72);
      v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      if ( v65 != 2
        || (!(v38 = v70)
          ? (v39 = CommittedPages == MiGetCommittedPages(v12))
          : (v39 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v39) )
      {
        v17 = MiIncrementSubsectionViewCount(BugCheckParameter2);
        v18 = v17;
        if ( v17 != 1 )
        {
          if ( v17 == 3 )
            CommittedPages = 0LL;
          if ( v70 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v70 ? 112LL : 56LL), 1LL);
            ExReleaseSpinLockExclusiveFromDpcLevel(v15);
            if ( KiIrqlFlags
              && (KiIrqlFlags & 1) != 0
              && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu)
              && (unsigned __int8)v16 <= 0xFu )
            {
              v13 = -1LL;
              if ( CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                v39 = (v60 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v60;
                if ( v39 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  goto LABEL_19;
                }
              }
            }
            else
            {
LABEL_19:
              v13 = -1LL;
            }
            __writecr8(v16);
            P = 0LL;
            v19 = 0;
            goto LABEL_21;
          }
          v33 = MiDecrementSubsectionViewCount(BugCheckParameter2);
          ExReleaseSpinLockExclusiveFromDpcLevel(v15);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v61 = KeGetCurrentIrql(), v61 <= 0xFu)
            && (unsigned __int8)v16 <= 0xFu )
          {
            v13 = -1LL;
            if ( v61 >= 2u )
            {
              v62 = KeGetCurrentPrcb();
              v63 = v62->SchedulerAssist;
              v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
              v39 = (v64 & v63[5]) == 0;
              v63[5] &= v64;
              if ( v39 )
              {
                KiRemoveSystemWorkPriorityKick(v62);
                goto LABEL_56;
              }
            }
          }
          else
          {
LABEL_56:
            v13 = -1LL;
          }
          v19 = -1073741302;
          if ( v18 == 3 )
            CommittedPages = v33;
LABEL_59:
          __writecr8(v16);
          goto LABEL_21;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v15);
        if ( KiIrqlFlags
          && (KiIrqlFlags & 1) != 0
          && (v53 = KeGetCurrentIrql(), v53 <= 0xFu)
          && (unsigned __int8)v16 <= 0xFu )
        {
          v13 = -1LL;
          if ( v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v39 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v39 )
            {
              KiRemoveSystemWorkPriorityKick(v54);
              goto LABEL_119;
            }
          }
        }
        else
        {
LABEL_119:
          v13 = -1LL;
        }
        v19 = -1073741670;
        goto LABEL_59;
      }
      v67 = CommittedPages;
      if ( v38 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages(v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v40 = KeGetCurrentIrql();
          if ( v40 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v40 >= 2u )
          {
            v41 = KeGetCurrentPrcb();
            v42 = v41->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v39 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
      }
      __writecr8(v16);
      v44 = v70;
      if ( !v70 )
      {
        v45 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v45);
        v46 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v45) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v46->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v46->SpecialApcDisable;
        v72 = ++v46->AbAllocationRegionCount;
        LODWORD(v48) = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v39 = !_BitScanReverse((unsigned int *)&v49, v48);
          if ( v39 )
            goto LABEL_93;
          v50 = (__int64)&v46->LockEntries[v49];
          v48 = ~(1 << v49) & (unsigned int)v48;
          if ( (*(_BYTE *)(v50 + 26) & 1) != 0
            && (*(_DWORD *)(v50 + 32) & 1) == 0
            && (*(_QWORD *)(v50 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v45 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v50 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v50 + 26) &= ~1u;
            if ( *(_QWORD *)(v50 + 32) )
              break;
          }
        }
        if ( !v50 )
        {
LABEL_93:
          if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v46, v45, (unsigned int)SessionId, 0LL);
          goto LABEL_105;
        }
        *(_BYTE *)(v50 + 32) |= 2u;
        if ( *(__int64 *)(v50 + 32) < 0 )
          KiAbEntryRemoveFromTree(v50, SessionId, v48);
        *(_DWORD *)(v50 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v50 + 25) &= ~1u;
        *(_QWORD *)(v50 + 32) = 0LL;
        v51 = (signed __int64)(v50 - (unsigned __int64)v46->LockEntries) / 96;
        if ( v72 == 1 )
          v46->AbEntrySummary |= 1 << v51;
        else
          _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v51);
LABEL_105:
        --v46->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v46);
        v39 = v46->SpecialApcDisable++ == -1;
        if ( v39 && ($C459BD0D405E8E46662177FB3D0A143F *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
          KiCheckForKernelApcDelivery(v52);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        v12 = v66;
        v44 = 0LL;
        v71 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v67 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v44,
          v67);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  CommittedPages = 0LL;
  v19 = -1073740277;
LABEL_21:
  v20 = v70;
  if ( !v70 && v71 == 1 )
  {
    v23 = *(_QWORD *)v66 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, v13) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
      v25 = (unsigned int)MmGetSessionIdEx(v24->ApcState.Process);
    else
      v25 = 0xFFFFFFFFLL;
    --v24->SpecialApcDisable;
    v26 = ++v24->AbAllocationRegionCount;
    v27 = v23 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v28) = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v39 = !_BitScanReverse((unsigned int *)&v29, v28);
      if ( v39 )
        break;
      v30 = (__int64)&v24->LockEntries[v29];
      v28 = ~(1 << v29) & (unsigned int)v28;
      if ( (*(_BYTE *)(v30 + 26) & 1) != 0
        && (*(_DWORD *)(v30 + 32) & 1) == 0
        && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v27
        && *(_DWORD *)(v30 + 40) == (_DWORD)v25 )
      {
        *(_BYTE *)(v30 + 26) &= ~1u;
        if ( *(_QWORD *)(v30 + 32) )
        {
          if ( v30 )
          {
            *(_BYTE *)(v30 + 32) |= 2u;
            if ( *(__int64 *)(v30 + 32) < 0 )
              KiAbEntryRemoveFromTree(v30, v28, v27);
            *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v30 + 25) &= ~1u;
            *(_QWORD *)(v30 + 32) = 0LL;
            v31 = (signed __int64)(v30 - (unsigned __int64)v24->LockEntries) / 96;
            if ( v26 == 1 )
              v24->AbEntrySummary |= 1 << v31;
            else
              _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v31);
            goto LABEL_48;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
LABEL_48:
    --v24->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v24);
    v39 = v24->SpecialApcDisable++ == -1;
    if ( v39 && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery(v32);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v20 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v66 + 60) & 0x3FF)),
      v20,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v19;
}
