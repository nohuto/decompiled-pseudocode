/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x140319688
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1402605D0 (KeGetCurrentProcessorNumberEx.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x1403943CC (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 */

char __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int SessionId; // r13d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 Slot; // rax
  ULONG_PTR v12; // rsi
  KIRQL v13; // al
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int8 *v16; // r10
  unsigned int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned int v21; // ecx
  _BYTE *v22; // r8
  unsigned __int8 v23; // al
  struct _KTHREAD *v24; // rbx
  unsigned __int8 v25; // r14
  unsigned int v26; // edx
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rbx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdi
  unsigned __int8 v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  signed __int32 v47[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v48; // [rsp+30h] [rbp-59h]
  int v49; // [rsp+34h] [rbp-55h]
  _DWORD v50[2]; // [rsp+38h] [rbp-51h] BYREF
  int v51; // [rsp+40h] [rbp-49h] BYREF
  __int64 v52; // [rsp+48h] [rbp-41h]
  __int64 v53; // [rsp+50h] [rbp-39h]
  __int64 v54; // [rsp+58h] [rbp-31h]
  _BYTE v55[64]; // [rsp+60h] [rbp-29h] BYREF

  v53 = a1;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  SessionId = -1;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + -1 - v5 + (unsigned int)v6);
  }
  Slot = *(_QWORD *)(a2 + 88);
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)v6;
  v54 = (unsigned int)v6;
  v10 = *(unsigned __int8 *)(v6 + Slot);
  LODWORD(Slot) = BYTE5(CurrentThread[1].Ucb);
  if ( (_DWORD)Slot != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Ucb) = v6;
    return Slot;
  }
  memset(v55, 0, sizeof(v55));
  v12 = a2 + 80;
  v13 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 80), *(unsigned __int8 *)(a1 + 57));
  v14 = *(unsigned __int8 **)(a2 + 88);
  v15 = v13;
  v16 = &v14[v9];
  if ( (_BYTE)v10 != v14[v9] )
    goto LABEL_16;
  v17 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v17 )
  {
    v18 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v19 = *v14++;
      ++v55[v19];
      --v18;
    }
    while ( v18 );
  }
  if ( v55[v10] == 1 )
    goto LABEL_16;
  v20 = (unsigned int)(v10 + 1);
  v21 = v20;
  if ( (unsigned int)v20 < v17 )
  {
    v22 = &v55[(unsigned int)v20];
    do
    {
      if ( !*v22 )
        break;
      if ( *v22 < v55[v20] )
        v20 = v21;
      ++v21;
      ++v22;
    }
    while ( v21 < v17 );
  }
  if ( v55[v20] )
  {
    *v16 = v20;
LABEL_16:
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
      LOBYTE(Slot) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(Slot) = KeGetCurrentIrql();
          if ( (unsigned __int8)Slot <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)Slot >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            LODWORD(Slot) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v27 = ((unsigned int)Slot & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= Slot;
            if ( v27 )
              LOBYTE(Slot) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80));
      v51 = 0;
      v24 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
      --v24->SpecialApcDisable;
      v25 = ++v24->AbAllocationRegionCount;
      v26 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v27 = !_BitScanReverse((unsigned int *)&v28, v26);
        v50[1] = v28;
        if ( v27 )
          break;
        v29 = (__int64)&v24->LockEntries[v28];
        v26 &= ~(1 << v28);
        if ( (*(_BYTE *)(v29 + 26) & 1) != 0
          && (*(_DWORD *)(v29 + 32) & 1) == 0
          && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v29 + 40) == SessionId )
        {
          *(_BYTE *)(v29 + 26) &= ~1u;
          if ( *(_QWORD *)(v29 + 32) )
          {
            if ( v29 )
            {
              *(_BYTE *)(v29 + 32) |= 2u;
              if ( *(__int64 *)(v29 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
              v51 = *(_DWORD *)(v29 + 88) & 0x1FFFF;
              *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v29 + 25) &= ~1u;
              *(_QWORD *)(v29 + 32) = 0LL;
              v30 = (signed __int64)(v29 - (unsigned __int64)v24->LockEntries) / 96;
              if ( v25 == 1 )
                v24->AbEntrySummary |= 1 << v30;
              else
                _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v30);
              goto LABEL_33;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, v12, SessionId, 0LL);
LABEL_33:
      --v24->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v24, v12, &v51);
      v27 = v24->SpecialApcDisable++ == -1;
      if ( v27 && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
        KiCheckForKernelApcDelivery(v31);
      LOBYTE(Slot) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return Slot;
  }
  v23 = *(_BYTE *)(a2 + 77);
  if ( v23 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v23 + 1;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v27 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
    }
    __writecr8(v15);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80));
    v50[0] = 0;
    v32 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v32->ApcState.Process);
    --v32->SpecialApcDisable;
    v48 = ++v32->AbAllocationRegionCount;
    v33 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v27 = !_BitScanReverse((unsigned int *)&v34, v33);
      v49 = v34;
      if ( v27 )
        break;
      v35 = (__int64)&v32->LockEntries[v34];
      v33 &= ~(1 << v34);
      if ( (*(_BYTE *)(v35 + 26) & 1) != 0
        && (*(_DWORD *)(v35 + 32) & 1) == 0
        && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v35 + 40) == SessionId )
      {
        *(_BYTE *)(v35 + 26) &= ~1u;
        if ( *(_QWORD *)(v35 + 32) )
        {
          if ( v35 )
          {
            *(_BYTE *)(v35 + 32) |= 2u;
            if ( *(__int64 *)(v35 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35);
            v50[0] = *(_DWORD *)(v35 + 88) & 0x1FFFF;
            *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v35 + 25) &= ~1u;
            *(_QWORD *)(v35 + 32) = 0LL;
            v36 = 1 << ((char)(v35 - LOBYTE(v32->LockEntries)) / 96);
            if ( v48 == 1 )
              v32->AbEntrySummary |= v36;
            else
              _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, v36);
            goto LABEL_62;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v32, a2 + 80, SessionId, 0LL);
LABEL_62:
    --v32->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v32, a2 + 80, v50);
    v27 = v32->SpecialApcDisable++ == -1;
    if ( v27 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
      KiCheckForKernelApcDelivery(v37);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v52 = 0LL;
  v38 = *(_QWORD *)(a2 + 96);
  LOWORD(v52) = 2;
  Slot = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 8 * v20), 2LL, 0LL);
  if ( !Slot )
  {
    Slot = RtlpHpLfhBucketAllocateSlot(v53, a2, (unsigned int)v20);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v20) = Slot;
    if ( Slot )
    {
      _InterlockedOr(v47, 0);
      v39 = v54;
      *(_BYTE *)(a2 + 2) = v20 + 1;
      Slot = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v39 + Slot) = v20;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return Slot;
}
