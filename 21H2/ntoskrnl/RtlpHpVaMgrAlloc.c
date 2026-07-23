/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x1402213C4
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x140221354 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140220834 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140221A9C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1402220DC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x14022245C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x140222514 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140222690 (RtlpHpVaMgrRangeSplit.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpEnvFreeVA @ 0x140305554 (RtlpHpEnvFreeVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v7; // rax
  char v8; // dl
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  _RTL_BALANCED_NODE *v13; // rax
  unsigned int SessionId; // r13d
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v20; // r14
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  struct _KTHREAD *v30; // rdi
  unsigned int v31; // edx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // r14
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rsi
  unsigned __int8 v40; // al
  __int64 v41; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-21h] BYREF
  __int64 v43; // [rsp+50h] [rbp-19h] BYREF
  __int128 v44; // [rsp+58h] [rbp-11h] BYREF
  __int64 v45; // [rsp+68h] [rbp-1h]
  unsigned __int64 v46; // [rsp+70h] [rbp+7h]
  _DWORD v47[4]; // [rsp+78h] [rbp+Fh]

  v43 = 0LL;
  v41 = 0LL;
  v3 = a3;
  v4 = *a2;
  v47[0] = 0x100000;
  v47[1] = 0x100000;
  v47[2] = 0x200000;
  v47[3] = 0x40000000;
  if ( !v4 )
    __int2c();
  if ( v4 > (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    if ( a3 <= (unsigned int)v47[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3] )
      v3 = (unsigned int)v47[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3];
    v42 = v4 - ((v3 - 1) & (v3 + v4 - 1)) + v3 - 1;
    v7 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v42);
    v41 = v7;
    if ( v7 )
    {
      v8 = *(_BYTE *)(BugCheckParameter2 + 44);
      v9 = v42;
      v45 = 0LL;
      v44 = 0LL;
      BYTE1(v44) = v8;
      LOBYTE(v44) = 5;
      v46 = v42 >> 20;
      if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, v7, &v44) )
      {
        *a2 = v9;
      }
      else
      {
        RtlpHpEnvFreeVA(&v41, &v42, 0x8000LL);
        return 0LL;
      }
    }
    return v41;
  }
  v11 = v4 >> 20;
  v12 = (unsigned __int8)RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
  v13 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                BugCheckParameter2,
                                (unsigned __int16)v11,
                                (unsigned __int16)(v3 >> 20),
                                &v43);
  SessionId = -1;
  v15 = (__int64)v13;
  if ( v13 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v13);
    v16 = v43;
    if ( v43 != v15 )
    {
      *(_OWORD *)v15 = 0LL;
      *(_QWORD *)(v15 + 16) = 0LL;
      *(_BYTE *)v15 = 1;
      *(_BYTE *)(v15 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
      RtlpHpVaMgrRangeSplit(BugCheckParameter2, v15, (v16 - v15) >> 5);
      RtlpHpVaMgrFree(BugCheckParameter2, v15);
      v15 = v16;
    }
LABEL_13:
    v17 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
        + ((unsigned __int64)(v15 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_BYTE *)v15 = 1;
    *(_BYTE *)(v15 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v15 + 24) > (unsigned __int16)v11 )
    {
      v18 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v15, (unsigned __int16)v11);
      RtlpHpVaMgrFree(BugCheckParameter2, v18);
    }
    v41 = v17;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v22 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8((unsigned __int8)v12);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      --CurrentThread->SpecialApcDisable;
      v20 = ++CurrentThread->AbAllocationRegionCount;
      v21 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v22 = !_BitScanReverse((unsigned int *)&v23, v21);
        if ( v22 )
          break;
        v24 = (__int64)&CurrentThread->LockEntries[v23];
        v21 &= ~(1 << v23);
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
              if ( v20 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v25;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
              goto LABEL_34;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_34:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    return v41;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v22 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    __writecr8(v12);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v30 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      v31 = MmGetSessionIdEx(v30->ApcState.Process);
    else
      v31 = -1;
    --v30->SpecialApcDisable;
    v36 = ++v30->AbAllocationRegionCount;
    v37 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
    v22 = !_BitScanReverse((unsigned int *)&v38, v37);
    if ( v22 )
      goto LABEL_65;
    while ( 1 )
    {
      v39 = (__int64)&v30->LockEntries[v38];
      v37 &= ~(1 << v38);
      if ( (*(_BYTE *)(v39 + 26) & 1) != 0
        && (*(_DWORD *)(v39 + 32) & 1) == 0
        && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v39 + 40) == v31 )
      {
        *(_BYTE *)(v39 + 26) &= ~1u;
        if ( *(_QWORD *)(v39 + 32) )
          break;
      }
      v22 = !_BitScanReverse((unsigned int *)&v38, v37);
      if ( v22 )
        goto LABEL_65;
    }
    if ( !v39 )
    {
LABEL_65:
      if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, BugCheckParameter2, v31, 0LL);
    }
    else
    {
      *(_BYTE *)(v39 + 32) |= 2u;
      if ( *(__int64 *)(v39 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
      *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v39 + 25) &= ~1u;
      *(_QWORD *)(v39 + 32) = 0LL;
      v40 = 1 << ((signed __int64)(v39 - (unsigned __int64)v30->LockEntries) / 96);
      if ( v36 == 1 )
        v30->AbEntrySummary |= v40;
      else
        _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, v40);
    }
    --v30->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v30);
    v22 = v30->SpecialApcDisable++ == -1;
    if ( v22 && ($C459BD0D405E8E46662177FB3D0A143F *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  v15 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
  if ( v15 )
  {
    LOBYTE(v12) = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    goto LABEL_13;
  }
  return v41;
}
