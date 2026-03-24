/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x1402A3F84
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1402A3F14 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1402A33F4 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1402A465C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1402A4C9C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x1402A501C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x1402A50D4 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1402A5250 (RtlpHpVaMgrRangeSplit.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpEnvFreeVA @ 0x1402FA804 (RtlpHpEnvFreeVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int SessionId; // r13d
  __int64 v17; // rdi
  __int64 v18; // r14
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v22; // r14
  unsigned int v23; // edx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  struct _KTHREAD *v33; // rdi
  unsigned int v34; // edx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // r14
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rsi
  unsigned __int8 v43; // al
  __int64 v44; // rcx
  __int64 v45; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-21h] BYREF
  __int64 v47; // [rsp+50h] [rbp-19h] BYREF
  __int128 v48; // [rsp+58h] [rbp-11h] BYREF
  __int64 v49; // [rsp+68h] [rbp-1h]
  unsigned __int64 v50; // [rsp+70h] [rbp+7h]
  _DWORD v51[4]; // [rsp+78h] [rbp+Fh]

  v47 = 0LL;
  v45 = 0LL;
  v3 = a3;
  v4 = *a2;
  v51[0] = 0x100000;
  v51[1] = 0x100000;
  v51[2] = 0x200000;
  v51[3] = 0x40000000;
  if ( !v4 )
    __int2c();
  if ( v4 > (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    if ( a3 <= (unsigned int)v51[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3] )
      v3 = (unsigned int)v51[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3];
    v46 = v4 - ((v3 - 1) & (v3 + v4 - 1)) + v3 - 1;
    v7 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v46);
    v45 = v7;
    if ( v7 )
    {
      v8 = *(_BYTE *)(BugCheckParameter2 + 44);
      v9 = v46;
      v49 = 0LL;
      v48 = 0LL;
      BYTE1(v48) = v8;
      LOBYTE(v48) = 5;
      v50 = v46 >> 20;
      if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, v7, &v48) )
      {
        *a2 = v9;
      }
      else
      {
        RtlpHpEnvFreeVA(&v45, &v46, 0x8000LL);
        return 0LL;
      }
    }
    return v45;
  }
  v11 = v4 >> 20;
  v12 = (unsigned __int8)RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
  v13 = RtlpHpVaMgrRangeFind(BugCheckParameter2, (unsigned __int16)v11, (unsigned __int16)(v3 >> 20), &v47);
  SessionId = -1;
  v17 = v13;
  if ( v13 )
  {
    RtlRbRemoveNode(BugCheckParameter2 + 8, v13, v14, v15);
    v18 = v47;
    if ( v47 != v17 )
    {
      *(_OWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_BYTE *)v17 = 1;
      *(_BYTE *)(v17 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
      RtlpHpVaMgrRangeSplit(BugCheckParameter2, v17, (v18 - v17) >> 5);
      RtlpHpVaMgrFree(BugCheckParameter2, v17);
      v17 = v18;
    }
LABEL_13:
    v19 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
        + ((unsigned __int64)(v17 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_BYTE *)v17 = 1;
    *(_BYTE *)(v17 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v17 + 24) > (unsigned __int16)v11 )
    {
      v20 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v17, (unsigned __int16)v11);
      RtlpHpVaMgrFree(BugCheckParameter2, v20);
    }
    v45 = v19;
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
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v24 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v24 )
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
      v22 = ++CurrentThread->AbAllocationRegionCount;
      v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v24 = !_BitScanReverse((unsigned int *)&v25, v23);
        if ( v24 )
          break;
        v26 = (__int64)&CurrentThread->LockEntries[v25];
        v23 &= ~(1 << v25);
        if ( (*(_BYTE *)(v26 + 26) & 1) != 0
          && (*(_DWORD *)(v26 + 32) & 1) == 0
          && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v26 + 40) == SessionId )
        {
          *(_BYTE *)(v26 + 26) &= ~1u;
          if ( *(_QWORD *)(v26 + 32) )
          {
            if ( v26 )
            {
              *(_BYTE *)(v26 + 32) |= 2u;
              if ( *(__int64 *)(v26 + 32) < 0 )
                KiAbEntryRemoveFromTree(v26);
              *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v26 + 25) &= ~1u;
              *(_QWORD *)(v26 + 32) = 0LL;
              v27 = (signed __int64)(v26 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v22 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v27;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v27);
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
      v24 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v24
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v28);
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    return v45;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v24 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v12);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v33 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      v34 = MmGetSessionIdEx(v33->ApcState.Process);
    else
      v34 = -1;
    --v33->SpecialApcDisable;
    v39 = ++v33->AbAllocationRegionCount;
    v40 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
    v24 = !_BitScanReverse((unsigned int *)&v41, v40);
    if ( v24 )
      goto LABEL_65;
    while ( 1 )
    {
      v42 = (__int64)&v33->LockEntries[v41];
      v40 &= ~(1 << v41);
      if ( (*(_BYTE *)(v42 + 26) & 1) != 0
        && (*(_DWORD *)(v42 + 32) & 1) == 0
        && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v42 + 40) == v34 )
      {
        *(_BYTE *)(v42 + 26) &= ~1u;
        if ( *(_QWORD *)(v42 + 32) )
          break;
      }
      v24 = !_BitScanReverse((unsigned int *)&v41, v40);
      if ( v24 )
        goto LABEL_65;
    }
    if ( !v42 )
    {
LABEL_65:
      if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v33, BugCheckParameter2, v34, 0LL);
    }
    else
    {
      *(_BYTE *)(v42 + 32) |= 2u;
      if ( *(__int64 *)(v42 + 32) < 0 )
        KiAbEntryRemoveFromTree(v42);
      *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v42 + 25) &= ~1u;
      *(_QWORD *)(v42 + 32) = 0LL;
      v43 = 1 << ((signed __int64)(v42 - (unsigned __int64)v33->LockEntries) / 96);
      if ( v39 == 1 )
        v33->AbEntrySummary |= v43;
      else
        _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, v43);
    }
    --v33->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v33);
    v24 = v33->SpecialApcDisable++ == -1;
    if ( v24 && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery(v44);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  v17 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
  if ( v17 )
  {
    LOBYTE(v12) = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    goto LABEL_13;
  }
  return v45;
}
