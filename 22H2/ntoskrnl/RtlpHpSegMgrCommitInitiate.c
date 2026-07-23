/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x1402898E8
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14028AC90 (RtlpHpSegMgrCommit.c)
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
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140324714 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        ULONG_PTR BugCheckParameter2,
        KIRQL *a6)
{
  signed __int16 v6; // di
  int v7; // esi
  KIRQL v8; // r12
  __int16 v11; // r14
  __int16 v12; // bx
  unsigned __int16 v13; // bx
  bool v14; // zf
  signed __int16 v15; // ax
  unsigned int v16; // edx
  signed __int16 v18; // bx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v21; // r14
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  __int64 v31; // [rsp+90h] [rbp+8h]
  char v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a1;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v6;
      if ( a3 <= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) != 0 )
        {
LABEL_6:
          v12 = v6;
LABEL_7:
          a1 = v31;
LABEL_8:
          v13 = a3 + v12;
          goto LABEL_9;
        }
        if ( (a4 & 3) != 0 )
        {
          if ( (a4 & 2) == 0 )
            goto LABEL_6;
          v18 = v6;
        }
        else
        {
          if ( !(unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1, 0x4000LL, 1LL) )
            goto LABEL_6;
          v18 = v6;
        }
        v12 = v18 | 0x4000;
        goto LABEL_7;
      }
      _mm_pause();
      v6 = *a2;
    }
    if ( v6 >= 0 )
    {
      v16 = -1073741567;
      goto LABEL_15;
    }
    v12 = v6;
    if ( a3 + (v6 & 0x7FF) )
      goto LABEL_8;
    v13 = v6 | 0x4000;
LABEL_9:
    if ( (v13 & 0x4000) != 0 )
    {
      v7 = 1;
      v8 = RtlpHpAcquireLockExclusive((volatile LONG *)BugCheckParameter2, *(_DWORD *)(a1 + 40) & 1);
    }
    v15 = _InterlockedCompareExchange16(a2, v13, v6);
    v14 = v6 == v15;
    v6 = v15;
    if ( v14 )
      break;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v31 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (v8 + 1));
              v14 = (v30 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v30;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v21 = ++CurrentThread->AbAllocationRegionCount;
        v22 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v14 = !_BitScanReverse((unsigned int *)&v23, v22);
          if ( v14 )
            break;
          v24 = (__int64)&CurrentThread->LockEntries[v23];
          v22 &= ~(1 << v23);
          if ( (*(_BYTE *)(v24 + 26) & 1) != 0
            && (*(_DWORD *)(v24 + 32) & 1) == 0
            && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v24 + 40) == SessionId )
          {
            *(_BYTE *)(v24 + 26) &= ~1u;
            if ( *(_QWORD *)(v24 + 32) )
            {
              if ( v24 )
              {
                *(_BYTE *)(v24 + 32) |= 2u;
                if ( *(__int64 *)(v24 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
                *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v24 + 25) &= ~1u;
                *(_QWORD *)(v24 + 32) = 0LL;
                v25 = (signed __int64)(v24 - (unsigned __int64)CurrentThread->LockEntries) / 96;
                if ( v21 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v25;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
                goto LABEL_49;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_49:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v14 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v14
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v26);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
      v7 = 0;
    }
    a1 = v31;
    a4 = v32;
  }
  if ( a3 <= 0 )
  {
    v16 = (v13 >> 13) & 2 | 0xC0000100;
  }
  else if ( v11 >= 0 )
  {
    v16 = ((v13 & 0x4000) != 0) - 1073741567;
  }
  else
  {
    v16 = -1073741568;
  }
LABEL_15:
  if ( v7 )
    *a6 = v8;
  return v16;
}
