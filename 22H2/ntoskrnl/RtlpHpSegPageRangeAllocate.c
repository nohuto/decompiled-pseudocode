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
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // r13d
  unsigned __int16 v17; // ax
  int v18; // ecx
  unsigned int v19; // esi
  unsigned __int64 v20; // r15
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  int v24; // ecx
  char v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int16 v28; // ax
  __int64 v29; // rcx
  struct _KTHREAD *v30; // r14
  unsigned __int8 v31; // r12
  unsigned int v32; // edx
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v39; // rcx
  char v40; // al
  ULONG_PTR v41; // rdi
  struct _KTHREAD *v42; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v44; // r8
  unsigned int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rdi
  unsigned __int8 v48; // al
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int8 v52; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v54; // r9
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  unsigned __int8 v61; // [rsp+38h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v64; // [rsp+A8h] [rbp+10h]
  int v65; // [rsp+B8h] [rbp+20h]

  v4 = 1;
  v6 = a3;
  v61 = -1;
  v7 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v8 = v7 << 24;
  v65 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v61 = CurrentIrql;
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
      v61 = -1;
    }
  }
  v11 = *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD *)(a1 + 96);
  if ( (v11 & 1) != 0 && v12 )
    v12 ^= a1 + 96;
  v13 = 0LL;
  v14 = v11 & 1;
  while ( v12 )
  {
    if ( v8 < *(_DWORD *)(v12 + 28) )
    {
      v15 = *(_QWORD *)v12;
      v13 = v12;
      if ( v14 && v15 )
        goto LABEL_35;
    }
    else
    {
      if ( v8 <= *(_DWORD *)(v12 + 28) )
        goto LABEL_16;
      v15 = *(_QWORD *)(v12 + 8);
      if ( v14 && v15 )
      {
LABEL_35:
        v12 ^= v15;
        continue;
      }
    }
    v12 = v15;
  }
  v12 = v13;
