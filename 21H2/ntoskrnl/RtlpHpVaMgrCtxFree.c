/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x1402208C4
 * Callers:
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVaMgrRangeFree @ 0x140220A28 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrFree @ 0x140222514 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140222690 (RtlpHpVaMgrRangeSplit.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpEnvFreeVA @ 0x140305554 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     RtlSparseArrayElementAllocated @ 0x14031423C (RtlSparseArrayElementAllocated.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405954EC (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rdi
  _BYTE *v11; // rdx
  __int64 result; // rax
  unsigned __int8 v13; // r8
  _BYTE *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  __int64 Capped; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v23; // bp
  unsigned int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = RtlpHpEnvFreeVA(a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    v11 = v7;
    *v7 = v9 & 0xFE;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  v13 = *(_BYTE *)(v10 + 46);
  if ( (v13 & 6u) < 4 )
  {
    MmFreePoolMemory(a2, a3, 0x4000LL);
    v9 = *v8;
    v13 = *(_BYTE *)(v10 + 46);
  }
  v14 = v8;
  if ( (v9 & 2) != 0 )
  {
    v17 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
    v13 = *(_BYTE *)(v10 + 46);
  }
  else
  {
    if ( ((v13 >> 4) & (unsigned __int8)~(v9 >> 2) & 1) == 0 )
    {
      v15 = (v9 & 4) != 0 ? *((_QWORD *)v8 + 3) : *((unsigned __int16 *)v8 + 12);
      if ( v6 != v15 )
        __int2c();
    }
    if ( (v9 & 4) != 0 )
      v16 = *((_QWORD *)v8 + 3);
    else
      v16 = *((unsigned __int16 *)v8 + 12);
    if ( v6 < v16 )
      v17 = &v8[32 * v6];
    else
      v17 = 0LL;
  }
  v18 = (unsigned __int8)RtlpHpAcquireLockExclusive(v10, v13 & 1);
  if ( v17 )
    RtlpHpVaMgrRangeSplit(v10, v8, (v17 - v8) >> 5);
  v19 = RtlpHpVaMgrFree(v10, v14);
  if ( (*(_BYTE *)(v10 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v25 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      if ( v25 )
        goto LABEL_39;
      v27 = (__int64)&CurrentThread->LockEntries[v26];
      v24 &= ~(1 << v26);
      if ( (*(_BYTE *)(v27 + 26) & 1) != 0
        && (*(_DWORD *)(v27 + 32) & 1) == 0
        && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v27 + 40) == SessionId )
      {
        *(_BYTE *)(v27 + 26) &= ~1u;
        if ( *(_QWORD *)(v27 + 32) )
          break;
      }
    }
    if ( !v27 )
    {
LABEL_39:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, SessionId, 0LL);
      goto LABEL_51;
    }
    *(_BYTE *)(v27 + 32) |= 2u;
    if ( *(__int64 *)(v27 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v27);
    *(_DWORD *)(v27 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v27 + 25) &= ~1u;
    *(_QWORD *)(v27 + 32) = 0LL;
    v28 = (signed __int64)(v27 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v23 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v28;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v28);
LABEL_51:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  if ( v19 )
  {
    v11 = (_BYTE *)v19;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  return result;
}
