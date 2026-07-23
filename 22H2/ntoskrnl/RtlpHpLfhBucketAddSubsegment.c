/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x140308854
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140287430 (RtlpHpLfhSubsegmentFreeBlock.c)
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
 *     RtlpHpLfhSubsegmentSetOwner @ 0x140308BA0 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140308BC8 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentFree @ 0x140308CB8 (RtlpHpLfhSubsegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // eax
  __int64 v6; // rsi
  volatile signed __int64 *v9; // rbp
  unsigned __int64 v10; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r13
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v4) = *(_WORD *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)v4 )
  {
    v9 = (volatile signed __int64 *)(a2 + 16);
    v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 57));
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      LOBYTE(v4) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v4) = KeGetCurrentIrql();
          if ( (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)v4 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v13 = (v4 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v4;
            if ( v13 )
              LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
      v23 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 16) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v16 = ++CurrentThread->AbAllocationRegionCount;
      v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v13 = !_BitScanReverse((unsigned int *)&v18, v17);
        if ( v13 )
          break;
        v19 = (__int64)&CurrentThread->LockEntries[v18];
        v17 &= ~(1 << v18);
        if ( (*(_BYTE *)(v19 + 26) & 1) != 0
          && (*(_DWORD *)(v19 + 32) & 1) == 0
          && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
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
              v23 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
              *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v19 + 25) &= ~1u;
              *(_QWORD *)(v19 + 32) = 0LL;
              v20 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v16 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v20;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
              goto LABEL_33;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, SessionId, 0LL);
LABEL_33:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 16, &v23);
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v13
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v21);
      }
      LOBYTE(v4) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v6 )
    LOBYTE(v4) = RtlpHpLfhSubsegmentFree(a1, v6, a2, a4 & 1);
  return v4;
}
