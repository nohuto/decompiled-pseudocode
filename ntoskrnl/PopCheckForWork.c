/*
 * XREFs of PopCheckForWork @ 0x1402BCB88
 * Callers:
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x1402BCB00 (PopSetNotificationWork.c)
 *     PoRegisterDeviceForIdleDetection @ 0x140368240 (PoRegisterDeviceForIdleDetection.c)
 *     PopHandleSystemIdleReset @ 0x1403AF718 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B11A8 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14058B3E4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14058B540 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForWork()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  result = (unsigned int)PopWorkerStatus;
  if ( (PopWorkerStatus & PopWorkerPending) != 0 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( PopPolicyLockThread != result )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
      if ( PopWorkerStatus < 0 )
      {
        PopWorkerStatus &= ~0x80000000;
        ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
      }
      result = KxReleaseSpinLock((volatile signed __int64 *)&PopWorkerSpinLock);
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v1 <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v4 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v1);
    }
  }
  return result;
}
