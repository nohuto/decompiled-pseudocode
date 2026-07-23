/*
 * XREFs of RtlpHpHeapExtendContext @ 0x14024BCBC
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x14024BCA0 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14024C034 (RtlpHpAcquireReleaseLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     RtlpHpMetadataCommit @ 0x1403CB264 (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  unsigned int SessionId; // edx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  struct _KTHREAD *v41; // rbx
  unsigned __int8 v42; // r14
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdi
  unsigned int v46; // edx
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  int v50; // edx
  _DWORD *v51; // r9
  unsigned __int64 v52; // [rsp+40h] [rbp-29h] BYREF
  __int64 v53; // [rsp+48h] [rbp-21h] BYREF
  __int128 v54; // [rsp+60h] [rbp-9h] BYREF
  __int128 v55[5]; // [rsp+70h] [rbp+7h] BYREF

  v2 = (ULONG_PTR)(a1 + 14);
  v52 = 0LL;
  v3 = a2;
  v53 = 0LL;
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
        v27 = ++CurrentThread->AbAllocationRegionCount;
        v28 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v29, v28);
        if ( v21 )
          goto LABEL_55;
        while ( 1 )
        {
          v30 = (__int64)&CurrentThread->LockEntries[v29];
          v28 &= ~(1 << v29);
          if ( (*(_BYTE *)(v30 + 26) & 1) != 0
            && (*(_DWORD *)(v30 + 32) & 1) == 0
            && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v30 + 40) == SessionId )
          {
            *(_BYTE *)(v30 + 26) &= ~1u;
            if ( *(_QWORD *)(v30 + 32) )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v29, v28);
          if ( v21 )
            goto LABEL_55;
        }
        if ( !v30 )
        {
LABEL_55:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v30 + 32) |= 2u;
          if ( *(__int64 *)(v30 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
          v31 = *(_DWORD *)(v30 + 88) & 0xFFFE0000;
          *(_BYTE *)(v30 + 25) &= ~1u;
          *(_DWORD *)(v30 + 88) = v31;
          *(_QWORD *)(v30 + 32) = 0LL;
          v32 = (signed __int64)(v30 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v27 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v32;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v32);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( !v21 )
          goto LABEL_28;
LABEL_26:
        if ( ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          KiCheckForKernelApcDelivery();
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
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    v12 = *a1;
    v53 = *((_QWORD *)a1 + 30);
    v13 = (v9 - v10 + 4095 + v3) & 0xFFFFFFFFFFFFF000uLL;
    v52 = v13;
    if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
    {
      v54 = v12;
      v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v13, (unsigned int)&v54, 1);
    }
    else
    {
      v55[0] = v12;
      v14 = RtlpHpAllocVA((unsigned int)&v53, (unsigned int)&v52, 0, 4096, 4, (__int64)v55);
      v13 = v52;
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
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
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
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v38);
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
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v51 = v49->SchedulerAssist;
          v21 = (v50 & v51[5]) == 0;
          v51[5] &= v50;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    v41 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      v5 = MmGetSessionIdEx(v41->ApcState.Process);
    --v41->SpecialApcDisable;
    v42 = ++v41->AbAllocationRegionCount;
    v43 = ((char)v41->AbEntrySummary | (char)v41->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v44, v43);
      if ( v21 )
        break;
      v45 = (__int64)&v41->LockEntries[v44];
      v43 &= ~(1 << v44);
      if ( (*(_BYTE *)(v45 + 26) & 1) != 0
        && (*(_DWORD *)(v45 + 32) & 1) == 0
        && (*(_QWORD *)(v45 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v45 + 40) == v5 )
      {
        *(_BYTE *)(v45 + 26) &= ~1u;
        if ( *(_QWORD *)(v45 + 32) )
        {
          if ( v45 )
          {
            *(_BYTE *)(v45 + 32) |= 2u;
            if ( *(__int64 *)(v45 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v45);
            v46 = *(_DWORD *)(v45 + 88) & 0xFFFE0000;
            *(_BYTE *)(v45 + 25) &= ~1u;
            *(_DWORD *)(v45 + 88) = v46;
            *(_QWORD *)(v45 + 32) = 0LL;
            v47 = (signed __int64)(v45 - (unsigned __int64)v41->LockEntries) / 96;
            if ( v42 == 1 )
              v41->AbEntrySummary |= 1 << v47;
            else
              _InterlockedOr8((volatile signed __int8 *)&v41->AbOrphanedEntrySummary, 1 << v47);
            goto LABEL_93;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v41->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v41, v2, v5, 0LL);
LABEL_93:
    --v41->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v41);
    v21 = v41->SpecialApcDisable++ == -1;
    if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return v6;
}
