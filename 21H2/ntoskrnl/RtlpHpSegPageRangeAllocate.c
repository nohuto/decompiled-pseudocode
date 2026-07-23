/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x140314740
 * Callers:
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentAllocate @ 0x14022117C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x140222860 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x140249F2C (RtlpHpSegHeapAddSegment.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegLockAcquire @ 0x1403130D4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x140315640 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1403156B0 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037DD0C (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  struct _KTHREAD *CurrentThread; // rax
  char *v38; // rcx
  char v39; // al
  ULONG_PTR v40; // rdi
  struct _KTHREAD *v41; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v43; // r8
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rdi
  unsigned __int8 v47; // al
  __int64 v48; // rax
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v51; // r9
  int v52; // eax
  int v53; // eax
  unsigned __int8 v54; // cl
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  unsigned __int8 v58; // [rsp+38h] [rbp-60h]
  unsigned __int64 v59; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v61; // [rsp+A8h] [rbp+10h]
  int v62; // [rsp+B8h] [rbp+20h]

  v4 = 1;
  v6 = a3;
  v58 = -1;
  v7 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v8 = v7 << 24;
  v62 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v58 = CurrentIrql;
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
      v58 = -1;
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
    if ( !v62 )
    {
      v40 = a1 + 64;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && v58 <= 0xFu && v49 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v51 = CurrentPrcb->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << (v58 + 1));
              v33 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v58);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v41 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v41->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v41->SpecialApcDisable;
        v61 = ++v41->AbAllocationRegionCount;
        v43 = v40 & 0x7FFFFFFFFFFFFFFCLL;
        v44 = ((char)v41->AbEntrySummary | (char)v41->AbOrphanedEntrySummary) ^ 0x3F;
        v33 = !_BitScanReverse((unsigned int *)&v45, v44);
        if ( v33 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v41->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v41, v40, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v46 = (__int64)&v41->LockEntries[v45];
            v44 &= ~(1 << v45);
            if ( (*(_BYTE *)(v46 + 26) & 1) != 0
              && (*(_DWORD *)(v46 + 32) & 1) == 0
              && (*(_QWORD *)(v46 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v43
              && *(_DWORD *)(v46 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v46 + 26) &= ~1u;
              if ( *(_QWORD *)(v46 + 32) )
                break;
            }
            v33 = !_BitScanReverse((unsigned int *)&v45, v44);
            if ( v33 )
              goto LABEL_91;
          }
          if ( !v46 )
          {
LABEL_91:
            v40 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v46 + 32) |= 2u;
          if ( *(__int64 *)(v46 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v46);
          *(_DWORD *)(v46 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v46 + 25) &= ~1u;
          *(_QWORD *)(v46 + 32) = 0LL;
          v47 = 1 << ((char)(v46 - LOBYTE(v41->LockEntries)) / 96);
          if ( v61 == 1 )
            v41->AbEntrySummary |= v47;
          else
            _InterlockedOr8((volatile signed __int8 *)&v41->AbOrphanedEntrySummary, v47);
        }
        --v41->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v41);
        v33 = v41->SpecialApcDisable++ == -1;
        if ( v33 && ($C459BD0D405E8E46662177FB3D0A143F *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    v48 = RtlpHpSegSegmentAllocate(a1, 0, (v6 & 0x800000) != 0 ? 2 : 0);
    v59 = v48;
    if ( !v48 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v48, 0);
    v12 = v59 + 32LL * *(unsigned __int8 *)(a1 + 10);
    v58 = RtlpHpSegLockAcquire(a1, v6);
    RtlpHpSegHeapAddSegment(a1, v59);
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
  if ( !v62 )
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
          v53 = v22[6] - 1;
          v22[6] = v53;
          if ( !v53 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && v58 <= 0xFu && v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v56 = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(-1LL << (v58 + 1));
            v33 = (v57 & v56[5]) == 0;
            v56[5] &= v57;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v55);
          }
        }
      }
      __writecr8(v58);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
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
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v19 > 1 )
  {
    v38 = (char *)(v12 + 56);
    do
    {
      v38[7] = v4++;
      v39 = *v38;
      v38 += 32;
      *(v38 - 32) = v39 | 1;
    }
    while ( v4 < v19 );
  }
  return v12;
}
