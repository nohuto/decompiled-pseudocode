/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x14028A070
 * Callers:
 *     RtlpHpSegAlloc @ 0x140289ED0 (RtlpHpSegAlloc.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14021D130 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegLockAcquire @ 0x140288A04 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x14028AF70 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14028AFE0 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402FC658 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402FDD3C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x140324C5C (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037DB2C (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // ebp
  unsigned int v6; // r12d
  unsigned int v7; // r15d
  unsigned int v8; // esi
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned __int16 v18; // ax
  int v19; // ecx
  unsigned int v20; // esi
  unsigned __int64 v21; // r15
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v25; // ecx
  char v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int16 v29; // ax
  __int64 v30; // rcx
  struct _KTHREAD *v31; // r14
  unsigned __int8 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r8
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v41; // rcx
  char v42; // al
  ULONG_PTR v43; // rdi
  struct _KTHREAD *v44; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  unsigned __int8 v50; // al
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned __int8 v54; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v56; // r9
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  unsigned __int8 v63; // [rsp+38h] [rbp-60h]
  __int64 v64; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v66; // [rsp+A8h] [rbp+10h]
  int v67; // [rsp+B8h] [rbp+20h]

  v4 = 1;
  v6 = a3;
  v63 = -1;
  v7 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v8 = v7 << 24;
  v67 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v63 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v10 = (volatile signed __int32 *)(a1 + 64);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v10, CurrentIrql, a3, (__int64)SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      v63 = -1;
    }
  }
  v11 = *(_QWORD *)(a1 + 104);
  v12 = a1 + 96;
  v13 = *(_QWORD *)(a1 + 96);
  if ( (v11 & 1) != 0 && v13 )
    v13 ^= v12;
  v14 = 0LL;
  v15 = v11 & 1;
  while ( v13 )
  {
    if ( v8 < *(_DWORD *)(v13 + 28) )
    {
      v16 = *(_QWORD *)v13;
      v14 = v13;
      if ( v15 && v16 )
        goto LABEL_35;
    }
    else
    {
      if ( v8 <= *(_DWORD *)(v13 + 28) )
        goto LABEL_16;
      v16 = *(_QWORD *)(v13 + 8);
      if ( v15 && v16 )
      {
LABEL_35:
        v13 ^= v16;
        continue;
      }
    }
    v13 = v16;
  }
  v13 = v14;
LABEL_16:
  v17 = -1;
  if ( !v13 )
    goto LABEL_62;
  if ( (v6 & 0x800000) != 0 )
  {
    v13 = RtlpHpSegLargeRangeAllocate(a1, v13, v7, 1LL);
  }
  else
  {
    RtlRbRemoveNode(a1 + 96, v13, v12, SchedulerAssist);
    *(_OWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    v18 = ~(unsigned __int16)*(_DWORD *)(v13 + 28);
    *(_DWORD *)v13 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v18);
  }
  if ( !v13 )
  {
LABEL_62:
    if ( !v67 )
    {
      v43 = a1 + 64;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v54 = KeGetCurrentIrql();
            if ( v54 <= 0xFu && v63 <= 0xFu && v54 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v56 = CurrentPrcb->SchedulerAssist;
              v57 = ~(unsigned __int16)(-1LL << (v63 + 1));
              v35 = (v57 & v56[5]) == 0;
              v56[5] &= v57;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v63);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v44 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v44->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v44->SpecialApcDisable;
        v66 = ++v44->AbAllocationRegionCount;
        v46 = v43 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v47) = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
        v35 = !_BitScanReverse((unsigned int *)&v48, v47);
        if ( v35 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v49 = (__int64)&v44->LockEntries[v48];
            v47 = ~(1 << v48) & (unsigned int)v47;
            if ( (*(_BYTE *)(v49 + 26) & 1) != 0
              && (*(_DWORD *)(v49 + 32) & 1) == 0
              && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v46
              && *(_DWORD *)(v49 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v49 + 26) &= ~1u;
              if ( *(_QWORD *)(v49 + 32) )
                break;
            }
            v35 = !_BitScanReverse((unsigned int *)&v48, v47);
            if ( v35 )
              goto LABEL_91;
          }
          if ( !v49 )
          {
LABEL_91:
            v43 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v49 + 32) |= 2u;
          if ( *(__int64 *)(v49 + 32) < 0 )
            KiAbEntryRemoveFromTree(v49, v47, v46);
          *(_DWORD *)(v49 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v49 + 25) &= ~1u;
          *(_QWORD *)(v49 + 32) = 0LL;
          v50 = 1 << ((char)(v49 - LOBYTE(v44->LockEntries)) / 96);
          if ( v66 == 1 )
            v44->AbEntrySummary |= v50;
          else
            _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, v50);
        }
        --v44->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v44);
        v35 = v44->SpecialApcDisable++ == -1;
        if ( v35 && ($C459BD0D405E8E46662177FB3D0A143F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery(v51);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    v52 = RtlpHpSegSegmentAllocate(a1, 0LL, (v6 & 0x800000) != 0 ? 2 : 0);
    v64 = v52;
    if ( !v52 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v52, 0LL);
    v13 = v64 + 32LL * *(unsigned __int8 *)(a1 + 10);
    v63 = RtlpHpSegLockAcquire(a1, v6, v53);
    RtlpHpSegHeapAddSegment(a1, v64);
    if ( (v6 & 0x800000) != 0 )
      v13 = RtlpHpSegLargeRangeAllocate(a1, v13, v7, 0LL);
  }
  v19 = *(unsigned __int8 *)(v13 + 31);
  if ( v19 != v7 )
  {
    v25 = v19 - v7;
    v26 = v25;
    v27 = 32LL * (unsigned int)(v25 - 1);
    v28 = v13 + 32LL * v7;
    *(_BYTE *)(v28 + 24) |= 2u;
    *(_BYTE *)(v27 + v28 + 31) = v26 - 1;
    *(_BYTE *)(v28 + 31) = v26;
    v29 = RtlpHpSegPageRangeCountCommittedPages(v27, v28);
    *(_DWORD *)v28 = -857879331;
    *(_WORD *)(v28 + 28) = ~v29;
    *(_BYTE *)(32LL * (v7 - 1) + v13 + 31) = v7 - 1;
    *(_BYTE *)(v13 + 31) = v7;
    *(_WORD *)(v13 + 28) = ~(~(unsigned __int16)*(_DWORD *)(v13 + 28) + *(_WORD *)(v28 + 28) + 1);
    RtlpHpSegFreeRangeInsert(a1, v28, 0LL);
  }
  v20 = v7 - 1;
  *(_BYTE *)(v13 + 24) |= (unsigned __int8)(4 * ((v6 >> 26) & 3)) | 1;
  *(_BYTE *)(32LL * (v7 - 1) + v13 + 24) |= 1u;
  if ( !v67 )
  {
    v21 = a1 + 64;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)v21 = 0;
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v58 = v23[6] - 1;
          v23[6] = v58;
          if ( !v58 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v59 = KeGetCurrentIrql();
          if ( v59 <= 0xFu && v63 <= 0xFu && v59 >= 2u )
          {
            v60 = KeGetCurrentPrcb();
            v61 = v60->SchedulerAssist;
            v62 = ~(unsigned __int16)(-1LL << (v63 + 1));
            v35 = (v62 & v61[5]) == 0;
            v61[5] &= v62;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
      }
      __writecr8(v63);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      v30 = a1 + 64;
      v31 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
        v17 = MmGetSessionIdEx(v31->ApcState.Process);
      --v31->SpecialApcDisable;
      v32 = ++v31->AbAllocationRegionCount;
      LODWORD(v33) = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
      v34 = v21 & 0x7FFFFFFFFFFFFFFCLL;
      v35 = !_BitScanReverse((unsigned int *)&v36, v33);
      if ( v35 )
        goto LABEL_60;
      while ( 1 )
      {
        v37 = (__int64)&v31->LockEntries[v36];
        v33 = ~(1 << v36) & (unsigned int)v33;
        if ( (*(_BYTE *)(v37 + 26) & 1) != 0
          && (*(_DWORD *)(v37 + 32) & 1) == 0
          && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v34
          && *(_DWORD *)(v37 + 40) == v17 )
        {
          *(_BYTE *)(v37 + 26) &= ~1u;
          if ( *(_QWORD *)(v37 + 32) )
            break;
        }
        v35 = !_BitScanReverse((unsigned int *)&v36, v33);
        if ( v35 )
          goto LABEL_60;
      }
      if ( !v37 )
      {
LABEL_60:
        if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v31, v21, v17, 0LL);
      }
      else
      {
        *(_BYTE *)(v37 + 32) |= 2u;
        if ( *(__int64 *)(v37 + 32) < 0 )
          KiAbEntryRemoveFromTree(v37, v33, v34);
        *(_DWORD *)(v37 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v37 + 25) &= ~1u;
        *(_QWORD *)(v37 + 32) = 0LL;
        v38 = (signed __int64)(v37 - (unsigned __int64)v31->LockEntries) / 96;
        if ( v32 == 1 )
          v31->AbEntrySummary |= 1 << v38;
        else
          _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v38);
      }
      --v31->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v31);
      v35 = v31->SpecialApcDisable++ == -1;
      if ( v35 && ($C459BD0D405E8E46662177FB3D0A143F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery(v39);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v20 > 1 )
  {
    v41 = (char *)(v13 + 56);
    do
    {
      v41[7] = v4++;
      v42 = *v41;
      v41 += 32;
      *(v41 - 32) = v42 | 1;
    }
    while ( v4 < v20 );
  }
  return v13;
}
