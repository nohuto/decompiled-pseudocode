/*
 * XREFs of RtlpHpFixedVsFree @ 0x140380450
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpFixedVsFree(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  int v8; // r11d
  int v9; // r12d
  unsigned __int8 v10; // r15
  __m128i v11; // xmm0
  const signed __int64 *v12; // rdx
  signed __int64 v13; // r8
  const signed __int64 *v14; // r9
  bool i; // zf
  unsigned __int8 v16; // al
  KIRQL v17; // al
  __int32 v18; // eax
  unsigned __int64 v19; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v22; // r14
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v30; // eax
  unsigned __int64 v31; // [rsp+30h] [rbp-18h] BYREF
  const signed __int64 *v32; // [rsp+38h] [rbp-10h]
  int v34; // [rsp+98h] [rbp+50h]
  int v35; // [rsp+A8h] [rbp+60h] BYREF

  v34 = a2;
  v4 = (unsigned __int64)a3 >> 12;
  v6 = (a2 - a1) >> 12;
  v7 = a4;
  v8 = a2;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v10 = -1;
  }
  else
  {
    v17 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 24), *(_DWORD *)(a1 + 32));
    v8 = v34;
    v10 = v17;
  }
  v11 = *(__m128i *)(a1 + 48);
  v31 = *(_QWORD *)(a1 + 48);
  v32 = (const signed __int64 *)(a1 ^ _mm_srli_si128(v11, 8).m128i_u64[0]);
  if ( v6 >= v31 )
    goto LABEL_20;
  if ( v4 <= 1 )
  {
    if ( v4 != 1 )
      goto LABEL_20;
    v16 = _bittest64(v32, v6);
LABEL_19:
    if ( !v16 )
      goto LABEL_20;
    goto LABEL_8;
  }
  if ( v31 - v6 < v4 )
    goto LABEL_20;
  v12 = &v32[v6 >> 6];
  v13 = *v12;
  v14 = &v32[(v6 + v4 - 1) >> 6];
  if ( v12 == v14 )
  {
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6) & v13) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v6 )
      goto LABEL_8;
LABEL_20:
    RtlpLogHeapFailure(8, a1, v8, a3, v7, 0LL);
    __fastfail(0x32u);
  }
  for ( i = ((-1LL << v6) & v13) == -1LL << v6; ; i = *v12 == -1 )
  {
    if ( !i )
      goto LABEL_20;
    if ( ++v12 == v14 )
      break;
  }
  if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1)) & *v12) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 + (unsigned __int8)v4 - 1) )
  {
    v16 = 0;
    goto LABEL_19;
  }
LABEL_8:
  RtlClearBitsEx((__int64)&v31, v6, v4);
  if ( !v9 )
  {
    v18 = *(_DWORD *)(a1 + 32);
    v19 = a1 + 24;
    if ( v18 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v19);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v10 + 1));
            i = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
            if ( i )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v19);
      v35 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v22 = ++CurrentThread->AbAllocationRegionCount;
      v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        i = !_BitScanReverse((unsigned int *)&v24, v23);
        if ( i )
          goto LABEL_29;
        v25 = (__int64)&CurrentThread->LockEntries[v24];
        v23 &= ~(1 << v24);
        if ( (*(_BYTE *)(v25 + 26) & 1) != 0
          && (*(_DWORD *)(v25 + 32) & 1) == 0
          && (*(_QWORD *)(v25 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v25 + 40) == SessionId )
        {
          *(_BYTE *)(v25 + 26) &= ~1u;
          if ( *(_QWORD *)(v25 + 32) )
            break;
        }
      }
      if ( !v25 )
      {
LABEL_29:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v19, SessionId, 0LL);
        goto LABEL_41;
      }
      *(_BYTE *)(v25 + 32) |= 2u;
      if ( *(__int64 *)(v25 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v25);
      v35 = *(_DWORD *)(v25 + 88) & 0x1FFFF;
      *(_DWORD *)(v25 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v25 + 25) &= ~1u;
      *(_QWORD *)(v25 + 32) = 0LL;
      v26 = (signed __int64)(v25 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v22 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v26;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
LABEL_41:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v19, (unsigned int *)&v35);
      i = CurrentThread->SpecialApcDisable++ == -1;
      if ( i && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
