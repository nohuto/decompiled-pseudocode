/*
 * XREFs of PopThermalEventTransitionTimerCallback @ 0x1405D05C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopThermalEventTransitionTimerCallback()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
  if ( byte_140C221F8 )
  {
    PopDeepSleepClearDisengageReason(0xAu);
    dword_140C2216C = -1;
    byte_140C221F8 = 0;
  }
  KxReleaseSpinLock(&PopThermalEventTransitionContext);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
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
  }
  __writecr8(v0);
  return result;
}
