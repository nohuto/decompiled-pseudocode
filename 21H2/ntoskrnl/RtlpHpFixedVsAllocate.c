/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x140250200
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x140267370 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     RtlFindLongestRunClearEx @ 0x14039B7B0 (RtlFindLongestRunClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__m128i *__fastcall RtlpHpFixedVsAllocate(unsigned __int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // r14
  int v8; // r13d
  unsigned __int8 v9; // si
  __m128i v10; // xmm0
  __int64 ClearBitsAndSet; // rax
  __m128i *v12; // r15
  int LongestRunClear; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r12
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  _QWORD v27[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v28; // [rsp+90h] [rbp+48h] BYREF
  int v29; // [rsp+98h] [rbp+50h]
  int v30; // [rsp+A0h] [rbp+58h]
  _DWORD *v31; // [rsp+A8h] [rbp+60h]

  v31 = a4;
  v5 = a2;
  v6 = a1 + 24;
  v8 = a3 & 1;
  if ( (a3 & 1) != 0 )
    v9 = -1;
  else
    v9 = RtlpHpAcquireLockExclusive(a1 + 24, *(unsigned int *)(a1 + 32));
  v10 = *(__m128i *)(a1 + 48);
  v27[0] = *(_QWORD *)(a1 + 48);
  v27[1] = a1 ^ _mm_srli_si128(v10, 8).m128i_u64[0];
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v27, v5 >> 12, 0LL);
  v28 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    LongestRunClear = RtlFindLongestRunClearEx(v27, &v28);
    v12 = 0LL;
    *a5 = LongestRunClear << 12;
  }
  else
  {
    v12 = (__m128i *)(a1 + (ClearBitsAndSet << 12));
    *a5 = 0;
    *v31 = 0;
  }
  if ( !v8 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v19 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      v30 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v17 = ++CurrentThread->AbAllocationRegionCount;
      v18 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v19 = !_BitScanReverse((unsigned int *)&v20, v18);
        v29 = v20;
        if ( v19 )
          goto LABEL_17;
        v21 = (__int64)&CurrentThread->LockEntries[v20];
        v18 &= ~(1 << v20);
        if ( (*(_BYTE *)(v21 + 26) & 1) != 0
          && (*(_DWORD *)(v21 + 32) & 1) == 0
          && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v21 + 40) == SessionId )
        {
          *(_BYTE *)(v21 + 26) &= ~1u;
          if ( *(_QWORD *)(v21 + 32) )
            break;
        }
      }
      if ( !v21 )
      {
LABEL_17:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
        goto LABEL_29;
      }
      *(_BYTE *)(v21 + 32) |= 2u;
      if ( *(__int64 *)(v21 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
      v30 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
      *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v21 + 25) &= ~1u;
      *(_QWORD *)(v21 + 32) = 0LL;
      v22 = (signed __int64)(v21 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v17 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v22;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v22);
LABEL_29:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v12;
}
