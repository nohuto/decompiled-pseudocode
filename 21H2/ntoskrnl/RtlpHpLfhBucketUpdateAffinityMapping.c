/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402BFFB8
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14033CE40 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140260D70 (KeGetCurrentProcessorNumberEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x140394ACC (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rbx
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  signed __int32 v47[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v48; // [rsp+30h] [rbp-59h]
  int v49; // [rsp+34h] [rbp-55h]
  int v50; // [rsp+38h] [rbp-51h]
  int v51; // [rsp+3Ch] [rbp-4Dh]
  int v52; // [rsp+40h] [rbp-49h]
  __int64 v53; // [rsp+48h] [rbp-41h]
  __int64 v54; // [rsp+50h] [rbp-39h]
  __int64 v55; // [rsp+58h] [rbp-31h]
  _BYTE v56[64]; // [rsp+60h] [rbp-29h] BYREF

  v54 = a1;
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
  v55 = (unsigned int)v6;
  v11 = *(unsigned __int8 *)(v6 + v8);
  result = BYTE5(CurrentThread[1].Ucb);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE5(CurrentThread[1].Ucb) = v6;
    return result;
  }
  memset(v56, 0, sizeof(v56));
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
      ++v56[v20];
      --v19;
    }
    while ( v19 );
  }
  if ( v56[v11] == 1 )
    goto LABEL_16;
  v21 = (unsigned int)(v11 + 1);
  v22 = v21;
  if ( (unsigned int)v21 < v18 )
  {
    v23 = &v56[(unsigned int)v21];
    do
    {
      if ( !*v23 )
        break;
      if ( *v23 < v56[v21] )
        v21 = v22;
      ++v22;
      ++v23;
    }
    while ( v22 < v18 );
  }
  if ( v56[v21] )
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
      v52 = 0;
      v25 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
        SessionId = MmGetSessionIdEx(v25->ApcState.Process);
      --v25->SpecialApcDisable;
      v26 = ++v25->AbAllocationRegionCount;
      v27 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v51 = v29;
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
                KiAbEntryRemoveFromTree(v30);
              v52 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
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
        KiCheckForKernelApcDelivery(v32);
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
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v28 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v42);
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
    v33 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
      SessionId = MmGetSessionIdEx(v33->ApcState.Process);
    --v33->SpecialApcDisable;
    v48 = ++v33->AbAllocationRegionCount;
    v34 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v28 = !_BitScanReverse((unsigned int *)&v35, v34);
      v49 = v35;
      if ( v28 )
        break;
      v36 = (__int64)&v33->LockEntries[v35];
      v34 &= ~(1 << v35);
      if ( (*(_BYTE *)(v36 + 26) & 1) != 0
        && (*(_DWORD *)(v36 + 32) & 1) == 0
        && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v36 + 40) == SessionId )
      {
        *(_BYTE *)(v36 + 26) &= ~1u;
        if ( *(_QWORD *)(v36 + 32) )
        {
          if ( v36 )
          {
            *(_BYTE *)(v36 + 32) |= 2u;
            if ( *(__int64 *)(v36 + 32) < 0 )
              KiAbEntryRemoveFromTree(v36);
            v50 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
            *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v36 + 25) &= ~1u;
            *(_QWORD *)(v36 + 32) = 0LL;
            v37 = 1 << ((char)(v36 - LOBYTE(v33->LockEntries)) / 96);
            if ( v48 == 1 )
              v33->AbEntrySummary |= v37;
            else
              _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, v37);
            goto LABEL_62;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, a2 + 80, SessionId, 0LL);
LABEL_62:
    --v33->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v33);
    v28 = v33->SpecialApcDisable++ == -1;
    if ( v28 && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery(v38);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  v53 = 0LL;
  v39 = *(_QWORD *)(a2 + 96);
  LOWORD(v53) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 8 * v21), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(v54, a2, (unsigned int)v21);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v21) = result;
    if ( result )
    {
      _InterlockedOr(v47, 0);
      v40 = v55;
      *(_BYTE *)(a2 + 2) = v21 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v40 + result) = v21;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
