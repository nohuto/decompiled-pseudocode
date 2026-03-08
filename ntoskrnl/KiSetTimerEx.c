/*
 * XREFs of KiSetTimerEx @ 0x140250670
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140242B4C (CcScheduleLazyWriteScanVolume.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x140250550 (KeSetTimer.c)
 *     PpmEndHighPerfRequest @ 0x1402B884C (PpmEndHighPerfRequest.c)
 *     PopEnableIrpWatchdog @ 0x1402BB290 (PopEnableIrpWatchdog.c)
 *     PopSetWatchdog @ 0x1402BDFEC (PopSetWatchdog.c)
 *     PfSnTraceTimerRoutine @ 0x1402EEED0 (PfSnTraceTimerRoutine.c)
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 *     PfSnStartTraceTimer @ 0x14035B168 (PfSnStartTraceTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403AE654 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpCmcStartPolling @ 0x1403AF5E8 (HalpCmcStartPolling.c)
 *     CcNotifyWriteBehindVolume @ 0x1403BBE2C (CcNotifyWriteBehindVolume.c)
 *     CcNotifyWriteBehindInternal @ 0x14053467C (CcNotifyWriteBehindInternal.c)
 *     PfpServiceMainThreadBoost @ 0x140580930 (PfpServiceMainThreadBoost.c)
 *     PopCoalescingSetTimer @ 0x14058B4E0 (PopCoalescingSetTimer.c)
 *     PopUserPresentSetWorker @ 0x14058BD10 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x14058D058 (PopSetPowerActionWatchdogState.c)
 *     DifKeSetTimerExWrapper @ 0x1405E3690 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x1405E37D0 (DifKeSetTimerWrapper.c)
 *     MiProcessDeleteOnClose @ 0x1406229CC (MiProcessDeleteOnClose.c)
 *     CmpDelayFreeCmRm @ 0x14074C598 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x140797DFC (PfSnPowerBoost.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140818B6C (PopCancelIgnoreBatteryStatusChange.c)
 *     CmpCmdInit @ 0x140819024 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x14084C650 (PpmWmiDispatch.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14085F238 (PfSnQueueEnablePrefetcherTimer.c)
 *     PiDrvDbUnloadNode @ 0x140869314 (PiDrvDbUnloadNode.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140938A80 (DbgkpWerDeferredWriteRoutine.c)
 *     PopSetSystemAwayMode @ 0x140987890 (PopSetSystemAwayMode.c)
 *     TtmiResetInactivityTimer @ 0x1409A8198 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409A8964 (TtmpResetEvaluationTimer.c)
 *     CmSetLazyFlushState @ 0x140A0EC64 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x140A19420 (CmpLazyCommitWorker.c)
 *     PfSnBeginBootPhase @ 0x140A859AC (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A8EB74 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A9D4FC (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 *     KdpTimeSlipWork @ 0x140AAD010 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140ACED48 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD2084 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x140ADB034 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140ADB490 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140B61AEC (PfSnInitializePrefetcher.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x140250500 (PsTimerResolutionActive.c)
 *     KiInsertTimerTable @ 0x1402511D0 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140251440 (KiCancelTimer.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiTraceSetTimer @ 0x14045A480 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v13; // al
  __int64 v14; // r8
  unsigned __int8 v15; // r15
  __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v21; // r9
  volatile signed __int32 v22; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+A0h] [rbp+28h]

  v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v21) = 4;
    else
      v21 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v21;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer(a1, 0LL);
  v14 = 0LL;
  v15 = v13;
  v16 = 1;
  if ( KiGlobalTimerResolutionRequests
    || !CurrentPrcb->NestingLevel && PsTimerResolutionActive((__int64)KeGetCurrentThread()->ApcState.Process) )
  {
    v16 = v14;
  }
  *(_WORD *)(a1 + 58) = v16;
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 60) = a3;
  v22 = *(_DWORD *)a1;
  BYTE1(v22) = a4;
  if ( a2 >= 0 )
  {
    BYTE1(v22) = a4 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v22;
      *(_QWORD *)(a1 + 24) = v14;
LABEL_20:
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
      goto LABEL_10;
    }
    a4 |= 1u;
  }
  v17 = v14;
  if ( (a4 & 0xFC) != 0 )
    v17 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v22) |= 0x40u;
  v18 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v22) = (unsigned __int64)(v17 + v18) >> 18;
  *(_DWORD *)a1 = v22;
  *(_DWORD *)(a1 + 4) = v14;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, a5, BYTE2(v22), v14) )
    goto LABEL_20;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_10:
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v23);
  return v15;
}
