/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1402BBB98
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402048C0 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopQueueQuerySetIrp @ 0x1402BAFA4 (PopQueueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405841D0 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140588EBC (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x14058D024 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14058D4A8 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14059BC20 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140980630 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopEnforceDeepSleep @ 0x140991184 (PopEnforceDeepSleep.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1402BBC2C (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BBC88 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeClearForceIdle @ 0x14057A720 (KeClearForceIdle.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v4 = PopDeepSleepDisengageReasonMask;
  v5 = v3;
  PopDeepSleepDisengageReasonMask |= v2;
  if ( v4 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint(a1);
    LOBYTE(v6) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v6);
    if ( !v4 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
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
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}
