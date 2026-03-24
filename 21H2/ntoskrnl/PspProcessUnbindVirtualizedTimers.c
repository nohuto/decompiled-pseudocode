/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x1402D47BC
 * Callers:
 *     PspExitProcess @ 0x1406CD37C (PspExitProcess.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1402C55BC (ExpTimerResume.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 **v5; // rbx
  __int64 v6; // r12
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rsi
  void *v10; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  result = *(unsigned int *)(a1 + 632);
  if ( (result & 0x10) != 0 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 2440);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
    v5 = (__int64 **)(a1 + 2448);
    v6 = MEMORY[0xFFFFF78000000008];
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 == (__int64 *)v5 )
        break;
      v8 = *v7;
      if ( (__int64 **)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      v9 = v7 - 36;
      *v5 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v5;
      v10 = (void *)*(v7 - 1);
      KxAcquireSpinLock((PKSPIN_LOCK)v7 - 28);
      v9[35] = 0LL;
      if ( (v9[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v9, v6);
      KxReleaseSpinLock((PKSPIN_LOCK)v9 + 8);
      ObfDereferenceObjectWithTag(v10, 0x54567350u);
    }
    KxReleaseSpinLock(v3);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return result;
}
