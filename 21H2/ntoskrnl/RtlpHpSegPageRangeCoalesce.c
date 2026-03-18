/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x140350FA0
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x14036DD30 (RtlpHpSegContextCompact.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegPageRangeCommit @ 0x1403507F0 (RtlpHpSegPageRangeCommit.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpScheduleCompaction @ 0x140365798 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegLockAcquire @ 0x140365AC8 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14036E090 (RtlpHpSegFreeRangeRemove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // r13
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  char v20; // cl
  char v21; // dl
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // r8d
  __int64 p_Process; // rsi
  unsigned int i; // edx
  int v28; // r8d
  struct _KTHREAD *v29; // rcx
  bool v30; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  int v35; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v35 = 0;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v12 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v11 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v10 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
        v10 = 0LL;
    }
    if ( (unsigned int)v11 > *(unsigned __int8 *)(a1 + 10) )
    {
      v13 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v13 += -32LL * *(unsigned __int8 *)(v13 + 31);
      if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v13);
        *(_BYTE *)(v13 + 31) += *(_BYTE *)(a2 + 31);
        v12 += (unsigned __int16)~*(_WORD *)(v13 + 28);
        *(_WORD *)(v13 + 28) = ~(_WORD)v12;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v13;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v13 + 31) - 1) + v13 + 31) = *(_BYTE *)(v13 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v10 )
    {
      RtlpHpSegFreeRangeRemove(a1, v10);
      v20 = *(_BYTE *)(a2 + 31);
      if ( v20 != 1 )
      {
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
        v20 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v20 + *(_BYTE *)(v10 + 31);
      v12 += (unsigned __int16)~*(_WORD *)(v10 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v12;
      *(_BYTE *)(v10 + 24) &= ~2u;
      v21 = *(_BYTE *)(a2 + 31) - 1;
      v22 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v22 + a2 + 24) |= 1u;
      *(_BYTE *)(v22 + a2 + 31) = v21;
    }
    if ( !v12 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v14 = *(__int16 *)(a1 + 22);
      v15 = *(_QWORD *)(v14 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = *(_QWORD *)(v14 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v16 <= 8 )
        v16 = 8LL;
      v17 = v12 + *(_QWORD *)(v14 + a1 + 16) + *(_QWORD *)(v14 + a1 + 24);
      if ( (v17 <= v15 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56), v15, v14, v12) >= 0) && v17 <= v16 )
        break;
    }
    v23 = (unsigned __int8)*v5;
    if ( (a3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
              v30 = (v34 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v34;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v23);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned __int64)(a1 + 64 - qword_140C50630) < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        _disable();
        p_Process = (__int64)&CurrentThread[1].Process;
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
            v28 = *(_DWORD *)(p_Process + 88);
            *(_DWORD *)(p_Process + 88) = 0;
            *(_BYTE *)(p_Process + 17) = 0;
            *(_QWORD *)p_Process = 0LL;
            CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
            _enable();
            if ( v28 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, a1 + 64, v28);
            goto LABEL_43;
          }
          p_Process += 96LL;
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        _enable();
LABEL_43:
        v29 = KeGetCurrentThread();
        v30 = v29->SpecialApcDisable++ == -1;
        if ( v30 && ($CEA84C04E3712D858E5667A507841A2A *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, &v35);
    *v5 = RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v18 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v18 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
