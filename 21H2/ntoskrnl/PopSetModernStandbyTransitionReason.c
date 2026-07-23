/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1405769B4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rbp
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  LARGE_INTEGER v10; // [rsp+40h] [rbp+18h] BYREF

  v10.QuadPart = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v10);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140C11750 != a1 )
  {
    byte_140C11750 = a1;
    if ( a1 )
    {
      dword_140C11754 = a2;
    }
    else
    {
      dword_140C11758 = a2;
      qword_140C11760 = InterruptTimePrecise.QuadPart;
    }
  }
  KxReleaseSpinLock(&PopModernStandbyTransitionInfo);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
