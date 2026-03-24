/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1402CD7BC
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1402CD7A0 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1402CDB34 (RtlpHpAcquireReleaseLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAllocVA @ 0x14030AD50 (RtlpHpAllocVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     RtlpHpMetadataCommit @ 0x1403CB0F4 (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  __int64 v3; // rdi
  unsigned int v5; // r13d
  signed __int64 v6; // r15
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int128 v12; // xmm0
  unsigned __int64 v13; // rdi
  int v14; // eax
  bool v15; // sf
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v18; // edx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int SessionId; // edx
  unsigned __int8 v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  struct _KTHREAD *v42; // rbx
  unsigned __int8 v43; // r14
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rdi
  unsigned int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  int v52; // edx
  _DWORD *v53; // r9
  unsigned __int64 v54; // [rsp+40h] [rbp-29h] BYREF
  __int64 v55; // [rsp+48h] [rbp-21h] BYREF
  __int128 v56; // [rsp+60h] [rbp-9h] BYREF
  __int128 v57[5]; // [rsp+70h] [rbp+7h] BYREF

  v2 = (ULONG_PTR)(a1 + 14);
  v54 = 0LL;
  v3 = a2;
  v55 = 0LL;
  RtlpHpAcquireReleaseLockExclusive((ULONG_PTR)(a1 + 14));
  v5 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)a1 + 29);
        if ( (unsigned __int64)(v6 + v3) > *((_QWORD *)a1 + 30) )
          break;
        if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 29, v6 + v3, v6) )
          return v6;
      }
      v8 = RtlpHpAcquireLockExclusive(v2, *(_DWORD *)a1 & 1);
      v9 = *((_QWORD *)a1 + 29);
      v10 = *((_QWORD *)a1 + 30);
      v11 = v8;
      if ( v9 + v3 > v10 )
        break;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v2);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v28 = ++CurrentThread->AbAllocationRegionCount;
        v29 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v30, v29);
        if ( v21 )
          goto LABEL_55;
        while ( 1 )
        {
          v31 = (__int64)&CurrentThread->LockEntries[v30];
          v29 &= ~(1 << v30);
          if ( (*(_BYTE *)(v31 + 26) & 1) != 0
            && (*(_DWORD *)(v31 + 32) & 1) == 0
            && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v31 + 40) == SessionId )
          {
            *(_BYTE *)(v31 + 26) &= ~1u;
            if ( *(_QWORD *)(v31 + 32) )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v30, v29);
          if ( v21 )
            goto LABEL_55;
        }
        if ( !v31 )
        {
LABEL_55:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v31 + 32) |= 2u;
          if ( *(__int64 *)(v31 + 32) < 0 )
            KiAbEntryRemoveFromTree(v31);
          v32 = *(_DWORD *)(v31 + 88) & 0xFFFE0000;
          *(_BYTE *)(v31 + 25) &= ~1u;
          *(_DWORD *)(v31 + 88) = v32;
          *(_QWORD *)(v31 + 32) = 0LL;
          v33 = (signed __int64)(v31 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v28 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v33;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v33);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( !v21 )
          goto LABEL_28;
LABEL_26:
        if ( ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          KiCheckForKernelApcDelivery(v26);
LABEL_28:
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        goto LABEL_29;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    v12 = *a1;
    v55 = *((_QWORD *)a1 + 30);
    v13 = (v9 - v10 + 4095 + v3) & 0xFFFFFFFFFFFFF000uLL;
    v54 = v13;
    if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
    {
      v56 = v12;
      v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v13, (unsigned int)&v56, 1);
    }
    else
    {
      v57[0] = v12;
      v14 = RtlpHpAllocVA((unsigned int)&v55, (unsigned int)&v54, 0, 4096, 4, (__int64)v57);
      v13 = v54;
    }
    v15 = v14 < 0;
    v16 = *(_DWORD *)a1;
    if ( v15 )
      break;
    *((_QWORD *)a1 + 30) += v13;
    if ( (v16 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
        v18 = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        v18 = -1;
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v21 = !_BitScanReverse((unsigned int *)&v22, v20);
      if ( v21 )
        goto LABEL_35;
      while ( 1 )
      {
        v23 = (__int64)&CurrentThread->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v23 + 40) == v18 )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
            break;
        }
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        if ( v21 )
          goto LABEL_35;
      }
      if ( !v23 )
      {
LABEL_35:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v18, 0LL);
      }
      else
      {
        *(_BYTE *)(v23 + 32) |= 2u;
        if ( *(__int64 *)(v23 + 32) < 0 )
          KiAbEntryRemoveFromTree(v23);
        v24 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
        *(_BYTE *)(v23 + 25) &= ~1u;
        *(_DWORD *)(v23 + 88) = v24;
        *(_QWORD *)(v23 + 32) = 0LL;
        v25 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v19 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v25;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( !v21 )
        goto LABEL_28;
      goto LABEL_26;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v11);
LABEL_29:
    v3 = a2;
  }
  v6 = 0LL;
  if ( (v16 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v50 = KeGetCurrentIrql();
        if ( v50 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v53 = v51->SchedulerAssist;
          v21 = (v52 & v53[5]) == 0;
          v53[5] &= v52;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    v42 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      v5 = MmGetSessionIdEx(v42->ApcState.Process);
    --v42->SpecialApcDisable;
    v43 = ++v42->AbAllocationRegionCount;
    v44 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v45, v44);
      if ( v21 )
        break;
      v46 = (__int64)&v42->LockEntries[v45];
      v44 &= ~(1 << v45);
      if ( (*(_BYTE *)(v46 + 26) & 1) != 0
        && (*(_DWORD *)(v46 + 32) & 1) == 0
        && (*(_QWORD *)(v46 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v46 + 40) == v5 )
      {
        *(_BYTE *)(v46 + 26) &= ~1u;
        if ( *(_QWORD *)(v46 + 32) )
        {
          if ( v46 )
          {
            *(_BYTE *)(v46 + 32) |= 2u;
            if ( *(__int64 *)(v46 + 32) < 0 )
              KiAbEntryRemoveFromTree(v46);
            v47 = *(_DWORD *)(v46 + 88) & 0xFFFE0000;
            *(_BYTE *)(v46 + 25) &= ~1u;
            *(_DWORD *)(v46 + 88) = v47;
            *(_QWORD *)(v46 + 32) = 0LL;
            v48 = (signed __int64)(v46 - (unsigned __int64)v42->LockEntries) / 96;
            if ( v43 == 1 )
              v42->AbEntrySummary |= 1 << v48;
            else
              _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v48);
            goto LABEL_93;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v42, v2, v5, 0LL);
LABEL_93:
    --v42->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v42);
    v21 = v42->SpecialApcDisable++ == -1;
    if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
      KiCheckForKernelApcDelivery(v49);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return v6;
}
