/*
 * XREFs of RtlpHpSegContextCompact @ 0x140286E50
 * Callers:
 *     RtlpHpHeapCompact @ 0x14031D368 (RtlpHpHeapCompact.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140288450 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140288914 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegLockAcquire @ 0x140288A04 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14028AFE0 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentFree @ 0x1403893CC (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int8 v5; // al
  _QWORD *v6; // rsi
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v16; // bp
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD **v24; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // edx
  _QWORD *v29; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-30h]
  unsigned __int8 v31; // [rsp+70h] [rbp+8h] BYREF
  int v32; // [rsp+80h] [rbp+18h]
  int v33; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v30 = &v29;
  v29 = &v29;
  if ( !v2 )
  {
    v5 = RtlpHpSegLockAcquire();
    v6 = *(_QWORD **)(a1 + 72);
    v31 = v5;
    v7 = v5;
    if ( v6 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        v8 = (unsigned __int64)&v6[4 * *(unsigned __int8 *)(a1 + 10)];
        v9 = v8 + 32 * (256LL - *(unsigned __int8 *)(a1 + 10));
        if ( v8 < v9 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v8 + 24) & 1) == 0 && *(_WORD *)(v8 + 28) != 0xFFFF )
            {
              RtlpHpSegFreeRangeRemove(a1, v8);
              *(_BYTE *)(v8 + 24) |= 1u;
              v12 = 32LL * ((unsigned int)*(unsigned __int8 *)(v8 + 31) - 1);
              *(_BYTE *)(v12 + v8 + 24) |= 1u;
              v8 = RtlpHpSegPageRangeCoalesce(a1, v8, a2, 1, (__int64)&v31);
              v13 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v8, 0LL);
              if ( v13 )
                break;
            }
            v8 += 32LL * *(unsigned __int8 *)(v8 + 31);
            if ( v8 >= v9 )
              goto LABEL_6;
          }
          v22 = *v13;
          v6 = (_QWORD *)v6[1];
          v23 = (_QWORD *)v13[1];
          if ( *(_QWORD **)(*v13 + 8LL) != v13
            || (_QWORD *)*v23 != v13
            || (*v23 = v22, *(_QWORD *)(v22 + 8) = v23, v24 = (_QWORD **)v30, --*(_QWORD *)(a1 + 88), *v24 != &v29) )
          {
            __fastfail(3u);
          }
          v13[1] = v24;
          *v13 = &v29;
          *v24 = v13;
          v30 = v13;
        }
LABEL_6:
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != (_QWORD *)(a1 + 72) );
      v7 = v31;
    }
    if ( (a2 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v7 = v31;
              v28 = ~(unsigned __int16)(-1LL << (v31 + 1));
              v2 = (v28 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v28;
              if ( v2 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v33 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v16 = ++CurrentThread->AbAllocationRegionCount;
        v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v2 = !_BitScanReverse((unsigned int *)&v18, v17);
        v32 = v18;
        if ( v2 )
          goto LABEL_38;
        while ( 1 )
        {
          v19 = (__int64)&CurrentThread->LockEntries[v18];
          v17 &= ~(1 << v18);
          if ( (*(_BYTE *)(v19 + 26) & 1) != 0
            && (*(_DWORD *)(v19 + 32) & 1) == 0
            && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v19 + 40) == SessionId )
          {
            *(_BYTE *)(v19 + 26) &= ~1u;
            if ( *(_QWORD *)(v19 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v18, v17);
          v32 = v18;
          if ( v2 )
            goto LABEL_38;
        }
        if ( !v19 )
        {
LABEL_38:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v19 + 32) |= 2u;
          if ( *(__int64 *)(v19 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
          v33 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
          *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v19 + 25) &= ~1u;
          *(_QWORD *)(v19 + 32) = 0LL;
          v20 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v16 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v2 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v2
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v21);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
  }
  v10 = v29;
  for ( result = &v29; v10 != &v29; result = &v29 )
  {
    v10 = (_QWORD *)*v10;
    RtlpHpSegSegmentFree(a1);
  }
  return result;
}
