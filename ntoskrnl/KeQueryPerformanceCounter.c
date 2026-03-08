/*
 * XREFs of KeQueryPerformanceCounter @ 0x14022B950
 * Callers:
 *     RtlGetSystemTimePrecise @ 0x140205310 (RtlGetSystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x140205F68 (EtwpGetLoggerTimeStamp.c)
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     MiFlushCacheForAttributeChange @ 0x140214754 (MiFlushCacheForAttributeChange.c)
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     CcCopyWriteEx @ 0x14021C0A0 (CcCopyWriteEx.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcCopyReadEx @ 0x14021E070 (CcCopyReadEx.c)
 *     CcFetchDataForRead @ 0x140221EE0 (CcFetchDataForRead.c)
 *     KiCheckStall @ 0x14022AD70 (KiCheckStall.c)
 *     KiSetClockTickRate @ 0x14022AF70 (KiSetClockTickRate.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x14022BAA0 (KiUpdateProcessConcurrencyCounts.c)
 *     KiUpdateTime @ 0x14022BD80 (KiUpdateTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140236080 (PopGetIdleTimesCallback.c)
 *     KeQuerySystemTimePrecise @ 0x1402384E0 (KeQuerySystemTimePrecise.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1402947D0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 *     PopWriteBsdPoInfo @ 0x1402B9F3C (PopWriteBsdPoInfo.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BBC88 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     HalpSetVirtualRtc @ 0x1402D13F0 (HalpSetVirtualRtc.c)
 *     PpmIdleSnapConcurrency @ 0x1402DAEF8 (PpmIdleSnapConcurrency.c)
 *     MiReassessZeroThreads @ 0x1402E477C (MiReassessZeroThreads.c)
 *     PpmPerfApplyDomainState @ 0x1402E56F8 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 *     KeInsertSchedulingGroup @ 0x1402F161C (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x1402F1C6C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402F1E28 (KiUpdateCpuTargetByRate.c)
 *     RtlGetMultiTimePrecise @ 0x1402F9390 (RtlGetMultiTimePrecise.c)
 *     HalpTimerDpcRoutine @ 0x1402FEBF0 (HalpTimerDpcRoutine.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x140358B58 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x140358F18 (StLcInitialize.c)
 *     StEtaStart @ 0x14035A354 (StEtaStart.c)
 *     KeQuerySchedulingGroupHistory @ 0x14035C6F8 (KeQuerySchedulingGroupHistory.c)
 *     MiScheduleZeroPageThreads @ 0x14036072C (MiScheduleZeroPageThreads.c)
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     KeThawExecution @ 0x14036B200 (KeThawExecution.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140376E70 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140377478 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     BgpFwQueryPerformanceCounter @ 0x140381520 (BgpFwQueryPerformanceCounter.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140389E3C (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     MiStartDpcZeroingRound @ 0x140389F08 (MiStartDpcZeroingRound.c)
 *     PpmQueryTime @ 0x14038D868 (PpmQueryTime.c)
 *     PpmInstallFeedbackCounters @ 0x14038F058 (PpmInstallFeedbackCounters.c)
 *     PpmResetIdlePolicy @ 0x14039AFC8 (PpmResetIdlePolicy.c)
 *     KiIpiGenericCallTarget @ 0x1403A0D70 (KiIpiGenericCallTarget.c)
 *     EtwpFileModeCompress @ 0x1403A127C (EtwpFileModeCompress.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A1C7C (PpmResetPerformanceAccumulation.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A340C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403A5E18 (KiSetupTimeIncrement.c)
 *     HalpTimerFinalizeAuxiliaryCounter @ 0x1403A6BC0 (HalpTimerFinalizeAuxiliaryCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1403A6C3C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403A76C0 (HalWheaUpdateCmciPolicy.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1403AAF40 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403ABBE0 (HalpCmciLoadThresholdConfiguration.c)
 *     PpmIdleInstallConcurrency @ 0x1403AE090 (PpmIdleInstallConcurrency.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403AE654 (HalpTimerSchedulePeriodicQueries.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     KiUpdateSystemTime @ 0x1403BB568 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403C9BA8 (KiUpdateTimeAssist.c)
 *     KiLogClockIncrementUpdate @ 0x1403CA5C8 (KiLogClockIncrementUpdate.c)
 *     HalpScanForProfilingCorruption @ 0x1404532C4 (HalpScanForProfilingCorruption.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14045C620 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     EtwpGetDurationSince @ 0x14045F42A (EtwpGetDurationSince.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404FC260 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404FC86C (HalpTimerRestorePerformanceCounter.c)
 *     HalpCmciHandler @ 0x14050376C (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x14050532C (HalpCollectProfileCorruptionStatus.c)
 *     HalpTscFallback @ 0x140508250 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x1405094B0 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050A680 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounter @ 0x14051A760 (EmonAllocateCounter.c)
 *     EmonOverflowHandler @ 0x14051B1E0 (EmonOverflowHandler.c)
 *     Amd64AllocateCounter @ 0x140526678 (Amd64AllocateCounter.c)
 *     Amd64OverflowHandler @ 0x140527640 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1405320D0 (XmRdtscOp.c)
 *     CcWriteBehindAsync @ 0x140538060 (CcWriteBehindAsync.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     KeRebaselineInterruptTime @ 0x140568AAC (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140568ADC (KeRebaselineSystemTime.c)
 *     KeSwitchFrozenProcessor @ 0x140574610 (KeSwitchFrozenProcessor.c)
 *     KiTimerExpiration @ 0x14057A354 (KiTimerExpiration.c)
 *     PoInitiateProcessorWake @ 0x140581880 (PoInitiateProcessorWake.c)
 *     PpmIdleRemoveConcurrency @ 0x140582F10 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405830BC (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x1405831B0 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140583BB0 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140589E34 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140596150 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x14059626C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405972BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PdcPoCurrentPdcPhase @ 0x140597320 (PdcPoCurrentPdcPhase.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405BDF60 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C1E04 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C6BA0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x1405C8538 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x1405C86A8 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x1405D0E40 (CarInitLogging.c)
 *     WmiGetClock @ 0x1405FD310 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x1406000F4 (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140670928 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpKcsRequestAndReceive @ 0x140675E00 (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406760E0 (IpmiLibpKcsSpinRegister.c)
 *     IpmiLibpTimeAfter @ 0x1406761D8 (IpmiLibpTimeAfter.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 *     NtQueryPerformanceCounter @ 0x140769D00 (NtQueryPerformanceCounter.c)
 *     EtwpAddLogHeader @ 0x140772F04 (EtwpAddLogHeader.c)
 *     ExpAllocateUuids @ 0x140792ED8 (ExpAllocateUuids.c)
 *     PspNotifyThreadCreation @ 0x1407ED550 (PspNotifyThreadCreation.c)
 *     Phase1Initialization @ 0x14080E810 (Phase1Initialization.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140811138 (MiComputeCacheAttributeSpeeds.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     MiNodeZeroConductor @ 0x1408314C0 (MiNodeZeroConductor.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140861A30 (RtlpCapChkTelemetryRunOnce.c)
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140987434 (PopResumeApps.c)
 *     PopResumeServices @ 0x1409874AC (PopResumeServices.c)
 *     CmpRecordShutdownStopTime @ 0x140A0EA18 (CmpRecordShutdownStopTime.c)
 *     HalpCmciInit @ 0x140A8795C (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x140A94820 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140A99834 (PnprGetMillisecondCounter.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 *     PopDecompressHiberBlocks @ 0x140A9F1C4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckForDebugBreak @ 0x140A9FCE4 (PopHiberCheckForDebugBreak.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 *     PopWriteImageHeader @ 0x140AA2B28 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA472C (PopDiagComputeEarlyHiberStats.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AA74F4 (PopSstDiagInitializeResumeTimer.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140AA75E0 (PopSstDiagQueryResumeTimestamp.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     VfFillAllocatedMemory @ 0x140AD700C (VfFillAllocatedMemory.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     KiComputeDispatchInterruptCost @ 0x140B41CC8 (KiComputeDispatchInterruptCost.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 *     KeInitializeClock @ 0x140B67BE8 (KeInitializeClock.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B70ED8 (EtwpInitializeBootTimeStamps.c)
 *     EtwpFixBootSystemTime @ 0x140B942D0 (EtwpFixBootSystemTime.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
