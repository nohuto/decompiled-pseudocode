/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x140288450
 * Callers:
 *     RtlpHpSegContextCompact @ 0x140286E50 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402AA080 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140288914 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpScheduleCompaction @ 0x140288968 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegLockAcquire @ 0x140288A04 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeCommit @ 0x14028A930 (RtlpHpSegPageRangeCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v19; // rdi
  char v20; // cl
  char v21; // dl
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR SessionId; // r9
  unsigned __int8 v25; // r12
  unsigned int v26; // edx
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  int v36[18]; // [rsp+30h] [rbp-48h] BYREF

  v36[0] = 0;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v10 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 > *(unsigned __int8 *)(a1 + 10) )
    {
      v12 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v12 += -32LL * *(unsigned __int8 *)(v12 + 31);
      if ( (*(_BYTE *)(v12 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v12);
        *(_BYTE *)(v12 + 31) += *(_BYTE *)(a2 + 31);
        v11 += (unsigned __int16)~*(_WORD *)(v12 + 28);
        *(_WORD *)(v12 + 28) = ~(_WORD)v11;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v12;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v12 + 31) - 1) + v12 + 31) = *(_BYTE *)(v12 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v9 )
    {
      RtlpHpSegFreeRangeRemove(a1, v9);
      v20 = *(_BYTE *)(a2 + 31);
      if ( v20 != 1 )
      {
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
        v20 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v20 + *(_BYTE *)(v9 + 31);
      v11 += (unsigned __int16)~*(_WORD *)(v9 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v11;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v21 = *(_BYTE *)(a2 + 31) - 1;
      v22 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v22 + a2 + 24) |= 1u;
      *(_BYTE *)(v22 + a2 + 31) = v21;
    }
    if ( !v11 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v13 = *(__int16 *)(a1 + 22);
      v14 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = v11 + *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
      if ( (v16 <= v14 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56)) >= 0) && v16 <= v15 )
        break;
    }
    v19 = (unsigned __int8)*a5;
    if ( (a3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v27 = (v35 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v35;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v19);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v25 = ++CurrentThread->AbAllocationRegionCount;
        v26 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v27 = !_BitScanReverse((unsigned int *)&v28, v26);
        if ( v27 )
          goto LABEL_51;
        while ( 1 )
        {
          v29 = (__int64)&CurrentThread->LockEntries[v28];
          v26 &= ~(1 << v28);
          if ( (*(_BYTE *)(v29 + 26) & 1) != 0
            && (*(_DWORD *)(v29 + 32) & 1) == 0
            && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v29 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v29 + 26) &= ~1u;
            if ( *(_QWORD *)(v29 + 32) )
              break;
          }
          v27 = !_BitScanReverse((unsigned int *)&v28, v26);
          if ( v27 )
            goto LABEL_51;
        }
        if ( !v29 )
        {
LABEL_51:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v29 + 32) |= 2u;
          if ( *(__int64 *)(v29 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
          *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v29 + 25) &= ~1u;
          *(_QWORD *)(v29 + 32) = 0LL;
          v30 = (signed __int64)(v29 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v25 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v30;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v27 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v27
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v31);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    RtlpHpSegPageRangeCommit(a1, 0, (__int64)v36);
    *a5 = RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v17 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v17 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
