/*
 * XREFs of MiAddViewsForSection @ 0x140295C70
 * Callers:
 *     MiReferenceDataSubsections @ 0x14027D7AC (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x140291460 (MmMapViewInSystemCache.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MiCommitPagefileBackedSection @ 0x14067FEA4 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D130 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiCreatePrototypePtes @ 0x140278478 (MiCreatePrototypePtes.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x140295740 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x140296380 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055502C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(
        __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        _DWORD *SchedulerAssist,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // edi
  ULONG_PTR v8; // rsi
  volatile signed __int32 *v9; // rcx
  unsigned __int8 CurrentIrql; // r12
  int active; // eax
  unsigned __int64 v12; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  __int64 result; // rax
  ULONG_PTR v16; // rsi
  struct _KTHREAD *v17; // rdi
  unsigned __int8 v18; // r15
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  volatile signed __int64 *v27; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v29; // r10
  unsigned int v30; // edx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v37; // r9
  int v38; // edx
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r11
  _DWORD *v41; // r10
  int v42; // edx
  volatile LONG *v43; // rsi
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // edx
  unsigned int v48; // r12d
  volatile signed __int64 *v49; // rcx
  ULONG_PTR v50; // r9
  ULONG_PTR v51; // r10
  unsigned int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  unsigned __int8 v56; // al
  __int64 v57; // r13
  unsigned __int8 v58; // cl
  KIRQL v59; // r14
  struct _KPRCB *v60; // r9
  int v61; // eax
  _DWORD *v62; // r8
  int v63; // eax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // edx
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // edx
  volatile signed __int64 *v72; // rcx
  unsigned int v73; // r8d
  unsigned int v74; // edx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  KIRQL v78; // al
  _DWORD *v79; // r8
  unsigned int v80; // [rsp+30h] [rbp-69h]
  char v81; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  __int64 v86; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v88; // [rsp+74h] [rbp-25h]
  __int64 v89; // [rsp+78h] [rbp-21h]
  ULONG_PTR v90; // [rsp+80h] [rbp-19h]
  __int64 v91; // [rsp+80h] [rbp-19h]
  struct _KTHREAD *BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v93; // [rsp+90h] [rbp-9h]
  __int64 v94; // [rsp+98h] [rbp-1h]
  __int64 v95; // [rsp+98h] [rbp-1h]
  _DWORD *v96; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v98; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v99; // [rsp+100h] [rbp+67h]
  unsigned __int8 v101; // [rsp+110h] [rbp+77h]
  unsigned __int8 v102; // [rsp+110h] [rbp+77h]
  KIRQL v103; // [rsp+110h] [rbp+77h]
  unsigned __int8 v104; // [rsp+110h] [rbp+77h]
  unsigned int v105; // [rsp+118h] [rbp+7Fh]
  unsigned int v106; // [rsp+118h] [rbp+7Fh]

  v4 = *BugCheckParameter2;
  v5 = 0;
  v6 = (unsigned int)SchedulerAssist;
  v80 = (unsigned int)SchedulerAssist;
  v89 = 0LL;
  v8 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64) )
  {
    v98 = 1;
    CurrentThread = 0LL;
    v86 = 0LL;
  }
  else
  {
    v26 = *(_QWORD *)v4;
    v98 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v86 = v26;
    ExAcquirePushLockExclusiveEx(v26 + 40, 0LL);
  }
  v9 = (volatile signed __int32 *)(v4 + 72);
  v96 = (_DWORD *)(v4 + 72);
  v88 = v6 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = (volatile signed __int32 *)(v4 + 72);
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v9, CurrentIrql, (__int64)SchedulerAssist, a4);
  if ( (v6 & 1) != 0 )
  {
    ++*(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 88);
    v6 |= 4u;
    v80 = v6;
  }
  BugCheckParameter3 = -1;
  v81 = CurrentIrql + 1;
  while ( 1 )
  {
    v105 = *(_DWORD *)(v8 + 44);
    v90 = v8;
    if ( *(_QWORD *)(v8 + 8) )
      break;
    v93 = *(_DWORD *)(v8 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << v81);
          v20 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v98 )
    {
      v27 = (volatile signed __int64 *)(v86 + 40);
      BugCheckParameter2a = v86 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v27);
        v27 = (volatile signed __int64 *)(v86 + 40);
      }
      BugCheckParameter1 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v27) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(BugCheckParameter1->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      v29 = (ULONG_PTR)BugCheckParameter1;
      --BugCheckParameter1->SpecialApcDisable;
      v101 = ++BugCheckParameter1->AbAllocationRegionCount;
      v30 = (*(char *)(v29 + 792) | *(char *)(v29 + 870)) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v31, v30);
      if ( v20 )
        goto LABEL_80;
      while ( 1 )
      {
        v32 = ~(1 << v31);
        v33 = (__int64)&BugCheckParameter1->LockEntries[v31];
        v30 &= v32;
        v94 = v33;
        if ( (*(_BYTE *)(v33 + 26) & 1) != 0
          && (*(_DWORD *)(v33 + 32) & 1) == 0
          && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v33 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v33 + 26) &= ~1u;
          if ( *(_QWORD *)(v33 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v31, v30);
        if ( v20 )
          goto LABEL_80;
      }
      if ( !v33 )
      {
LABEL_80:
        if ( (*((_DWORD *)&BugCheckParameter1->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v33 + 32) |= 2u;
        if ( *(__int64 *)(v33 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
          v33 = v94;
          v29 = (ULONG_PTR)BugCheckParameter1;
        }
        *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v33 + 25) &= ~1u;
        *(_QWORD *)(v33 + 32) = 0LL;
        v34 = 1 << ((v33 - *(_QWORD *)(v29 + 800)) / 96);
        if ( v101 == 1 )
          *(_BYTE *)(v29 + 792) |= v34;
        else
          _InterlockedOr8((volatile signed __int8 *)(v29 + 870), v34);
      }
      --*(_BYTE *)(v29 + 794);
      KiAbThreadRemoveBoosts(v29);
      v20 = BugCheckParameter1->SpecialApcDisable++ == -1;
      if ( v20
        && ($C459BD0D405E8E46662177FB3D0A143F *)BugCheckParameter1->ApcState.ApcListHead[0].Flink != &BugCheckParameter1->152 )
      {
        KiCheckForKernelApcDelivery((__int64)BugCheckParameter1);
      }
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    if ( (v6 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v8, v80, v105 - v93, v105);
    v106 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_191;
      if ( !v98 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v86 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      goto LABEL_56;
    }
    if ( !v98 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v86 + 40, 0LL);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      goto LABEL_14;
    }
LABEL_48:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
LABEL_14:
    if ( a2 )
    {
      v12 = *(unsigned int *)(v8 + 44);
      if ( a2 <= v12 )
        goto LABEL_16;
      a2 -= v12;
    }
    v8 = *(_QWORD *)(v8 + 16);
    v89 = v90;
    if ( !v98 )
    {
      v89 = v90;
      v80 = v88 | 4;
    }
LABEL_56:
    if ( !v8 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v96, retaddr);
      else
        *v96 = 0;
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v63 = v14[6] - 1;
          v14[6] = v63;
          if ( !v63 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v64 = KeGetCurrentIrql();
          if ( v64 <= 0xFu && CurrentIrql <= 0xFu && v64 >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            v66 = v65->SchedulerAssist;
            v67 = ~(unsigned __int16)(-1LL << v81);
            v20 = (v67 & v66[5]) == 0;
            v66[5] &= v67;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v98 )
        return 0LL;
      v16 = v86 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx(v17->ApcState.Process);
      --v17->SpecialApcDisable;
      v18 = ++v17->AbAllocationRegionCount;
      v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      if ( v20 )
      {
LABEL_50:
        v23 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v22 = (__int64)&v17->LockEntries[v21];
          v19 &= ~(1 << v21);
          if ( (*(_BYTE *)(v22 + 26) & 1) != 0
            && (*(_DWORD *)(v22 + 32) & 1) == 0
            && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v23 = BugCheckParameter3;
            if ( *(_DWORD *)(v22 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v22 + 26) &= ~1u;
              if ( *(_QWORD *)(v22 + 32) )
                break;
            }
          }
          v20 = !_BitScanReverse((unsigned int *)&v21, v19);
          if ( v20 )
            goto LABEL_50;
        }
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v24 = (signed __int64)(v22 - (unsigned __int64)v17->LockEntries) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
LABEL_38:
          --v17->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v17);
          v20 = v17->SpecialApcDisable++ == -1;
          if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
            KiCheckForKernelApcDelivery(v25);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v16, v23, 0LL);
      goto LABEL_38;
    }
  }
  if ( (v6 & 0x400) == 0 )
  {
    active = MiReferenceActiveSubsection(v8);
    v106 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v43 = (volatile LONG *)(v4 + 72);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = v45->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << v81);
              v20 = (v47 & v46[5]) == 0;
              v46[5] &= v47;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v45);
            }
          }
        }
        __writecr8(CurrentIrql);
        v48 = v98;
        if ( !v98 )
        {
          v49 = (volatile signed __int64 *)(v86 + 40);
          BugCheckParameter2b = v86 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v49);
            v49 = (volatile signed __int64 *)(v86 + 40);
          }
          v99 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v49) == 1 )
            v50 = (unsigned int)MmGetSessionIdEx(v99->ApcState.Process);
          else
            v50 = 0xFFFFFFFFLL;
          v51 = (ULONG_PTR)v99;
          --v99->SpecialApcDisable;
          v102 = ++v99->AbAllocationRegionCount;
          v52 = ((char)v99->AbEntrySummary | (char)v99->AbOrphanedEntrySummary) ^ 0x3F;
          v20 = !_BitScanReverse((unsigned int *)&v53, v52);
          if ( v20 )
            goto LABEL_135;
          while ( 1 )
          {
            v54 = (__int64)&v99->LockEntries[v53];
            v95 = v54;
            v52 &= ~(1 << v53);
            if ( (*(_BYTE *)(v54 + 26) & 1) != 0
              && (*(_DWORD *)(v54 + 32) & 1) == 0
              && (*(_QWORD *)(v54 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v54 + 40) == (_DWORD)v50 )
            {
              *(_BYTE *)(v54 + 26) &= ~1u;
              if ( *(_QWORD *)(v54 + 32) )
                break;
            }
            v20 = !_BitScanReverse((unsigned int *)&v53, v52);
            if ( v20 )
              goto LABEL_135;
          }
          if ( !v54 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v99->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v99, BugCheckParameter2b, v50, 0LL);
          }
          else
          {
            *(_BYTE *)(v54 + 32) |= 2u;
            if ( *(__int64 *)(v54 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v54);
              v51 = (ULONG_PTR)v99;
              v54 = v95;
            }
            *(_DWORD *)(v54 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v54 + 25) &= ~1u;
            *(_QWORD *)(v54 + 32) = 0LL;
            v55 = (__int64)((unsigned __int128)((v54 - *(_QWORD *)(v51 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v56 = 1 << (v55 + (v55 < 0));
            if ( v102 == 1 )
            {
              *(_BYTE *)(v51 + 792) |= v56;
              goto LABEL_138;
            }
LABEL_137:
            _InterlockedOr8((volatile signed __int8 *)(v51 + 870), v56);
          }
          goto LABEL_138;
        }
        goto LABEL_142;
      }
      goto LABEL_56;
    }
    v89 = v8;
    if ( v98 != 1 || (*(_DWORD *)(v8 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << v81);
          v20 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v8, 0);
    v106 = result;
    if ( (int)result < 0 )
    {
LABEL_191:
      v48 = v98;
      v43 = (volatile LONG *)(v4 + 72);
      goto LABEL_143;
    }
    goto LABEL_48;
  }
  v43 = (volatile LONG *)(v4 + 72);
  v106 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 <= 0xFu && CurrentIrql <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = v69->SchedulerAssist;
        v71 = ~(unsigned __int16)(-1LL << v81);
        v20 = (v71 & v70[5]) == 0;
        v70[5] &= v71;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v69);
      }
    }
  }
  __writecr8(CurrentIrql);
  v48 = v98;
  if ( !v98 )
  {
    v72 = (volatile signed __int64 *)(v86 + 40);
    BugCheckParameter2c = v86 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v72);
      v72 = (volatile signed __int64 *)(v86 + 40);
    }
    v99 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v72) == 1 )
      v73 = MmGetSessionIdEx(v99->ApcState.Process);
    else
      v73 = -1;
    v51 = (ULONG_PTR)v99;
    --v99->SpecialApcDisable;
    v104 = ++v99->AbAllocationRegionCount;
    v74 = ((char)v99->AbEntrySummary | (char)v99->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v75, v74);
    if ( v20 )
      goto LABEL_189;
    while ( 1 )
    {
      v76 = ~(1 << v75);
      v77 = (__int64)&v99->LockEntries[v75];
      v74 &= v76;
      v91 = v77;
      if ( (*(_BYTE *)(v77 + 26) & 1) != 0
        && (*(_DWORD *)(v77 + 32) & 1) == 0
        && (*(_QWORD *)(v77 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v77 + 40) == v73 )
      {
        *(_BYTE *)(v77 + 26) &= ~1u;
        if ( *(_QWORD *)(v77 + 32) )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v75, v74);
      if ( v20 )
        goto LABEL_189;
    }
    if ( !v77 )
    {
LABEL_189:
      if ( (*((_DWORD *)&v99->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v99, BugCheckParameter2c, v73, 0LL);
    }
    else
    {
      *(_BYTE *)(v77 + 32) |= 2u;
      if ( *(__int64 *)(v77 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v77);
        v51 = (ULONG_PTR)v99;
        v77 = v91;
      }
      *(_DWORD *)(v77 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v77 + 25) &= ~1u;
      *(_QWORD *)(v77 + 32) = 0LL;
      v56 = 1 << ((v77 - *(_QWORD *)(v51 + 800)) / 96);
      if ( v104 != 1 )
        goto LABEL_137;
      *(_BYTE *)(v51 + 792) |= v56;
    }
LABEL_138:
    --*(_BYTE *)(v51 + 794);
    KiAbThreadRemoveBoosts(v51);
    v20 = v99->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v99->ApcState.ApcListHead[0].Flink != &v99->152 )
      KiCheckForKernelApcDelivery((__int64)v99);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
LABEL_142:
  result = v106;
LABEL_143:
  if ( v89 )
  {
    v103 = ExAcquireSpinLockExclusive(v43);
    if ( (v6 & 5) == 0 )
      v5 = v88 | 8;
    v57 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v89, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(v43);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v58 = KeGetCurrentIrql(), v58 <= 0xFu) )
    {
      v59 = v103;
      if ( v103 <= 0xFu && v58 >= 2u )
      {
        v60 = KeGetCurrentPrcb();
        v61 = ~(unsigned __int16)(-1LL << (v103 + 1));
        v62 = v60->SchedulerAssist;
        v20 = (v61 & v62[5]) == 0;
        v62[5] &= v61;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    else
    {
      v59 = v103;
    }
    __writecr8(v59);
    if ( v57 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v48, v57);
    result = v106;
  }
  if ( (v6 & 1) != 0 )
  {
    v78 = ExAcquireSpinLockExclusive(v43);
    --*(_QWORD *)(v4 + 40);
    --*(_DWORD *)(v4 + 88);
    MiCheckControlArea(v4, v78, v79);
    return v106;
  }
  return result;
}
