/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x140221C70
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x140220E60 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x140221288 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x140221B88 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140221EB4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  ULONG_PTR v3; // rdi
  unsigned __int64 v4; // rbx
  volatile LONG *v5; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = v1 + 24;
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((unsigned __int8 *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v9 = ++CurrentThread->AbAllocationRegionCount;
      v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v11 = !_BitScanReverse((unsigned int *)&v12, v10);
        if ( v11 )
          break;
        v13 = (__int64)&CurrentThread->LockEntries[v12];
        v10 &= ~(1 << v12);
        if ( (*(_BYTE *)(v13 + 26) & 1) != 0
          && (*(_DWORD *)(v13 + 32) & 1) == 0
          && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v13 + 40) == SessionId )
        {
          *(_BYTE *)(v13 + 26) &= ~1u;
          if ( *(_QWORD *)(v13 + 32) )
          {
            if ( v13 )
            {
              *(_BYTE *)(v13 + 32) |= 2u;
              if ( *(__int64 *)(v13 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
              *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v13 + 25) &= ~1u;
              *(_QWORD *)(v13 + 32) = 0LL;
              v14 = (signed __int64)(v13 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v9 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v14;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
              goto LABEL_28;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
LABEL_28:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v3);
      KeAbPostRelease(v3);
    }
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
