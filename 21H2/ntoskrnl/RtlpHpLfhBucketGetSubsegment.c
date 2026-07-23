/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x14022F1B0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14022F7D8 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // ebp
  __int64 v5; // r15
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // r14
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v7 = a1 + 16;
  v8 = (unsigned __int8)RtlpHpAcquireLockExclusive(a1 + 16, a2);
  if ( (_QWORD *)*v2 == v2 )
    v5 = 0LL;
  else
    v5 = RtlpHpLfhOwnerMoveSubsegment(a1, *v2, 2LL);
  if ( v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v16 = ++CurrentThread->AbAllocationRegionCount;
    v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v15 = !_BitScanReverse((unsigned int *)&v18, v17);
      if ( v15 )
        break;
      v19 = (__int64)&CurrentThread->LockEntries[v18];
      v17 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == SessionId )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
        {
          if ( v19 )
          {
            *(_BYTE *)(v19 + 32) |= 2u;
            if ( *(__int64 *)(v19 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
            *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v19 + 25) &= ~1u;
            *(_QWORD *)(v19 + 32) = 0LL;
            v20 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v16 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v20;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
            goto LABEL_32;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, SessionId, 0LL);
LABEL_32:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return v5;
}
