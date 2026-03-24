/*
 * XREFs of KeCancelTimer @ 0x14025FAA0
 * Callers:
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x140249B00 (ExpCancelTimer.c)
 *     ExpDeleteTimer @ 0x14025FA00 (ExpDeleteTimer.c)
 *     PopFxProcessWork @ 0x1402600A4 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402623B8 (PopFxDisableWorkOrderWatchdog.c)
 *     PfSnCancelTraceTimer @ 0x14026D6FC (PfSnCancelTraceTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x1402D7C78 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x1402D87F0 (CmpArmLazyWriter.c)
 *     EtwpResetFlushTimer @ 0x14031D6A0 (EtwpResetFlushTimer.c)
 *     PopSetWatchdog @ 0x140349578 (PopSetWatchdog.c)
 *     PopSetPowerActionWatchdogState @ 0x140382C90 (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038D670 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140397A4C (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C8054 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403CE41C (IopDisableTimer.c)
 *     CcDeletePartition @ 0x1404EBBC0 (CcDeletePartition.c)
 *     VslpSkStopProfiling @ 0x1404FDD6C (VslpSkStopProfiling.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1405218AC (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x14056EB04 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140576EF8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x14062A394 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406A1F48 (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x1407745EC (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x140779D84 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x14079FAA4 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C66E0 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407D3600 (PopExecutionRequiredSettingCallback.c)
 *     HalpCmcWorkerRoutine @ 0x140864490 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x140876DA0 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1408892D0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1408E6900 (PopCoalescingNotify.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1268 (PopUpdatePdcSystemIdleState.c)
 *     TtmpResetEvaluationTimer @ 0x1408FE014 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x140955EC4 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x1409D5C88 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1409E0BB4 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F24C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x1402C8960 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  __int64 v1; // rdx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v3; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v1;
  }
  LOBYTE(v1) = 1;
  v3 = KiCancelTimer(a1, v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
