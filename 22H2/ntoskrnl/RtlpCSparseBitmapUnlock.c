/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x1402FD14C
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1402FC33C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1402FC764 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1402FD064 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402FD390 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  volatile LONG *v5; // rcx
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // [rsp+68h] [rbp+10h] BYREF

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
    LOBYTE(v6) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v6) = KeGetCurrentIrql();
        if ( (unsigned __int8)v6 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v11 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      v19 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
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
              v19 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v19);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v15);
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v3);
      KeAbPostRelease(v3);
    }
    LOBYTE(v6) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v6;
}
