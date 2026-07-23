/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x140334740
 * Callers:
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
 *     RtlpHpSegFree @ 0x14034CF50 (RtlpHpSegFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140312B20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLockAcquire @ 0x1403130D4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1403156B0 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     RtlpHpSegSegmentFree @ 0x140389C1C (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3, unsigned int a4)
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
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int8 v24; // di
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // edx
  int v30; // [rsp+80h] [rbp+18h] BYREF

  v30 = a3;
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
  v8 = RtlpHpSegLockAcquire(a1, a4);
  v9 = *(_DWORD *)(a2 + 28);
  LOBYTE(v30) = v8;
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
  v10 = RtlpHpSegPageRangeCoalesce(a1, a2, a4, 0, &v30);
  result = RtlpHpSegFreeRangeInsert(a1, v10, 0);
  v12 = result;
  if ( result )
  {
    v25 = *(_QWORD *)result;
    result = *(_QWORD *)(result + 8);
    if ( *(_QWORD *)(v25 + 8) != v12 || *(_QWORD *)result != v12 )
      __fastfail(3u);
    *(_QWORD *)result = v25;
    *(_QWORD *)(v25 + 8) = result;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (a4 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v24 = v30;
        if ( (unsigned __int8)v30 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = v30;
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
          v20 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v24 = v30;
      }
      result = v24;
      __writecr8(v24);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v18 = ++CurrentThread->AbAllocationRegionCount;
      v19 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      if ( v20 )
        goto LABEL_37;
      while ( 1 )
      {
        v22 = (__int64)&CurrentThread->LockEntries[v21];
        v19 &= ~(1 << v21);
        if ( (*(_BYTE *)(v22 + 26) & 1) != 0
          && (*(_DWORD *)(v22 + 32) & 1) == 0
          && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v22 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v22 + 26) &= ~1u;
          if ( *(_QWORD *)(v22 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        if ( v20 )
          goto LABEL_37;
      }
      if ( !v22 )
      {
LABEL_37:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v22 + 32) |= 2u;
        if ( *(__int64 *)(v22 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
        *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v22 + 25) &= ~1u;
        *(_QWORD *)(v22 + 32) = 0LL;
        v23 = (signed __int64)(v22 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v18 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v23;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v12 )
    return RtlpHpSegSegmentFree(a1);
  return result;
}
