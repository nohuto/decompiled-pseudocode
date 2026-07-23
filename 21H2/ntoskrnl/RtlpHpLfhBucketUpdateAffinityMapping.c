/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x14023E408
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140282240 (KeGetCurrentProcessorNumberEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x140394C1C (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int SessionId; // r13d
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 result; // rax
  ULONG_PTR v13; // rsi
  unsigned __int8 v14; // al
  unsigned __int8 *v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int8 *v17; // r10
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // ecx
  _BYTE *v23; // r8
  unsigned __int8 v24; // al
  struct _KTHREAD *v25; // rbx
  unsigned __int8 v26; // r14
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rbx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdi
  unsigned __int8 v36; // al
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  signed __int32 v45[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v46; // [rsp+30h] [rbp-59h]
  int v47; // [rsp+34h] [rbp-55h]
  int v48; // [rsp+38h] [rbp-51h]
  int v49; // [rsp+3Ch] [rbp-4Dh]
  int v50; // [rsp+40h] [rbp-49h]
  __int64 v51; // [rsp+48h] [rbp-41h]
  __int64 v52; // [rsp+50h] [rbp-39h]
  __int64 v53; // [rsp+58h] [rbp-31h]
  _BYTE v54[64]; // [rsp+60h] [rbp-29h] BYREF

  v52 = a1;
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
  v8 = *(_QWORD *)(a2 + 88);
  CurrentThread = KeGetCurrentThread();
  v10 = (unsigned int)v6;
  v53 = (unsigned int)v6;
  v11 = *(unsigned __int8 *)(v6 + v8);
  result = BYTE5(CurrentThread[1].Ucb);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Ucb) = v6;
    return result;
  }
  memset(v54, 0, sizeof(v54));
  v13 = a2 + 80;
  v14 = RtlpHpAcquireLockExclusive(a2 + 80, *(unsigned __int8 *)(a1 + 57));
  v15 = *(unsigned __int8 **)(a2 + 88);
  v16 = v14;
  v17 = &v15[v10];
  if ( (_BYTE)v11 != v15[v10] )
    goto LABEL_16;
  v18 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v18 )
  {
    v19 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v20 = *v15++;
      ++v54[v20];
      --v19;
    }
    while ( v19 );
  }
  if ( v54[v11] == 1 )
    goto LABEL_16;
  v21 = (unsigned int)(v11 + 1);
  v22 = v21;
  if ( (unsigned int)v21 < v18 )
  {
    v23 = &v54[(unsigned int)v21];
    do
    {
      if ( !*v23 )
        break;
      if ( *v23 < v54[v21] )
        v21 = v22;
      ++v22;
      ++v23;
    }
    while ( v22 < v18 );
  }
  if ( v54[v21] )
  {
    *v17 = v21;
LABEL_16:
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v16 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v28 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v28 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v16);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 80);
      v50 = 0;
      v25 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
        SessionId = MmGetSessionIdEx(v25->ApcState.Process);
      --v25->SpecialApcDisable;
      v26 = ++v25->AbAllocationRegionCount;
      v27 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v49 = v29;
        if ( v28 )
          break;
        v30 = (__int64)&v25->LockEntries[v29];
        v27 &= ~(1 << v29);
        if ( (*(_BYTE *)(v30 + 26) & 1) != 0
          && (*(_DWORD *)(v30 + 32) & 1) == 0
          && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v30 + 40) == SessionId )
        {
          *(_BYTE *)(v30 + 26) &= ~1u;
          if ( *(_QWORD *)(v30 + 32) )
          {
            if ( v30 )
            {
              *(_BYTE *)(v30 + 32) |= 2u;
              if ( *(__int64 *)(v30 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
              v50 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
              *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v30 + 25) &= ~1u;
              *(_QWORD *)(v30 + 32) = 0LL;
              v31 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
              if ( v26 == 1 )
                v25->AbEntrySummary |= 1 << v31;
              else
                _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v31);
              goto LABEL_33;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, v13, SessionId, 0LL);
LABEL_33:
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25);
      v28 = v25->SpecialApcDisable++ == -1;
      if ( v28 && ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery();
      return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    return result;
  }
  v24 = *(_BYTE *)(a2 + 77);
  if ( v24 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v24 + 1;
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
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v28 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(v16);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 80);
    v48 = 0;
    v32 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
      SessionId = MmGetSessionIdEx(v32->ApcState.Process);
    --v32->SpecialApcDisable;
    v46 = ++v32->AbAllocationRegionCount;
    v33 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v28 = !_BitScanReverse((unsigned int *)&v34, v33);
      v47 = v34;
      if ( v28 )
        break;
      v35 = (__int64)&v32->LockEntries[v34];
      v33 &= ~(1 << v34);
      if ( (*(_BYTE *)(v35 + 26) & 1) != 0
        && (*(_DWORD *)(v35 + 32) & 1) == 0
        && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
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
            v48 = *(_DWORD *)(v35 + 88) & 0x1FFFF;
            *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v35 + 25) &= ~1u;
            *(_QWORD *)(v35 + 32) = 0LL;
            v36 = 1 << ((char)(v35 - LOBYTE(v32->LockEntries)) / 96);
            if ( v46 == 1 )
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v32);
    v28 = v32->SpecialApcDisable++ == -1;
    if ( v28 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  v51 = 0LL;
  v37 = *(_QWORD *)(a2 + 96);
  LOWORD(v51) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 8 * v21), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(v52, a2, (unsigned int)v21);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v21) = result;
    if ( result )
    {
      _InterlockedOr(v45, 0);
      v38 = v53;
      *(_BYTE *)(a2 + 2) = v21 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v38 + result) = v21;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
