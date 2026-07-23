/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x1402FC8A0
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1402FC830 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpEnvFreeVA @ 0x14027AE84 (RtlpHpEnvFreeVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1402FBD10 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1402FCF78 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1402FD5B8 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x1402FD938 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x1402FD9F0 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1402FDB6C (RtlpHpVaMgrRangeSplit.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
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
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v30; // eax
  struct _KTHREAD *v31; // rdi
  unsigned int v32; // edx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned __int8 v37; // r14
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int8 v41; // al
  __int64 v42; // rcx
  _DWORD v43[2]; // [rsp+34h] [rbp-35h] BYREF
  int v44; // [rsp+3Ch] [rbp-2Dh] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-29h] BYREF
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
        RtlpHpEnvFreeVA(&v45, &v46, 0x8000);
        return 0LL;
      }
    }
    return v45;
  }
  v11 = v4 >> 20;
  v12 = RtlpHpAcquireLockExclusive((volatile LONG *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
  v13 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                BugCheckParameter2,
                                (unsigned __int16)v11,
                                (unsigned __int16)(v3 >> 20),
                                &v47);
  SessionId = -1;
  v15 = (__int64)v13;
  if ( v13 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v13);
    v16 = v47;
    if ( v47 != v15 )
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
    v45 = v17;
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
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v22 = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
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
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v44 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      --CurrentThread->SpecialApcDisable;
      v20 = ++CurrentThread->AbAllocationRegionCount;
      v21 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v22 = !_BitScanReverse((unsigned int *)&v23, v21);
        v43[1] = v23;
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
              v44 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v44);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v26);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
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
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v22 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(v12);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    v43[0] = 0;
    v31 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      v32 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    else
      v32 = -1;
    --v31->SpecialApcDisable;
    v37 = ++v31->AbAllocationRegionCount;
    v38 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    v22 = !_BitScanReverse((unsigned int *)&v39, v38);
    if ( v22 )
      goto LABEL_65;
    while ( 1 )
    {
      v40 = (__int64)&v31->LockEntries[v39];
      v38 &= ~(1 << v39);
      if ( (*(_BYTE *)(v40 + 26) & 1) != 0
        && (*(_DWORD *)(v40 + 32) & 1) == 0
        && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v40 + 40) == v32 )
      {
        *(_BYTE *)(v40 + 26) &= ~1u;
        if ( *(_QWORD *)(v40 + 32) )
          break;
      }
      v22 = !_BitScanReverse((unsigned int *)&v39, v38);
      if ( v22 )
        goto LABEL_65;
    }
    if ( !v40 )
    {
LABEL_65:
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, BugCheckParameter2, v32, 0LL);
    }
    else
    {
      *(_BYTE *)(v40 + 32) |= 2u;
      if ( *(__int64 *)(v40 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v40);
      v43[0] = *(_DWORD *)(v40 + 88) & 0x1FFFF;
      *(_DWORD *)(v40 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v40 + 25) &= ~1u;
      *(_QWORD *)(v40 + 32) = 0LL;
      v41 = 1 << ((signed __int64)(v40 - (unsigned __int64)v31->LockEntries) / 96);
      if ( v37 == 1 )
        v31->AbEntrySummary |= v41;
      else
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, v41);
    }
    --v31->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v31, BugCheckParameter2, v43);
    v22 = v31->SpecialApcDisable++ == -1;
    if ( v22 && ($C459BD0D405E8E46662177FB3D0A143F *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery(v42);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v15 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
  if ( v15 )
  {
    LOBYTE(v12) = RtlpHpAcquireLockExclusive(
                    (volatile LONG *)BugCheckParameter2,
                    *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    goto LABEL_13;
  }
  return v45;
}
