/*
 * XREFs of KiSetTimerEx @ 0x14025F5D0
 * Callers:
 *     KeSetCoalescableTimer @ 0x14025F4D0 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x14025F5B0 (KeSetTimer.c)
 *     PfSnStartTraceTimer @ 0x14026D848 (PfSnStartTraceTimer.c)
 *     CcScheduleLazyWriteScan @ 0x1402773DC (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x1402D7D10 (MiInsertUnusedSegment.c)
 *     PfSnTraceTimerRoutine @ 0x14031A120 (PfSnTraceTimerRoutine.c)
 *     PopSetWatchdog @ 0x140349578 (PopSetWatchdog.c)
 *     PopSetPowerActionWatchdogState @ 0x140382C90 (PopSetPowerActionWatchdogState.c)
 *     PfpServiceMainThreadBoost @ 0x14038C848 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140397E0C (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x1403A6560 (PpmEndHighPerfRequest.c)
 *     HalpCmcStartPolling @ 0x1403C53F8 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE16C (HalpTimerSchedulePeriodicQueries.c)
 *     VslpSkFlushBufferCallback @ 0x1404FDD20 (VslpSkFlushBufferCallback.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1405218AC (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x140529ED8 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x14056EBA4 (PopCoalescingSetTimer.c)
 *     PiDrvDbUnloadNode @ 0x14062A278 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x14066D6DC (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406A1F48 (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x1407745EC (CmSetLazyFlushState.c)
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x14078EA40 (PopUserPresentSetWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EB1C (PopQueueBatteryStatusTimeout.c)
 *     CmpCmdInit @ 0x140799498 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C66E0 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407D369C (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407D44F8 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x140872140 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x140872B80 (CmpLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1408892D0 (DbgkpWerDeferredWriteRoutine.c)
 *     VslpSkStartProfiling @ 0x140890A70 (VslpSkStartProfiling.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408A0760 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 *     TtmpResetEvaluationTimer @ 0x1408FE014 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140990FD4 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x1409971A8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140998400 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x14099B274 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7DA8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1409D5C88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DA3B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1409E0BB4 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E1010 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A6AA00 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x14025F910 (KiComputeDueTime.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402C8690 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x1402C8960 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x140523A9C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v10; // rsi
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v13; // r15
  _KPROCESS *Process; // rdx
  char v15; // al
  __int16 v16; // ax
  __int64 v17; // r11
  int v18; // r9d
  _DWORD *SchedulerAssist; // r9
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v7 = a5;
  v21 = 0;
  v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  a5 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer(a1, 0LL);
  v16 = 0;
  if ( (KiVelocityFlags & 0x2000) != 0 )
  {
    if ( CurrentPrcb->NestingLevel
      || ((Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0
        ? (v15 = 0)
        : (v15 = 1),
          !v15) )
    {
      v16 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v16;
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 60) = a3;
  if ( (unsigned int)KiComputeDueTime(a1, a2, a4, &v21)
    && (v18 = v21, *(_DWORD *)(a1 + 4) = v17, (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v7, v18, v17)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(a1, v7, 0LL);
    else
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest((__int64)CurrentPrcb, a1, 0LL);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, a5);
  return v13;
}