LABEL_16:
  v16 = -1;
  if ( !v12 )
    goto LABEL_62;
  if ( (v6 & 0x800000) != 0 )
  {
    v12 = RtlpHpSegLargeRangeAllocate(a1, v12, v7, 1LL);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v12);
    *(_OWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    v17 = ~(unsigned __int16)*(_DWORD *)(v12 + 28);
    *(_DWORD *)v12 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v17);
  }
  if ( !v12 )
  {
LABEL_62:
    if ( !v65 )
    {
      v41 = a1 + 64;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && v61 <= 0xFu && v52 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v54 = CurrentPrcb->SchedulerAssist;
              v55 = ~(unsigned __int16)(-1LL << (v61 + 1));
              v33 = (v55 & v54[5]) == 0;
              v54[5] &= v55;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v61);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v42 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v42->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v42->SpecialApcDisable;
        v64 = ++v42->AbAllocationRegionCount;
        v44 = v41 & 0x7FFFFFFFFFFFFFFCLL;
        v45 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
        v33 = !_BitScanReverse((unsigned int *)&v46, v45);
        if ( v33 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v42, v41, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v47 = (__int64)&v42->LockEntries[v46];
            v45 &= ~(1 << v46);
            if ( (*(_BYTE *)(v47 + 26) & 1) != 0
              && (*(_DWORD *)(v47 + 32) & 1) == 0
              && (*(_QWORD *)(v47 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v44
              && *(_DWORD *)(v47 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v47 + 26) &= ~1u;
              if ( *(_QWORD *)(v47 + 32) )
                break;
            }
            v33 = !_BitScanReverse((unsigned int *)&v46, v45);
            if ( v33 )
              goto LABEL_91;
          }
          if ( !v47 )
          {
LABEL_91:
            v41 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v47 + 32) |= 2u;
          if ( *(__int64 *)(v47 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v47);
          *(_DWORD *)(v47 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v47 + 25) &= ~1u;
          *(_QWORD *)(v47 + 32) = 0LL;
          v48 = 1 << ((char)(v47 - LOBYTE(v42->LockEntries)) / 96);
          if ( v64 == 1 )
            v42->AbEntrySummary |= v48;
          else
            _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, v48);
        }
        --v42->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v42);
        v33 = v42->SpecialApcDisable++ == -1;
        if ( v33 && ($C459BD0D405E8E46662177FB3D0A143F *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
          KiCheckForKernelApcDelivery(v49);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    v50 = RtlpHpSegSegmentAllocate(a1, 0LL, (v6 & 0x800000) != 0 ? 2 : 0);
    v62 = v50;
    if ( !v50 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v50, 0LL);
    v12 = v62 + 32LL * *(unsigned __int8 *)(a1 + 10);
    v61 = RtlpHpSegLockAcquire(a1, v6, v51);
    RtlpHpSegHeapAddSegment(a1, v62);
    if ( (v6 & 0x800000) != 0 )
      v12 = RtlpHpSegLargeRangeAllocate(a1, v12, v7, 0LL);
  }
  v18 = *(unsigned __int8 *)(v12 + 31);
  if ( v18 != v7 )
  {
    v24 = v18 - v7;
    v25 = v24;
    v26 = 32LL * (unsigned int)(v24 - 1);
    v27 = v12 + 32LL * v7;
    *(_BYTE *)(v27 + 24) |= 2u;
    *(_BYTE *)(v26 + v27 + 31) = v25 - 1;
    *(_BYTE *)(v27 + 31) = v25;
    v28 = RtlpHpSegPageRangeCountCommittedPages(v26, v27);
    *(_DWORD *)v27 = -857879331;
    *(_WORD *)(v27 + 28) = ~v28;
    *(_BYTE *)(32LL * (v7 - 1) + v12 + 31) = v7 - 1;
    *(_BYTE *)(v12 + 31) = v7;
    *(_WORD *)(v12 + 28) = ~(~(unsigned __int16)*(_DWORD *)(v12 + 28) + *(_WORD *)(v27 + 28) + 1);
    RtlpHpSegFreeRangeInsert(a1, v27, 0LL);
  }
  v19 = v7 - 1;
  *(_BYTE *)(v12 + 24) |= (unsigned __int8)(4 * ((v6 >> 26) & 3)) | 1;
  *(_BYTE *)(32LL * (v7 - 1) + v12 + 24) |= 1u;
  if ( !v65 )
  {
    v20 = a1 + 64;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)v20 = 0;
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v56 = v22[6] - 1;
          v22[6] = v56;
          if ( !v56 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && v61 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << (v61 + 1));
            v33 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      __writecr8(v61);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      v29 = a1 + 64;
      v30 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
        v16 = MmGetSessionIdEx(v30->ApcState.Process);
      --v30->SpecialApcDisable;
      v31 = ++v30->AbAllocationRegionCount;
      v32 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
      v33 = !_BitScanReverse((unsigned int *)&v34, v32);
      if ( v33 )
        goto LABEL_60;
      while ( 1 )
      {
        v35 = (__int64)&v30->LockEntries[v34];
        v32 &= ~(1 << v34);
        if ( (*(_BYTE *)(v35 + 26) & 1) != 0
          && (*(_DWORD *)(v35 + 32) & 1) == 0
          && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v35 + 40) == v16 )
        {
          *(_BYTE *)(v35 + 26) &= ~1u;
          if ( *(_QWORD *)(v35 + 32) )
            break;
        }
        v33 = !_BitScanReverse((unsigned int *)&v34, v32);
        if ( v33 )
          goto LABEL_60;
      }
      if ( !v35 )
      {
LABEL_60:
        if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v30, v20, v16, 0LL);
      }
      else
      {
        *(_BYTE *)(v35 + 32) |= 2u;
        if ( *(__int64 *)(v35 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35);
        *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v35 + 25) &= ~1u;
        *(_QWORD *)(v35 + 32) = 0LL;
        v36 = (signed __int64)(v35 - (unsigned __int64)v30->LockEntries) / 96;
        if ( v31 == 1 )
          v30->AbEntrySummary |= 1 << v36;
        else
          _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v36);
      }
      --v30->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v30);
      v33 = v30->SpecialApcDisable++ == -1;
      if ( v33 && ($C459BD0D405E8E46662177FB3D0A143F *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
        KiCheckForKernelApcDelivery(v37);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v19 > 1 )
  {
    v39 = (char *)(v12 + 56);
    do
    {
      v39[7] = v4++;
      v40 = *v39;
      v39 += 32;
      *(v39 - 32) = v40 | 1;
    }
    while ( v4 < v19 );
  }
  return v12;
}
