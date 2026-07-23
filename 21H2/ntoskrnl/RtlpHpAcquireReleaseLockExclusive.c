/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x14024C034
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x14024BCBC (RtlpHpHeapExtendContext.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpAcquireReleaseLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // al
  struct _KTHREAD *v5; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  if ( (_DWORD)a2 )
  {
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, a2);
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx(v5->ApcState.Process);
    else
      SessionId = -1;
    --v5->SpecialApcDisable;
    v7 = ++v5->AbAllocationRegionCount;
    v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      if ( v9 )
        break;
      v11 = (__int64)&v5->LockEntries[v10];
      v8 &= ~(1 << v10);
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v11 + 40) == SessionId )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
        {
          if ( v11 )
          {
            *(_BYTE *)(v11 + 32) |= 2u;
            if ( *(__int64 *)(v11 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
            v12 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
            *(_BYTE *)(v11 + 25) &= ~1u;
            *(_DWORD *)(v11 + 88) = v12;
            *(_QWORD *)(v11 + 32) = 0LL;
            v13 = (signed __int64)(v11 - (unsigned __int64)v5->LockEntries) / 96;
            if ( v7 == 1 )
              v5->AbEntrySummary |= 1 << v13;
            else
              _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v13);
            goto LABEL_17;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
    --v5->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v5);
    v9 = v5->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery();
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
