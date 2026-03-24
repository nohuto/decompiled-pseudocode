/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1402AA080
 * Callers:
 *     RtlpHpSegAlloc @ 0x140289ED0 (RtlpHpSegAlloc.c)
 *     RtlpHpSegFree @ 0x1402C2890 (RtlpHpSegFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140288450 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLockAcquire @ 0x140288A04 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14028AFE0 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentFree @ 0x1403893CC (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // esi
  char v8; // al
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // r9
  char v15; // cl
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 v26; // di
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // edx
  int v32; // [rsp+80h] [rbp+18h] BYREF

  v32 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v13 = (char *)(a2 + 56);
    v14 = (unsigned int)(v4 - 2);
    do
    {
      v15 = *v13;
      v13 += 32;
      *(v13 - 32) = v15 & 0xFE;
      --v14;
    }
    while ( v14 );
  }
  v8 = RtlpHpSegLockAcquire(a1, a4, a3);
  v9 = *(_DWORD *)(a2 + 28);
  LOBYTE(v32) = v8;
  if ( HIBYTE(v9) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v9;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v10 = RtlpHpSegPageRangeCoalesce(a1, a2, a4, 0, &v32);
  result = RtlpHpSegFreeRangeInsert(a1, v10, 0);
  v12 = result;
  if ( result )
  {
    v27 = *(_QWORD *)result;
    result = *(_QWORD *)(result + 8);
    if ( *(_QWORD *)(v27 + 8) != v12 || *(_QWORD *)result != v12 )
      __fastfail(3u);
    *(_QWORD *)result = v27;
    *(_QWORD *)(v27 + 8) = result;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (a4 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v26 = v32;
        if ( (unsigned __int8)v32 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = v32;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
          v21 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v26 = v32;
      }
      result = v26;
      __writecr8(v26);
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
      v18 = ++CurrentThread->AbAllocationRegionCount;
      LODWORD(v19) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v20 = (a1 + 64) & 0x7FFFFFFFFFFFFFFCLL;
      v21 = !_BitScanReverse((unsigned int *)&v22, v19);
      if ( v21 )
        goto LABEL_37;
      while ( 1 )
      {
        v23 = (__int64)&CurrentThread->LockEntries[v22];
        v19 = ~(1 << v22) & (unsigned int)v19;
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v20
          && *(_DWORD *)(v23 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
            break;
        }
        v21 = !_BitScanReverse((unsigned int *)&v22, v19);
        if ( v21 )
          goto LABEL_37;
      }
      if ( !v23 )
      {
LABEL_37:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v23 + 32) |= 2u;
        if ( *(__int64 *)(v23 + 32) < 0 )
          KiAbEntryRemoveFromTree(v23, v19, v20);
        *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v23 + 25) &= ~1u;
        *(_QWORD *)(v23 + 32) = 0LL;
        v24 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v18 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v24;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v24);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v25);
      }
      result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v12 )
    return RtlpHpSegSegmentFree(a1);
  return result;
}
