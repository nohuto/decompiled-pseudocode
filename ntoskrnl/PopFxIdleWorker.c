/*
 * XREFs of PopFxIdleWorker @ 0x14030662C
 * Callers:
 *     PopFxComponentWork @ 0x1402F9590 (PopFxComponentWork.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxIdleWorker(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  char v6; // bp
  void (__fastcall *v7)(__int64, _QWORD); // rax
  __int64 result; // rax
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  bool v11; // zf
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8

  v4 = *(_QWORD *)(BugCheckParameter2[104] + 8LL * a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) == 0x80000000 )
  {
    KeResetEvent((PRKEVENT)(v4 + 104));
    *(_DWORD *)(v4 + 136) = 2;
    v6 = 0;
    v7 = (void (__fastcall *)(__int64, _QWORD))BugCheckParameter2[15];
    if ( v7 )
    {
      v7(BugCheckParameter2[24], a2);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
      {
        PopFxAddLogEntry(BugCheckParameter2[6], a2, 13, 0LL);
LABEL_5:
        result = KxReleaseSpinLock((volatile signed __int64 *)(v4 + 128));
        if ( KiIrqlFlags )
        {
          result = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)result <= 0xFu
            && (unsigned __int8)v5 <= 0xFu
            && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v11 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v5);
        if ( v6 )
          return PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
        return result;
      }
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
    }
    v6 = 1;
    goto LABEL_5;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)(v4 + 128));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = ((unsigned int)result & v10[5]) == 0;
      v10[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  __writecr8(v5);
  return result;
}
