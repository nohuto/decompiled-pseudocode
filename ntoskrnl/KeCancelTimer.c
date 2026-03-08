/*
 * XREFs of KeCancelTimer @ 0x140250B60
 * Callers:
 *     EtwpResetFlushTimer @ 0x14020540C (EtwpResetFlushTimer.c)
 *     PopCompleteIrpWatchdog @ 0x1402BB9F4 (PopCompleteIrpWatchdog.c)
 *     PopSetWatchdog @ 0x1402BDFEC (PopSetWatchdog.c)
 *     ExpCancelTimer @ 0x1402CE3BC (ExpCancelTimer.c)
 *     ExpDeleteTimer @ 0x1402F5CD0 (ExpDeleteTimer.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1402FFBF4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140305680 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     CmpArmLazyWriter @ 0x140349EA4 (CmpArmLazyWriter.c)
 *     MiUnlinkUnusedControlArea @ 0x14034C6C4 (MiUnlinkUnusedControlArea.c)
 *     PfSnCancelTraceTimer @ 0x14035B3D0 (PfSnCancelTraceTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x140552C34 (IopDisableTimer.c)
 *     PopDisableIrpWatchdog @ 0x140580BBC (PopDisableIrpWatchdog.c)
 *     PopCoalescingSetActiveState @ 0x14058B44C (PopCoalescingSetActiveState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058D058 (PopSetPowerActionWatchdogState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140595900 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIgnoreBatteryStatusChange @ 0x14059681C (PopIgnoreBatteryStatusChange.c)
 *     DifKeCancelTimerWrapper @ 0x1405E07C0 (DifKeCancelTimerWrapper.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x140797DFC (PfSnPowerBoost.c)
 *     HalpCmcWorkerRoutine @ 0x14080C020 (HalpCmcWorkerRoutine.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x14084C650 (PpmWmiDispatch.c)
 *     PiDrvDbLoadNode @ 0x1408693C4 (PiDrvDbLoadNode.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140938A80 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x140983FE0 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x1409A8198 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409A8964 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F5234 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1409FDA98 (ExpPartitionDestroy.c)
 *     CmSetLazyFlushState @ 0x140A0EC64 (CmSetLazyFlushState.c)
 *     CmpShutdownWorkers @ 0x140A0EF30 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140ACED48 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140ADB034 (VfWdCheckForSettingsChange.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEA110 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140AEC610 (AnFwpDisableProgressTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEC6DC (AnFwDisableBackgroundUpdateTimer.c)
 * Callees:
 *     KiCancelTimer @ 0x140251440 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  __int64 v1; // rdx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v3; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // r10
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v6) = 4;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    v1 = (unsigned int)v6 | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  LOBYTE(v1) = 1;
  v3 = KiCancelTimer(a1, v1);
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
