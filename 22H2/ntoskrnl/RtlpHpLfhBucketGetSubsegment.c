/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x1403085A0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140308BC8 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // r15
  unsigned __int64 v7; // rsi
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
  __int64 v21; // rcx
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v7 = a1 + 16;
  v8 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 16), a2);
  if ( (_QWORD *)*v2 == v2 )
    v5 = 0LL;
  else
    v5 = RtlpHpLfhOwnerMoveSubsegment(a1, *v2, 2LL);
  if ( a2 )
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
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    v22 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
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
            v22 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7, &v22);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v5;
}
