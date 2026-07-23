/*
 * XREFs of PopGetPolicyWorker @ 0x14026FD50
 * Callers:
 *     PopCheckForIdleness @ 0x14026F120 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1402700D0 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1403A7954 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14056ED9C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14056EF10 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140577864 (PopHandleSystemIdleReset.c)
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140775A30 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14077A1E0 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  v3 = v2;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
