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
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // ebx
  int v34; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v37; // r8d
  bool v38; // zf
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  _BOOL8 v43; // rdx
  ULONG_PTR v44; // r15
  struct _KTHREAD *v45; // rbx
  unsigned int SessionId; // edx
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v59; // eax
  unsigned __int8 v60; // cl
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  int v64; // [rsp+30h] [rbp-40h]
  __int64 v65; // [rsp+48h] [rbp-28h]
  unsigned int v66; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v69; // [rsp+B0h] [rbp+40h]
  int v70; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v71; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v70 = 0;
  CurrentThread = KeGetCurrentThread();
  v65 = *(_QWORD *)BugCheckParameter2;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v69 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v33 = 5;
    v34 = a2 & 0x400;
    if ( !v34 || (v33 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v33);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v34 )
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
    v64 = 1;
    goto LABEL_7;
  }
  if ( (a2 & 0x80u) != 0 )
    v22 = 3LL;
  else
    v22 = (a2 >> 7) & 2;
  v14 = MiControlAreaRequiresCharge(v12, v22);
  v64 = v14;
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
      if ( !v69 )
      {
        v70 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v15 = (volatile LONG *)(v12 + 72);
      v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      if ( v64 != 2
        || (!(v37 = v69)
          ? (v38 = CommittedPages == MiGetCommittedPages(v12))
          : (v38 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v38) )
      {
        v17 = MiIncrementSubsectionViewCount(BugCheckParameter2);
        v18 = v17;
        if ( v17 != 1 )
        {
          if ( v17 == 3 )
            CommittedPages = 0LL;
          if ( v69 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v69 ? 112LL : 56LL), 1LL);
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
                v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                v38 = (v59 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v59;
                if ( v38 )
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
          v32 = MiDecrementSubsectionViewCount(BugCheckParameter2);
          ExReleaseSpinLockExclusiveFromDpcLevel(v15);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v60 = KeGetCurrentIrql(), v60 <= 0xFu)
            && (unsigned __int8)v16 <= 0xFu )
          {
            v13 = -1LL;
            if ( v60 >= 2u )
            {
              v61 = KeGetCurrentPrcb();
              v62 = v61->SchedulerAssist;
              v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
              v38 = (v63 & v62[5]) == 0;
              v62[5] &= v63;
              if ( v38 )
              {
                KiRemoveSystemWorkPriorityKick(v61);
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
            CommittedPages = v32;
LABEL_59:
          __writecr8(v16);
          goto LABEL_21;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v15);
        if ( KiIrqlFlags
          && (KiIrqlFlags & 1) != 0
          && (v52 = KeGetCurrentIrql(), v52 <= 0xFu)
          && (unsigned __int8)v16 <= 0xFu )
        {
          v13 = -1LL;
          if ( v52 >= 2u )
          {
            v53 = KeGetCurrentPrcb();
            v54 = v53->SchedulerAssist;
            v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v38 = (v55 & v54[5]) == 0;
            v54[5] &= v55;
            if ( v38 )
            {
              KiRemoveSystemWorkPriorityKick(v53);
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
      v66 = CommittedPages;
      if ( v37 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages(v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v38 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(v16);
      v43 = v69;
      if ( !v69 )
      {
        v44 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v44);
        v45 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v44) == 1 )
          SessionId = MmGetSessionIdEx(v45->ApcState.Process);
        else
          SessionId = -1;
        --v45->SpecialApcDisable;
        v71 = ++v45->AbAllocationRegionCount;
        v47 = ((char)v45->AbEntrySummary | (char)v45->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v38 = !_BitScanReverse((unsigned int *)&v48, v47);
          if ( v38 )
            goto LABEL_93;
          v49 = (__int64)&v45->LockEntries[v48];
          v47 &= ~(1 << v48);
          if ( (*(_BYTE *)(v49 + 26) & 1) != 0
            && (*(_DWORD *)(v49 + 32) & 1) == 0
            && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v44 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v49 + 40) == SessionId )
          {
            *(_BYTE *)(v49 + 26) &= ~1u;
            if ( *(_QWORD *)(v49 + 32) )
              break;
          }
        }
        if ( !v49 )
        {
LABEL_93:
          if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v45, v44, SessionId, 0LL);
          goto LABEL_105;
        }
        *(_BYTE *)(v49 + 32) |= 2u;
        if ( *(__int64 *)(v49 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49);
        *(_DWORD *)(v49 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v49 + 25) &= ~1u;
        *(_QWORD *)(v49 + 32) = 0LL;
        v50 = (signed __int64)(v49 - (unsigned __int64)v45->LockEntries) / 96;
        if ( v71 == 1 )
          v45->AbEntrySummary |= 1 << v50;
        else
          _InterlockedOr8((volatile signed __int8 *)&v45->AbOrphanedEntrySummary, 1 << v50);
LABEL_105:
        --v45->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v45);
        v38 = v45->SpecialApcDisable++ == -1;
        if ( v38 && ($C459BD0D405E8E46662177FB3D0A143F *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
          KiCheckForKernelApcDelivery(v51);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        v12 = v65;
        v43 = 0LL;
        v70 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v66 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v43,
          v66);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  CommittedPages = 0LL;
  v19 = -1073740277;
LABEL_21:
  v20 = v69;
  if ( !v69 && v70 == 1 )
  {
    v23 = *(_QWORD *)v65 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, v13) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
      v25 = (unsigned int)MmGetSessionIdEx(v24->ApcState.Process);
    else
      v25 = 0xFFFFFFFFLL;
    --v24->SpecialApcDisable;
    v26 = ++v24->AbAllocationRegionCount;
    v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v38 = !_BitScanReverse((unsigned int *)&v28, v27);
      if ( v38 )
        break;
      v29 = (__int64)&v24->LockEntries[v28];
      v27 &= ~(1 << v28);
      if ( (*(_BYTE *)(v29 + 26) & 1) != 0
        && (*(_DWORD *)(v29 + 32) & 1) == 0
        && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v29 + 40) == (_DWORD)v25 )
      {
        *(_BYTE *)(v29 + 26) &= ~1u;
        if ( *(_QWORD *)(v29 + 32) )
        {
          if ( v29 )
          {
            *(_BYTE *)(v29 + 32) |= 2u;
            if ( *(__int64 *)(v29 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
            *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v29 + 25) &= ~1u;
            *(_QWORD *)(v29 + 32) = 0LL;
            v30 = (signed __int64)(v29 - (unsigned __int64)v24->LockEntries) / 96;
            if ( v26 == 1 )
              v24->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v30);
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
    v38 = v24->SpecialApcDisable++ == -1;
    if ( v38 && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery(v31);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v20 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v65 + 60) & 0x3FF)),
      v20,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v19;
}
