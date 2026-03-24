/*
 * XREFs of PopGetPolicyWorker @ 0x14034AB20
 * Callers:
 *     PopCheckForIdleness @ 0x140349EF0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14034AEA0 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1403A7104 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14056EA9C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14056EC10 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140577564 (PopHandleSystemIdleReset.c)
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407762D0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140779F20 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
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
