/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1403099F0
 * Callers:
 *     RtlpHpSegAlloc @ 0x140309850 (RtlpHpSegAlloc.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14021D170 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402A3D3C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402A5420 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402CB7DC (RtlpHpSegHeapAddSegment.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpSegLockAcquire @ 0x140308384 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x14030A8F0 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14030A960 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037E1BC (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  unsigned int v33; // edx
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v40; // rcx
  char v41; // al
  ULONG_PTR v42; // rdi
  struct _KTHREAD *v43; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rdi
  unsigned __int8 v49; // al
  __int64 v50; // rcx
  __int64 v51; // rax
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
  unsigned __int64 v62; // [rsp+40h] [rbp-58h]
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
    if ( !v65 )
    {
      v42 = a1 + 64;
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
              v34 = (v55 & v54[5]) == 0;
              v54[5] &= v55;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v61);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v42, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v43 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v43->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v43->SpecialApcDisable;
        v64 = ++v43->AbAllocationRegionCount;
        v45 = v42 & 0x7FFFFFFFFFFFFFFCLL;
        v46 = ((char)v43->AbEntrySummary | (char)v43->AbOrphanedEntrySummary) ^ 0x3F;
        v34 = !_BitScanReverse((unsigned int *)&v47, v46);
        if ( v34 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v43, v42, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v48 = (__int64)&v43->LockEntries[v47];
            v46 &= ~(1 << v47);
            if ( (*(_BYTE *)(v48 + 26) & 1) != 0
              && (*(_DWORD *)(v48 + 32) & 1) == 0
              && (*(_QWORD *)(v48 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v45
              && *(_DWORD *)(v48 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v48 + 26) &= ~1u;
              if ( *(_QWORD *)(v48 + 32) )
                break;
            }
            v34 = !_BitScanReverse((unsigned int *)&v47, v46);
            if ( v34 )
              goto LABEL_91;
          }
          if ( !v48 )
          {
LABEL_91:
            v42 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v48 + 32) |= 2u;
          if ( *(__int64 *)(v48 + 32) < 0 )
            KiAbEntryRemoveFromTree(v48);
          *(_DWORD *)(v48 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v48 + 25) &= ~1u;
          *(_QWORD *)(v48 + 32) = 0LL;
          v49 = 1 << ((char)(v48 - LOBYTE(v43->LockEntries)) / 96);
          if ( v64 == 1 )
            v43->AbEntrySummary |= v49;
          else
            _InterlockedOr8((volatile signed __int8 *)&v43->AbOrphanedEntrySummary, v49);
        }
        --v43->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v43);
        v34 = v43->SpecialApcDisable++ == -1;
        if ( v34 && ($C459BD0D405E8E46662177FB3D0A143F *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
          KiCheckForKernelApcDelivery(v50);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    v51 = RtlpHpSegSegmentAllocate(a1, 0, (v6 & 0x800000) != 0 ? 2 : 0);
    v62 = v51;
    if ( !v51 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v51, 0);
    v13 = v62 + 32LL * *(unsigned __int8 *)(a1 + 10);
    v61 = RtlpHpSegLockAcquire(a1, v6);
    RtlpHpSegHeapAddSegment(a1, v62);
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
  if ( !v65 )
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
          v56 = v23[6] - 1;
          v23[6] = v56;
          if ( !v56 )
            KiRemoveSystemWorkPriorityKick(v22);
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
            v34 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      __writecr8(v61);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v30 = a1 + 64;
      v31 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
        v17 = MmGetSessionIdEx(v31->ApcState.Process);
      --v31->SpecialApcDisable;
      v32 = ++v31->AbAllocationRegionCount;
      v33 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
      v34 = !_BitScanReverse((unsigned int *)&v35, v33);
      if ( v34 )
        goto LABEL_60;
      while ( 1 )
      {
        v36 = (__int64)&v31->LockEntries[v35];
        v33 &= ~(1 << v35);
        if ( (*(_BYTE *)(v36 + 26) & 1) != 0
          && (*(_DWORD *)(v36 + 32) & 1) == 0
          && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v36 + 40) == v17 )
        {
          *(_BYTE *)(v36 + 26) &= ~1u;
          if ( *(_QWORD *)(v36 + 32) )
            break;
        }
        v34 = !_BitScanReverse((unsigned int *)&v35, v33);
        if ( v34 )
          goto LABEL_60;
      }
      if ( !v36 )
      {
LABEL_60:
        if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v31, v21, v17, 0LL);
      }
      else
      {
        *(_BYTE *)(v36 + 32) |= 2u;
        if ( *(__int64 *)(v36 + 32) < 0 )
          KiAbEntryRemoveFromTree(v36);
        *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v36 + 25) &= ~1u;
        *(_QWORD *)(v36 + 32) = 0LL;
        v37 = (signed __int64)(v36 - (unsigned __int64)v31->LockEntries) / 96;
        if ( v32 == 1 )
          v31->AbEntrySummary |= 1 << v37;
        else
          _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v37);
      }
      --v31->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v31);
      v34 = v31->SpecialApcDisable++ == -1;
      if ( v34 && ($C459BD0D405E8E46662177FB3D0A143F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery(v38);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v20 > 1 )
  {
    v40 = (char *)(v13 + 56);
    do
    {
      v40[7] = v4++;
      v41 = *v40;
      v40 += 32;
      *(v40 - 32) = v41 | 1;
    }
    while ( v4 < v20 );
  }
  return v13;
}
