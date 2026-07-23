/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x1402FBDA0
 * Callers:
 *     RtlpHpFreeVA @ 0x14027ADF0 (RtlpHpFreeVA.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpEnvFreeVA @ 0x14027AE84 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x14027AEC8 (MmFreePoolMemory.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     RtlSparseArrayElementAllocated @ 0x140289B6C (RtlSparseArrayElementAllocated.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVaMgrRangeFree @ 0x1402FBF04 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrFree @ 0x1402FD9F0 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1402FDB6C (RtlpHpVaMgrRangeSplit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405951FC (RtlSparseArrayElementFindCapped.c)
 */

char __fastcall RtlpHpVaMgrCtxFree(__int64 a1, ULONG_PTR *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // rdi
  _BYTE *v11; // rdx
  int v12; // eax
  unsigned __int8 v13; // r8
  _BYTE *v14; // r14
  __int64 v15; // rax
  ULONG_PTR v16; // rax
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
  __int64 v29; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // [rsp+68h] [rbp+10h] BYREF

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( v7 )
  {
    v9 = *v7;
    v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
    if ( (*v7 & 4) != 0 )
    {
      v11 = v7;
      *v7 = v9 & 0xFE;
LABEL_4:
      LOBYTE(v12) = RtlpHpVaMgrRangeFree(v10, v11);
      return v12;
    }
    v13 = *(_BYTE *)(v10 + 46);
    if ( (v13 & 6u) < 4 )
    {
      MmFreePoolMemory(a2, a3, 0x4000u);
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
    v18 = RtlpHpAcquireLockExclusive((volatile LONG *)v10, v13 & 1);
    if ( v17 )
      RtlpHpVaMgrRangeSplit(v10, v8, (v17 - v8) >> 5);
    v19 = RtlpHpVaMgrFree(v10, v14);
    if ( (*(_BYTE *)(v10 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
      LOBYTE(v12) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v12) = KeGetCurrentIrql();
          if ( (unsigned __int8)v12 <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)v12 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v25 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v25 )
              LOBYTE(v12) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      v33 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
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
      v33 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v10, &v33);
      v25 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v25
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v29);
      }
      LOBYTE(v12) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( v19 )
    {
      v11 = (_BYTE *)v19;
      goto LABEL_4;
    }
  }
  else
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    LOBYTE(v12) = RtlpHpEnvFreeVA(a2, a3, 0x8000);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
  }
  return v12;
}
