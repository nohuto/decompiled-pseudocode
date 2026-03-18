/*
 * XREFs of KeQueryPerformanceCounter @ 0x1402C3240
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1402050DC (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x14020572C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402058E8 (KiUpdateCpuTargetByRate.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14020C320 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeThawExecution @ 0x14020D430 (KeThawExecution.c)
 *     KeFreezeExecution @ 0x14020D560 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x14020E1F0 (KiFreezeTargetExecution.c)
 *     MiFlushCacheForAttributeChange @ 0x14021ABA4 (MiFlushCacheForAttributeChange.c)
 *     MiScheduleZeroPageThreads @ 0x14021F3EC (MiScheduleZeroPageThreads.c)
 *     RtlGetSystemTimePrecise @ 0x140226E30 (RtlGetSystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x140227B6C (EtwpGetLoggerTimeStamp.c)
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     PopGetIdleTimesCallback @ 0x140251FC0 (PopGetIdleTimesCallback.c)
 *     KiProcessExpiredTimerList @ 0x140252A30 (KiProcessExpiredTimerList.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402561B0 (PpmSnapPerformanceAccumulation.c)
 *     CcCopyReadEx @ 0x140261C40 (CcCopyReadEx.c)
 *     CcFetchDataForRead @ 0x1402621A0 (CcFetchDataForRead.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028E818 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeQuerySchedulingGroupHistory @ 0x140293628 (KeQuerySchedulingGroupHistory.c)
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcFlushCachePreProcess @ 0x14029DD60 (CcFlushCachePreProcess.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2E90 (EtwGetKernelTraceTimestampSilo.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE500 (KeQuerySystemTimePrecise.c)
 *     CcAsyncCopyRead @ 0x1402C1040 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     KiCheckStall @ 0x1402C2660 (KiCheckStall.c)
 *     KiSetClockTickRate @ 0x1402C2860 (KiSetClockTickRate.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x1402C3390 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x1402C3670 (KiUpdateTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KeClockInterruptNotify @ 0x1402C4670 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402C74B0 (KiUpdateRunTime.c)
 *     KiSetNextClockTickDueTime @ 0x1402C84E0 (KiSetNextClockTickDueTime.c)
 *     CcCopyWriteEx @ 0x1402C8CF0 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     PopWriteBsdPoInfo @ 0x14032B100 (PopWriteBsdPoInfo.c)
 *     HalpSetVirtualRtc @ 0x14033B3F0 (HalpSetVirtualRtc.c)
 *     StEtaStart @ 0x1403439B4 (StEtaStart.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x140344138 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x1403444F8 (StLcInitialize.c)
 *     PpmIdleSnapConcurrency @ 0x1403460A4 (PpmIdleSnapConcurrency.c)
 *     PpmPerfApplyProcessorState @ 0x14034EA0C (PpmPerfApplyProcessorState.c)
 *     MiReassessZeroThreads @ 0x140350FFC (MiReassessZeroThreads.c)
 *     PpmPerfApplyDomainState @ 0x140352098 (PpmPerfApplyDomainState.c)
 *     RtlGetMultiTimePrecise @ 0x140364430 (RtlGetMultiTimePrecise.c)
 *     HalpTimerDpcRoutine @ 0x140369D10 (HalpTimerDpcRoutine.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x14037A820 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x14037AE28 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     BgpFwQueryPerformanceCounter @ 0x140384170 (BgpFwQueryPerformanceCounter.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x14038B96C (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     MiStartDpcZeroingRound @ 0x14038BA38 (MiStartDpcZeroingRound.c)
 *     PpmQueryTime @ 0x14038FD28 (PpmQueryTime.c)
 *     PpmInstallFeedbackCounters @ 0x1403914F8 (PpmInstallFeedbackCounters.c)
 *     PpmResetIdlePolicy @ 0x14039F868 (PpmResetIdlePolicy.c)
 *     KiIpiGenericCallTarget @ 0x1403A5B10 (KiIpiGenericCallTarget.c)
 *     EtwpFileModeCompress @ 0x1403A601C (EtwpFileModeCompress.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A69EC (PpmResetPerformanceAccumulation.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A81DC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403AB394 (KiSetupTimeIncrement.c)
 *     HalpTimerFinalizeAuxiliaryCounter @ 0x1403AC050 (HalpTimerFinalizeAuxiliaryCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1403AC0CC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403ACCA0 (HalWheaUpdateCmciPolicy.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403AFC90 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403B0930 (HalpCmciLoadThresholdConfiguration.c)
 *     PpmIdleInstallConcurrency @ 0x1403B2E50 (PpmIdleInstallConcurrency.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3414 (HalpTimerSchedulePeriodicQueries.c)
 *     PpmIdleSelectStates @ 0x1403B6E10 (PpmIdleSelectStates.c)
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 *     KiUpdateSystemTime @ 0x1403C0E98 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403CF158 (KiUpdateTimeAssist.c)
 *     KiLogClockIncrementUpdate @ 0x1403CFB78 (KiLogClockIncrementUpdate.c)
 *     HalpScanForProfilingCorruption @ 0x14045B264 (HalpScanForProfilingCorruption.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140464600 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpGetDurationSince @ 0x14046732E (EtwpGetDurationSince.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404FE340 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404FE94C (HalpTimerRestorePerformanceCounter.c)
 *     HalpCmciHandler @ 0x14050584C (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050740C (HalpCollectProfileCorruptionStatus.c)
 *     HalpTscFallback @ 0x14050A330 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x14050B590 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050C760 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounter @ 0x14051CC90 (EmonAllocateCounter.c)
 *     EmonOverflowHandler @ 0x14051D710 (EmonOverflowHandler.c)
 *     Amd64AllocateCounter @ 0x140528BA8 (Amd64AllocateCounter.c)
 *     Amd64OverflowHandler @ 0x140529B70 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1405345A0 (XmRdtscOp.c)
 *     CcWriteBehindAsync @ 0x14053A530 (CcWriteBehindAsync.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140559DDC (IopLiveDumpGetMillisecondCounter.c)
 *     KeRebaselineInterruptTime @ 0x14056AF4C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14056AF7C (KeRebaselineSystemTime.c)
 *     KeSwitchFrozenProcessor @ 0x140576C30 (KeSwitchFrozenProcessor.c)
 *     KiTimerExpiration @ 0x14057C864 (KiTimerExpiration.c)
 *     PoInitiateProcessorWake @ 0x140583DB0 (PoInitiateProcessorWake.c)
 *     PpmIdleRemoveConcurrency @ 0x140585440 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405855EC (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x1405856E0 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x1405860E0 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C364 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140598670 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x14059878C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405997DC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PdcPoCurrentPdcPhase @ 0x140599840 (PdcPoCurrentPdcPhase.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405C0410 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C42B4 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C5488 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C9050 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x1405CA9E8 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x1405CAB58 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x1405D32F0 (CarInitLogging.c)
 *     WmiGetClock @ 0x1405FF7B0 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x140602554 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140672F78 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673134 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpKcsRequestAndReceive @ 0x140678450 (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x140678730 (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpTimeAfter @ 0x140678828 (IpmiLibpTimeAfter.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x1407423E0 (NtQueryPerformanceCounter.c)
 *     PspNotifyThreadCreation @ 0x14076FD10 (PspNotifyThreadCreation.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     ExpAllocateUuids @ 0x1407E25B8 (ExpAllocateUuids.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     EtwpAddLogHeader @ 0x1407F7BE4 (EtwpAddLogHeader.c)
 *     Phase1Initialization @ 0x140822CA0 (Phase1Initialization.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140825F04 (MiComputeCacheAttributeSpeeds.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     MiNodeZeroConductor @ 0x140831170 (MiNodeZeroConductor.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140866210 (RtlpCapChkTelemetryRunOnce.c)
 *     IoCaptureLiveDump @ 0x14094BA98 (IoCaptureLiveDump.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A4E4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A55C (PopResumeServices.c)
 *     CmpRecordShutdownStopTime @ 0x140A1172C (CmpRecordShutdownStopTime.c)
 *     HalpCmciInit @ 0x140A8AF6C (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x140A97960 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140A9C974 (PnprGetMillisecondCounter.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9F000 (KiCalibrateTimeAdjustment.c)
 *     PopDecompressHiberBlocks @ 0x140AA23F4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckForDebugBreak @ 0x140AA2F14 (PopHiberCheckForDebugBreak.c)
 *     PopTransitionToSleep @ 0x140AA5400 (PopTransitionToSleep.c)
 *     PopWriteImageHeader @ 0x140AA5D58 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA795C (PopDiagComputeEarlyHiberStats.c)
 *     PopHandleNextState @ 0x140AA81DC (PopHandleNextState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AAA724 (PopSstDiagInitializeResumeTimer.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140AAA810 (PopSstDiagQueryResumeTimestamp.c)
 *     KdpSendWaitContinue @ 0x140AB17C8 (KdpSendWaitContinue.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     VfFillAllocatedMemory @ 0x140ADB00C (VfFillAllocatedMemory.c)
 *     CcInitializeTelemetry @ 0x140B35E14 (CcInitializeTelemetry.c)
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     KiComputeDispatchInterruptCost @ 0x140B54AFC (KiComputeDispatchInterruptCost.c)
 *     ViInitSystemPhase0 @ 0x140B6A9C4 (ViInitSystemPhase0.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B74FDC (EtwpInitializeBootTimeStamps.c)
 *     EtwpFixBootSystemTime @ 0x140B984E0 (EtwpFixBootSystemTime.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403C3EC4 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  ULONG_PTR v2; // rsi
  LONGLONG v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  signed __int64 v7; // rdx
  LARGE_INTEGER result; // rax
  __int64 v9; // rcx
  __int64 InternalData; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  signed __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // r11
  signed __int64 v17; // rax
  int v18; // r10d
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  signed __int64 v26; // rax
  int v27; // r10d
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  LONGLONG v33; // r8
  signed __int32 v34[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v3 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v9 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v9 = *(_QWORD *)(HalpPerformanceCounter + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v9)
                        * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v11 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(InternalData);
        v12 = *(_QWORD *)(v2 + 208);
        v13 = v11;
      }
      else
      {
        do
        {
          v12 = *(_QWORD *)(v2 + 208);
          do
          {
            v14 = *(_QWORD *)(v2 + 200);
            v15 = HalpTimerGetInternalData(v2);
            v16 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v15);
            _InterlockedOr(v34, 0);
            v17 = *(_QWORD *)(v2 + 200);
          }
          while ( v14 != v17 );
        }
        while ( v12 != *(_QWORD *)(v2 + 208) );
        v18 = *(_DWORD *)(v2 + 220);
        v19 = v14 ^ v16;
        if ( _bittest64((const __int64 *)&v19, (unsigned __int8)(v18 - 1)) )
        {
          v20 = -1LL;
          if ( v18 != 64 )
            v20 = (1LL << v18) - 1;
          v21 = v14 & v20;
          v13 = v16 | v14 ^ v21;
          if ( v16 < v21 )
            v13 += 1LL << v18;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v13, v17);
        }
        else
        {
          if ( v18 == 64 )
            v22 = -1LL;
          else
            v22 = (1LL << v18) - 1;
          v13 = v16 | v14 & ~v22;
        }
      }
      result.QuadPart = HalpTimerScaleCounter(v12 + v13, *(_QWORD *)(v2 + 192), 10000000LL);
    }
  }
  else
  {
    v3 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v4 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v5 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v4);
      v6 = *(_QWORD *)(v2 + 208);
      v7 = v5;
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 208);
        do
        {
          v23 = *(_QWORD *)(v2 + 200);
          v24 = HalpTimerGetInternalData(v2);
          v25 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v24);
          _InterlockedOr(v34, 0);
          v26 = *(_QWORD *)(v2 + 200);
        }
        while ( v23 != v26 );
      }
      while ( v6 != *(_QWORD *)(v2 + 208) );
      v27 = *(_DWORD *)(v2 + 220);
      v28 = v23 ^ v25;
      if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
      {
        v29 = -1LL;
        if ( v27 != 64 )
          v29 = (1LL << v27) - 1;
        v30 = v23 & v29;
        v7 = v25 | v23 ^ v30;
        if ( v25 < v30 )
          v7 += 1LL << v27;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v7, v26);
      }
      else
      {
        if ( v27 == 64 )
          v31 = -1LL;
        else
          v31 = (1LL << v27) - 1;
        v7 = v25 | v23 & ~v31;
      }
    }
    result.QuadPart = v6 + v7;
  }
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v3;
  }
  else
  {
    v32 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v32 = 10000000LL;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerScaleCounter)(
                        (LARGE_INTEGER)result.QuadPart,
                        v3,
                        v32);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v33;
  }
  return result;
}
