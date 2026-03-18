/*
 * XREFs of RtlpHpSegContextCompact @ 0x14036DD30
 * Callers:
 *     RtlpHpHeapCompact @ 0x14036DC90 (RtlpHpHeapCompact.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140350FA0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140353A00 (RtlpHpSegFreeRangeInsert.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpSegLockAcquire @ 0x140365AC8 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegSegmentFree @ 0x14036808C (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14036E090 (RtlpHpSegFreeRangeRemove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  char v5; // al
  _QWORD *v6; // rsi
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // r8d
  __int64 p_Process; // rbx
  unsigned int i; // ecx
  int v14; // r8d
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD **v20; // rcx
  _QWORD *v21; // rbx
  _QWORD *result; // rax
  __int64 v23; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  _QWORD *v28; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-20h]
  char v30; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v29 = &v28;
  v28 = &v28;
  if ( !v2 )
  {
    v5 = RtlpHpSegLockAcquire(a1, a2);
    v6 = *(_QWORD **)(a1 + 72);
    v30 = v5;
    v7 = v5;
    if ( v6 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        v8 = (unsigned __int64)&v6[4 * *(unsigned __int8 *)(a1 + 10)];
        v9 = v8 + 32 * (256LL - *(unsigned __int8 *)(a1 + 10));
        if ( v8 < v9 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v8 + 24) & 1) == 0 && *(_WORD *)(v8 + 28) != 0xFFFF )
            {
              RtlpHpSegFreeRangeRemove(a1, v8);
              *(_BYTE *)(v8 + 24) |= 1u;
              v16 = 32LL * ((unsigned int)*(unsigned __int8 *)(v8 + 31) - 1);
              *(_BYTE *)(v16 + v8 + 24) |= 1u;
              v8 = RtlpHpSegPageRangeCoalesce(a1, v8, a2, 1, &v30);
              v17 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v8, 0);
              if ( v17 )
                break;
            }
            v8 += 32LL * *(unsigned __int8 *)(v8 + 31);
            if ( v8 >= v9 )
              goto LABEL_6;
          }
          v18 = *v17;
          v6 = (_QWORD *)v6[1];
          v19 = (_QWORD *)v17[1];
          if ( *(_QWORD **)(*v17 + 8LL) != v17
            || (_QWORD *)*v19 != v17
            || (*v19 = v18, *(_QWORD *)(v18 + 8) = v19, v20 = (_QWORD **)v29, --*(_QWORD *)(a1 + 88), *v20 != &v28) )
          {
            __fastfail(3u);
          }
          v17[1] = v20;
          *v17 = &v28;
          *v20 = v17;
          v29 = v17;
        }
LABEL_6:
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != (_QWORD *)(a1 + 72) );
      v7 = v30;
    }
    if ( (a2 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v7 = v30;
              v27 = ~(unsigned __int16)(-1LL << (v30 + 1));
              v2 = (v27 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v27;
              if ( v2 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
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
            v14 = *(_DWORD *)(p_Process + 88);
            *(_DWORD *)(p_Process + 88) = 0;
            *(_BYTE *)(p_Process + 17) = 0;
            *(_QWORD *)p_Process = 0LL;
            CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
            _enable();
            if ( v14 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, a1 + 64, v14);
            goto LABEL_23;
          }
          p_Process += 96LL;
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        _enable();
LABEL_23:
        v15 = KeGetCurrentThread();
        v2 = v15->SpecialApcDisable++ == -1;
        if ( v2 && ($CEA84C04E3712D858E5667A507841A2A *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
          KiCheckForKernelApcDelivery();
      }
    }
  }
  v21 = v28;
  for ( result = &v28; v21 != &v28; result = &v28 )
  {
    v23 = (__int64)v21;
    v21 = (_QWORD *)*v21;
    RtlpHpSegSegmentFree(a1, v23, 0x7FFFFFFFu, 1);
  }
  return result;
}
