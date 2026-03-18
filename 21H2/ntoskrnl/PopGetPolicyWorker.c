/*
 * XREFs of PopGetPolicyWorker @ 0x1402D6254
 * Callers:
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1402D66F0 (PopCheckForIdleness.c)
 *     PopHandleSystemIdleReset @ 0x140368FC4 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405CFAF4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405CFC50 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407FF440 (PopPolicyWorkerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyWorkerActionPromote @ 0x140808500 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
