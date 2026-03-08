/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1402BBAAC
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x14020494C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopDequeueQuerySetIrp @ 0x1402BB70C (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405841D0 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140588EBC (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x14058D024 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058D598 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x14058D650 (PopThermalEventTransitionTimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407FFD30 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140980530 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140991184 (PopEnforceDeepSleep.c)
 *     PopIdleAoAcDozeToS4 @ 0x140998D70 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402BBB3C (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BBC88 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x14057A814 (KeSetForceIdle.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // edx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v4 = PopDeepSleepDisengageReasonMask;
  v5 = v3;
  PopDeepSleepDisengageReasonMask &= ~v2;
  if ( v4 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint(a1);
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 4) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}
