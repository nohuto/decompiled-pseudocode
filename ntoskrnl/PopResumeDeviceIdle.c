/*
 * XREFs of PopResumeDeviceIdle @ 0x140585124
 * Callers:
 *     PoClearBroadcast @ 0x140988B8C (PoClearBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopResumeDeviceIdle()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140D17884 = 0;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v0 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v4 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v0);
  return result;
}
