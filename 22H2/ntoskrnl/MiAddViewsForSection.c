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
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  volatile signed __int64 *v28; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v30; // r10
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // edx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r11
  _DWORD *v43; // r10
  int v44; // edx
  volatile LONG *v45; // rsi
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // edx
  unsigned int v50; // r12d
  volatile signed __int64 *v51; // rcx
  ULONG_PTR v52; // r9
  ULONG_PTR v53; // r10
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned __int8 v58; // al
  __int64 v59; // r13
  unsigned __int8 v60; // cl
  KIRQL v61; // r14
  struct _KPRCB *v62; // r9
  int v63; // eax
  _DWORD *v64; // r8
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // edx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // edx
  volatile signed __int64 *v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  KIRQL v80; // al
  _DWORD *v81; // r8
  unsigned int v82; // [rsp+30h] [rbp-69h]
  char v83; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  __int64 v88; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v90; // [rsp+74h] [rbp-25h]
  __int64 v91; // [rsp+78h] [rbp-21h]
  ULONG_PTR v92; // [rsp+80h] [rbp-19h]
  __int64 v93; // [rsp+80h] [rbp-19h]
  struct _KTHREAD *BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v95; // [rsp+90h] [rbp-9h]
  __int64 v96; // [rsp+98h] [rbp-1h]
  __int64 v97; // [rsp+98h] [rbp-1h]
  _DWORD *v98; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v100; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v101; // [rsp+100h] [rbp+67h]
  unsigned __int8 v103; // [rsp+110h] [rbp+77h]
  unsigned __int8 v104; // [rsp+110h] [rbp+77h]
  KIRQL v105; // [rsp+110h] [rbp+77h]
  unsigned __int8 v106; // [rsp+110h] [rbp+77h]
  unsigned int v107; // [rsp+118h] [rbp+7Fh]
  unsigned int v108; // [rsp+118h] [rbp+7Fh]

  v4 = *BugCheckParameter2;
  v5 = 0;
  v6 = (unsigned int)SchedulerAssist;
  v82 = (unsigned int)SchedulerAssist;
  v91 = 0LL;
  v8 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64) )
  {
    v100 = 1;
    CurrentThread = 0LL;
    v88 = 0LL;
  }
  else
  {
    v27 = *(_QWORD *)v4;
    v100 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v88 = v27;
    ExAcquirePushLockExclusiveEx(v27 + 40, 0LL);
  }
  v9 = (volatile signed __int32 *)(v4 + 72);
  v98 = (_DWORD *)(v4 + 72);
  v90 = v6 & 0x180;
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
    v82 = v6;
  }
  BugCheckParameter3 = -1;
  v83 = CurrentIrql + 1;
  while ( 1 )
  {
    v107 = *(_DWORD *)(v8 + 44);
    v92 = v8;
    if ( *(_QWORD *)(v8 + 8) )
      break;
    v95 = *(_DWORD *)(v8 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v39 = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << v83);
          v21 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v100 )
    {
      v28 = (volatile signed __int64 *)(v88 + 40);
      BugCheckParameter2a = v88 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v28);
        v28 = (volatile signed __int64 *)(v88 + 40);
      }
      BugCheckParameter1 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v28) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(BugCheckParameter1->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      v30 = (ULONG_PTR)BugCheckParameter1;
      --BugCheckParameter1->SpecialApcDisable;
      v103 = ++BugCheckParameter1->AbAllocationRegionCount;
      v31 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v32) = (*(char *)(v30 + 792) | *(char *)(v30 + 870)) ^ 0x3F;
      v21 = !_BitScanReverse((unsigned int *)&v33, v32);
      if ( v21 )
        goto LABEL_80;
      while ( 1 )
      {
        v34 = ~(1 << v33);
        v35 = (__int64)&BugCheckParameter1->LockEntries[v33];
        v32 = v34 & (unsigned int)v32;
        v96 = v35;
        if ( (*(_BYTE *)(v35 + 26) & 1) != 0
          && (*(_DWORD *)(v35 + 32) & 1) == 0
          && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v31
          && *(_DWORD *)(v35 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v35 + 26) &= ~1u;
          if ( *(_QWORD *)(v35 + 32) )
            break;
        }
        v21 = !_BitScanReverse((unsigned int *)&v33, v32);
        if ( v21 )
          goto LABEL_80;
      }
      if ( !v35 )
      {
LABEL_80:
        if ( (*((_DWORD *)&BugCheckParameter1->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v35 + 32) |= 2u;
        if ( *(__int64 *)(v35 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree(v35, v32, v31);
          v35 = v96;
          v30 = (ULONG_PTR)BugCheckParameter1;
        }
        *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v35 + 25) &= ~1u;
        *(_QWORD *)(v35 + 32) = 0LL;
        v36 = 1 << ((v35 - *(_QWORD *)(v30 + 800)) / 96);
        if ( v103 == 1 )
          *(_BYTE *)(v30 + 792) |= v36;
        else
          _InterlockedOr8((volatile signed __int8 *)(v30 + 870), v36);
      }
      --*(_BYTE *)(v30 + 794);
      KiAbThreadRemoveBoosts(v30);
      v21 = BugCheckParameter1->SpecialApcDisable++ == -1;
      if ( v21
        && ($C459BD0D405E8E46662177FB3D0A143F *)BugCheckParameter1->ApcState.ApcListHead[0].Flink != &BugCheckParameter1->152 )
      {
        KiCheckForKernelApcDelivery((__int64)BugCheckParameter1);
      }
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    if ( (v6 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v8, v82, v107 - v95, v107);
    v108 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_191;
      if ( !v100 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v88 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      goto LABEL_56;
    }
    if ( !v100 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v88 + 40, 0LL);
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
    v91 = v92;
    if ( !v100 )
    {
      v91 = v92;
      v82 = v90 | 4;
    }
LABEL_56:
    if ( !v8 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v98, retaddr);
      else
        *v98 = 0;
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v65 = v14[6] - 1;
          v14[6] = v65;
          if ( !v65 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v68 = v67->SchedulerAssist;
            v69 = ~(unsigned __int16)(-1LL << v83);
            v21 = (v69 & v68[5]) == 0;
            v68[5] &= v69;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v100 )
        return 0LL;
      v16 = v88 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx(v17->ApcState.Process);
      --v17->SpecialApcDisable;
      v18 = ++v17->AbAllocationRegionCount;
      LODWORD(v19) = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      v20 = v16 & 0x7FFFFFFFFFFFFFFCLL;
      v21 = !_BitScanReverse((unsigned int *)&v22, v19);
      if ( v21 )
      {
LABEL_50:
        v24 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v23 = (__int64)&v17->LockEntries[v22];
          v19 = ~(1 << v22) & (unsigned int)v19;
          if ( (*(_BYTE *)(v23 + 26) & 1) != 0
            && (*(_DWORD *)(v23 + 32) & 1) == 0
            && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v20 )
          {
            v24 = BugCheckParameter3;
            if ( *(_DWORD *)(v23 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v23 + 26) &= ~1u;
              if ( *(_QWORD *)(v23 + 32) )
                break;
            }
          }
          v21 = !_BitScanReverse((unsigned int *)&v22, v19);
          if ( v21 )
            goto LABEL_50;
        }
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree(v23, v19, v20);
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v25 = (signed __int64)(v23 - (unsigned __int64)v17->LockEntries) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v25);
LABEL_38:
          --v17->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v17);
          v21 = v17->SpecialApcDisable++ == -1;
          if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
            KiCheckForKernelApcDelivery(v26);
          KiLeaveGuardedRegionUnsafe(CurrentThread);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v16, v24, 0LL);
      goto LABEL_38;
    }
  }
  if ( (v6 & 0x400) == 0 )
  {
    active = MiReferenceActiveSubsection(v8);
    v108 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v45 = (volatile LONG *)(v4 + 72);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v49 = ~(unsigned __int16)(-1LL << v83);
              v21 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
          }
        }
        __writecr8(CurrentIrql);
        v50 = v100;
        if ( !v100 )
        {
          v51 = (volatile signed __int64 *)(v88 + 40);
          BugCheckParameter2b = v88 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v51);
            v51 = (volatile signed __int64 *)(v88 + 40);
          }
          v101 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
            v52 = (unsigned int)MmGetSessionIdEx(v101->ApcState.Process);
          else
            v52 = 0xFFFFFFFFLL;
          v53 = (ULONG_PTR)v101;
          --v101->SpecialApcDisable;
          v104 = ++v101->AbAllocationRegionCount;
          LODWORD(v54) = ((char)v101->AbEntrySummary | (char)v101->AbOrphanedEntrySummary) ^ 0x3F;
          v21 = !_BitScanReverse((unsigned int *)&v55, v54);
          if ( v21 )
            goto LABEL_135;
          while ( 1 )
          {
            v56 = (__int64)&v101->LockEntries[v55];
            v97 = v56;
            v54 = ~(1 << v55) & (unsigned int)v54;
            if ( (*(_BYTE *)(v56 + 26) & 1) != 0
              && (*(_DWORD *)(v56 + 32) & 1) == 0
              && (*(_QWORD *)(v56 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v56 + 40) == (_DWORD)v52 )
            {
              *(_BYTE *)(v56 + 26) &= ~1u;
              if ( *(_QWORD *)(v56 + 32) )
                break;
            }
            v21 = !_BitScanReverse((unsigned int *)&v55, v54);
            if ( v21 )
              goto LABEL_135;
          }
          if ( !v56 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v101->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v101, BugCheckParameter2b, v52, 0LL);
          }
          else
          {
            *(_BYTE *)(v56 + 32) |= 2u;
            if ( *(__int64 *)(v56 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree(v56, v56, v54);
              v53 = (ULONG_PTR)v101;
              v56 = v97;
            }
            *(_DWORD *)(v56 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v56 + 25) &= ~1u;
            *(_QWORD *)(v56 + 32) = 0LL;
            v57 = (__int64)((unsigned __int128)((v56 - *(_QWORD *)(v53 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v58 = 1 << (v57 + (v57 < 0));
            if ( v104 == 1 )
            {
              *(_BYTE *)(v53 + 792) |= v58;
              goto LABEL_138;
            }
LABEL_137:
            _InterlockedOr8((volatile signed __int8 *)(v53 + 870), v58);
          }
          goto LABEL_138;
        }
        goto LABEL_142;
      }
      goto LABEL_56;
    }
    v91 = v8;
    if ( v100 != 1 || (*(_DWORD *)(v8 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << v83);
          v21 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v8, 0);
    v108 = result;
    if ( (int)result < 0 )
    {
LABEL_191:
      v50 = v100;
      v45 = (volatile LONG *)(v4 + 72);
      goto LABEL_143;
    }
    goto LABEL_48;
  }
  v45 = (volatile LONG *)(v4 + 72);
  v108 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v70 = KeGetCurrentIrql();
      if ( v70 <= 0xFu && CurrentIrql <= 0xFu && v70 >= 2u )
      {
        v71 = KeGetCurrentPrcb();
        v72 = v71->SchedulerAssist;
        v73 = ~(unsigned __int16)(-1LL << v83);
        v21 = (v73 & v72[5]) == 0;
        v72[5] &= v73;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v71);
      }
    }
  }
  __writecr8(CurrentIrql);
  v50 = v100;
  if ( !v100 )
  {
    v74 = (volatile signed __int64 *)(v88 + 40);
    BugCheckParameter2c = v88 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v74);
      v74 = (volatile signed __int64 *)(v88 + 40);
    }
    v101 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v74) == 1 )
      v75 = (unsigned int)MmGetSessionIdEx(v101->ApcState.Process);
    else
      v75 = 0xFFFFFFFFLL;
    v53 = (ULONG_PTR)v101;
    --v101->SpecialApcDisable;
    v106 = ++v101->AbAllocationRegionCount;
    LODWORD(v76) = ((char)v101->AbEntrySummary | (char)v101->AbOrphanedEntrySummary) ^ 0x3F;
    v21 = !_BitScanReverse((unsigned int *)&v77, v76);
    if ( v21 )
      goto LABEL_189;
    while ( 1 )
    {
      v78 = ~(1 << v77);
      v79 = (__int64)&v101->LockEntries[v77];
      v76 = v78 & (unsigned int)v76;
      v93 = v79;
      if ( (*(_BYTE *)(v79 + 26) & 1) != 0
        && (*(_DWORD *)(v79 + 32) & 1) == 0
        && (*(_QWORD *)(v79 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v79 + 40) == (_DWORD)v75 )
      {
        *(_BYTE *)(v79 + 26) &= ~1u;
        if ( *(_QWORD *)(v79 + 32) )
          break;
      }
      v21 = !_BitScanReverse((unsigned int *)&v77, v76);
      if ( v21 )
        goto LABEL_189;
    }
    if ( !v79 )
    {
LABEL_189:
      if ( (*((_DWORD *)&v101->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v101, BugCheckParameter2c, (unsigned int)v75, 0LL);
    }
    else
    {
      *(_BYTE *)(v79 + 32) |= 2u;
      if ( *(__int64 *)(v79 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v79, v76, v75);
        v53 = (ULONG_PTR)v101;
        v79 = v93;
      }
      *(_DWORD *)(v79 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v79 + 25) &= ~1u;
      *(_QWORD *)(v79 + 32) = 0LL;
      v58 = 1 << ((v79 - *(_QWORD *)(v53 + 800)) / 96);
      if ( v106 != 1 )
        goto LABEL_137;
      *(_BYTE *)(v53 + 792) |= v58;
    }
LABEL_138:
    --*(_BYTE *)(v53 + 794);
    KiAbThreadRemoveBoosts(v53);
    v21 = v101->SpecialApcDisable++ == -1;
    if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v101->ApcState.ApcListHead[0].Flink != &v101->152 )
      KiCheckForKernelApcDelivery((__int64)v101);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
LABEL_142:
  result = v108;
LABEL_143:
  if ( v91 )
  {
    v105 = ExAcquireSpinLockExclusive(v45);
    if ( (v6 & 5) == 0 )
      v5 = v90 | 8;
    v59 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v91, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(v45);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v60 = KeGetCurrentIrql(), v60 <= 0xFu) )
    {
      v61 = v105;
      if ( v105 <= 0xFu && v60 >= 2u )
      {
        v62 = KeGetCurrentPrcb();
        v63 = ~(unsigned __int16)(-1LL << (v105 + 1));
        v64 = v62->SchedulerAssist;
        v21 = (v63 & v64[5]) == 0;
        v64[5] &= v63;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v62);
      }
    }
    else
    {
      v61 = v105;
    }
    __writecr8(v61);
    if ( v59 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v50, v59);
    result = v108;
  }
  if ( (v6 & 1) != 0 )
  {
    v80 = ExAcquireSpinLockExclusive(v45);
    --*(_QWORD *)(v4 + 40);
    --*(_DWORD *)(v4 + 88);
    MiCheckControlArea(v4, v80, v81);
    return v108;
  }
  return result;
}
