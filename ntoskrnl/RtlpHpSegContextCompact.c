/*
 * XREFs of RtlpHpSegContextCompact @ 0x1402CC380
 * Callers:
 *     RtlpHpHeapCompact @ 0x1402CC2D4 (RtlpHpHeapCompact.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14024DF10 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14024E6D0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14024E804 (RtlpHpSegFreeRangeRemove.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpSegSegmentFree @ 0x140308E54 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegLockAcquire @ 0x14030AB78 (RtlpHpSegLockAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v3; // r15d
  unsigned __int8 v5; // al
  _QWORD *v6; // rsi
  unsigned __int8 v7; // di
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD **v16; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v18; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // edx
  _QWORD *v23; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-20h]
  unsigned __int8 v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v24 = &v23;
  v3 = a2;
  v23 = &v23;
  if ( !v2 )
  {
    v5 = RtlpHpSegLockAcquire(a1, a2);
    v6 = *(_QWORD **)(a1 + 72);
    v25 = v5;
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
              v12 = 32LL * ((unsigned int)*(unsigned __int8 *)(v8 + 31) - 1);
              *(_BYTE *)(v12 + v8 + 24) |= 1u;
              v8 = RtlpHpSegPageRangeCoalesce(a1, v8, v3, 1, &v25);
              v13 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v8, 0);
              if ( v13 )
                break;
            }
            v8 += 32LL * *(unsigned __int8 *)(v8 + 31);
            if ( v8 >= v9 )
              goto LABEL_6;
          }
          v14 = *v13;
          v6 = (_QWORD *)v6[1];
          v15 = (_QWORD *)v13[1];
          if ( *(_QWORD **)(*v13 + 8LL) != v13
            || (_QWORD *)*v15 != v13
            || (*v15 = v14, *(_QWORD *)(v14 + 8) = v15, v16 = (_QWORD **)v24, --*(_QWORD *)(a1 + 88), *v16 != &v23) )
          {
            __fastfail(3u);
          }
          v13[1] = v16;
          *v13 = &v23;
          *v16 = v13;
          v24 = v13;
        }
LABEL_6:
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != (_QWORD *)(a1 + 72) );
      v7 = v25;
    }
    if ( (v3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v7 = v25;
            v22 = ~(unsigned __int16)(-1LL << (v25 + 1));
            v2 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v2 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v7);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        KeAbPostRelease(a1 + 64);
        CurrentThread = KeGetCurrentThread();
        v2 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v2
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
  }
  v10 = v23;
  for ( result = &v23; v10 != &v23; result = &v23 )
  {
    v18 = v10;
    v10 = (_QWORD *)*v10;
    RtlpHpSegSegmentFree(a1, v18, 0x7FFFFFFFLL, 1LL);
  }
  return result;
}
