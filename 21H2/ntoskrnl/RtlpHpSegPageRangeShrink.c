/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x140350B40
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     RtlpHpSegFree @ 0x140364794 (RtlpHpSegFree.c)
 *     RtlpHpSegPageRangeFree @ 0x1405F31C0 (RtlpHpSegPageRangeFree.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140350FA0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x140351450 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpSegSegmentFree @ 0x14036808C (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

char __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, __int64 a3, __int64 SchedulerAssist)
{
  int v4; // ebp
  int v5; // r12d
  unsigned __int8 CurrentIrql; // si
  int *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax
  char v12; // dl
  unsigned __int64 v13; // rsi
  char v14; // al
  unsigned __int64 v15; // rdx
  bool v16; // al
  unsigned __int64 v17; // rax
  _QWORD *v18; // r14
  unsigned __int8 v19; // si
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rbp
  unsigned int SessionId; // r8d
  __int64 p_Process; // rbx
  unsigned int i; // edx
  int v25; // r8d
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  struct _KTHREAD *CurrentThread; // rax
  char *v29; // rax
  char v30; // cl
  __int64 v31; // rcx
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v34; // r8
  int v35; // eax
  int v37; // [rsp+70h] [rbp+18h] BYREF

  v37 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  v5 = SchedulerAssist;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v29 = (char *)(a2 + 56);
    SchedulerAssist = (unsigned int)(v4 - 2);
    do
    {
      v30 = *v29;
      v29 += 32;
      *(v29 - 32) = v30 & 0xFE;
      --SchedulerAssist;
    }
    while ( SchedulerAssist );
  }
  CurrentIrql = -1;
  if ( (v5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = a3;
      }
      v9 = (int *)(a1 + 64);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v9, CurrentIrql, a3, SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
  }
  v10 = *(_DWORD *)(a2 + 28);
  LOBYTE(v37) = CurrentIrql;
  if ( HIBYTE(v10) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v10;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v11 = RtlpHpSegPageRangeCoalesce(a1, a2, v5, 0, (__int64)&v37);
  v12 = *(_BYTE *)(a1 + 13);
  v13 = v11;
  if ( (v12 & 0x10) != 0
    && (LODWORD(v11) = *(unsigned __int8 *)(v11 + 31), (_DWORD)v11 == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v18 = (_QWORD *)(v13 & *(_QWORD *)a1);
    *(_DWORD *)v13 = -857879297;
    if ( v18 )
    {
      v31 = *v18;
      v11 = v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || *(_QWORD **)v11 != v18 )
        __fastfail(3u);
      *(_QWORD *)v11 = v31;
      *(_QWORD *)(v31 + 8) = v11;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v12 & 7) != 0 )
      v14 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              ((__int64)(v13 - (v13 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (v13 & *(_QWORD *)a1),
              *(unsigned __int8 *)(v13 + 31) << *(_BYTE *)(a1 + 8));
    else
      v14 = 4;
    *(_BYTE *)(v13 + 30) = v14;
    if ( (*(_QWORD *)(a1 + 104) & 1) == 0 )
    {
      v15 = *(_QWORD *)(a1 + 96);
      goto LABEL_15;
    }
    v20 = *(_QWORD *)(a1 + 96);
    if ( v20 )
    {
      v15 = v20 ^ (a1 + 96);
LABEL_15:
      v16 = 0;
      if ( !v15 )
        goto LABEL_29;
      while ( 1 )
      {
        if ( *(_DWORD *)(v13 + 28) >= *(_DWORD *)(v15 + 28) )
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_26;
            v17 ^= v15;
          }
          if ( !v17 )
          {
LABEL_26:
            v16 = 1;
            goto LABEL_29;
          }
        }
        else
        {
          v17 = *(_QWORD *)v15;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_28;
            v17 ^= v15;
          }
          if ( !v17 )
            goto LABEL_28;
        }
        v15 = v17;
      }
    }
    v15 = 0LL;
LABEL_28:
    v16 = 0;
LABEL_29:
    RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 96), v15, v16, v13);
    v11 = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + a1 + 16), (unsigned __int16)~*(_WORD *)(v13 + 28));
    v18 = 0LL;
  }
  if ( (v5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v32 = KeGetCurrentIrql(), v32 <= 0xFu) )
      {
        v19 = v37;
        if ( (unsigned __int8)v37 <= 0xFu && v32 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = CurrentPrcb->SchedulerAssist;
          v19 = v37;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
          v27 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v19 = v37;
      }
      LOBYTE(v11) = v19;
      __writecr8(v19);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v21 = KeGetCurrentThread();
      if ( (unsigned __int64)(a1 + 64 - qword_140C50630) < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v21->ApcState.Process);
      else
        SessionId = -1;
      _disable();
      p_Process = (__int64)&v21[1].Process;
      for ( i = 0; i < 6; ++i )
      {
        if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_BYTE *)(p_Process + 18)
          && (*(_DWORD *)p_Process & 1) == 0
          && *(_DWORD *)(p_Process + 8) == SessionId )
        {
          *(_BYTE *)(p_Process + 18) = 0;
          if ( *(__int64 *)p_Process < 0 )
          {
            *(_BYTE *)p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process);
            _disable();
          }
          v25 = *(_DWORD *)(p_Process + 88);
          *(_DWORD *)(p_Process + 88) = 0;
          *(_BYTE *)(p_Process + 17) = 0;
          *(_QWORD *)p_Process = 0LL;
          LOBYTE(v11) = *(_BYTE *)(p_Process + 16);
          v21->AbEntrySummary |= 1 << v11;
          _enable();
          if ( v25 )
            LOBYTE(v11) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v21, a1 + 64, v25);
          goto LABEL_52;
        }
        p_Process += 96LL;
      }
      LODWORD(v11) = *((_DWORD *)&v21->0 + 1);
      if ( (v11 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v21, a1 + 64, SessionId, 0LL);
      _enable();
LABEL_52:
      v26 = KeGetCurrentThread();
      v27 = v26->SpecialApcDisable++ == -1;
      if ( v27 )
      {
        v11 = (__int64)&v26->152;
        if ( *(_QWORD *)v11 != v11 )
          LOBYTE(v11) = KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v18 )
    LOBYTE(v11) = RtlpHpSegSegmentFree(a1);
  return v11;
}
