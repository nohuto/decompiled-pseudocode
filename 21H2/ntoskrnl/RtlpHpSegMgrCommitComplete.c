/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x140246428
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140315360 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int16 __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        PEX_SPIN_LOCK SpinLock,
        unsigned __int8 a6)
{
  int v6; // eax
  __int16 v9; // bx
  signed __int16 v10; // cx
  __int16 v11; // dx
  __int16 v12; // tt
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // bp
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  LOWORD(v6) = *a2;
  while ( 1 )
  {
    v9 = v6;
    v10 = v6;
    if ( (v6 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v11 = 0x8000;
      else
        v11 = 0;
      v10 = v11 | v6 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v10 += a3;
    }
    else if ( !a4 )
    {
      v10 -= a3;
    }
    if ( v10 == (_WORD)v6 )
      return v6;
    v12 = v6;
    LOWORD(v6) = _InterlockedCompareExchange16(a2, v10, v6);
    if ( v12 == (_WORD)v6 )
    {
      if ( (v9 & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          LOWORD(v6) = KiIrqlFlags;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              LOWORD(v6) = KeGetCurrentIrql();
              if ( (unsigned __int8)v6 <= 0xFu && a6 <= 0xFu && (unsigned __int8)v6 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v6 = ~(unsigned __int16)(-1LL << (a6 + 1));
                v17 = (v6 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v6;
                if ( v17 )
                  LOWORD(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(a6);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(SpinLock);
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
            SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = -1;
          --CurrentThread->SpecialApcDisable;
          v15 = ++CurrentThread->AbAllocationRegionCount;
          v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v17 = !_BitScanReverse((unsigned int *)&v18, v16);
            if ( v17 )
              goto LABEL_26;
            v19 = (__int64)&CurrentThread->LockEntries[v18];
            v16 &= ~(1 << v18);
            if ( (*(_BYTE *)(v19 + 26) & 1) != 0
              && (*(_DWORD *)(v19 + 32) & 1) == 0
              && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)SpinLock & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v19 + 40) == SessionId )
            {
              *(_BYTE *)(v19 + 26) &= ~1u;
              if ( *(_QWORD *)(v19 + 32) )
                break;
            }
          }
          if ( !v19 )
          {
LABEL_26:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)SpinLock, SessionId, 0LL);
            goto LABEL_38;
          }
          *(_BYTE *)(v19 + 32) |= 2u;
          if ( *(__int64 *)(v19 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
          *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v19 + 25) &= ~1u;
          *(_QWORD *)(v19 + 32) = 0LL;
          v20 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v15 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
LABEL_38:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
          v17 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v17
            && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          LOWORD(v6) = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
      }
      return v6;
    }
  }
}
