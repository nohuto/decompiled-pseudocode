/*
 * XREFs of PopGetPolicyWorker @ 0x1402BCB34
 * Callers:
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1402BCB00 (PopSetNotificationWork.c)
 *     PopHandleSystemIdleReset @ 0x1403AF718 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B11A8 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14058B3E4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14058B540 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140987130 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140987320 (PopPolicyWorkerActionPromote.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  v3 = v2;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopWorkerSpinLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
