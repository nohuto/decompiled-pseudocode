/*
 * XREFs of KeQueryPerformanceCounter @ 0x14022BCB0
 * Callers:
 *     PpmIdlePrepare @ 0x140224F50 (PpmIdlePrepare.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     PpmIdleSnapConcurrency @ 0x14022A8E0 (PpmIdleSnapConcurrency.c)
 *     EtwpGetLoggerTimeStamp @ 0x14022C448 (EtwpGetLoggerTimeStamp.c)
 *     KiExecuteAllDpcs @ 0x140246C20 (KiExecuteAllDpcs.c)
 *     KeQuerySchedulingGroupHistory @ 0x140253284 (KeQuerySchedulingGroupHistory.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0E80 (EtwpReserveTraceBuffer.c)
 *     KeInsertSchedulingGroup @ 0x1402DB0E8 (KeInsertSchedulingGroup.c)
 *     KiUpdateCpuTargetByWeight @ 0x1402DDDA8 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402DE080 (KiUpdateCpuTargetByRate.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1402E09E0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     KiSetClockTickRate @ 0x1402F0A50 (KiSetClockTickRate.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     PpmPerfApplyDomainState @ 0x1402F8940 (PpmPerfApplyDomainState.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1403058EC (EtwGetKernelTraceTimestampSilo.c)
 *     HalpSetVirtualRtc @ 0x14030D8CC (HalpSetVirtualRtc.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140312C30 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     MiReassessZeroThreads @ 0x140314424 (MiReassessZeroThreads.c)
 *     HalpTimerDpcRoutine @ 0x14032A8C0 (HalpTimerDpcRoutine.c)
 *     MiScheduleZeroPageThreads @ 0x14033BE94 (MiScheduleZeroPageThreads.c)
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 *     PopGetIdleTimesCallback @ 0x140344EE0 (PopGetIdleTimesCallback.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14034A670 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x140351EF8 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x140352A70 (StLcInitialize.c)
 *     StEtaStart @ 0x1403537DC (StEtaStart.c)
 *     MiAllocatePagesForMdl @ 0x140354954 (MiAllocatePagesForMdl.c)
 *     KiUpdateTimeAssist @ 0x14035EFD8 (KiUpdateTimeAssist.c)
 *     RtlGetMultiTimePrecise @ 0x14035F9E0 (RtlGetMultiTimePrecise.c)
 *     KeRebaselineInterruptTime @ 0x140383FF8 (KeRebaselineInterruptTime.c)
 *     HalpQueryVirtualRtc @ 0x1403840FC (HalpQueryVirtualRtc.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403865D8 (HalpTimerRestorePerformanceCounter.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140387630 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiTimerExpiration @ 0x140388BF0 (KiTimerExpiration.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D0BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     KeRebaselineSystemTime @ 0x14038D698 (KeRebaselineSystemTime.c)
 *     PpmIdleSelectStates @ 0x140394E80 (PpmIdleSelectStates.c)
 *     KiUpdateSystemTime @ 0x1403977A8 (KiUpdateSystemTime.c)
 *     PpmPerfApplyProcessorState @ 0x14039843C (PpmPerfApplyProcessorState.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039B780 (BgpFwQueryPerformanceCounter.c)
 *     KiIpiGenericCallTarget @ 0x1403A49A0 (KiIpiGenericCallTarget.c)
 *     HalpTimerInitSystem @ 0x1403AF740 (HalpTimerInitSystem.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403B0D68 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403B0E4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B40F0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     KiSetupTimeIncrement @ 0x1403B42E4 (KiSetupTimeIncrement.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403BA420 (HalWheaUpdateCmciPolicy.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0ED8 (PpmInstallFeedbackCounters.c)
 *     PpmResetPerformanceAccumulation @ 0x1403C2014 (PpmResetPerformanceAccumulation.c)
 *     PpmQueryTime @ 0x1403C2060 (PpmQueryTime.c)
 *     PpmResetIdlePolicy @ 0x1403C43F8 (PpmResetIdlePolicy.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403C5218 (HalpCmciLoadThresholdConfiguration.c)
 *     MiZeroBootLargePages @ 0x1403CA524 (MiZeroBootLargePages.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE16C (HalpTimerSchedulePeriodicQueries.c)
 *     PopWriteBsdPoInfo @ 0x1403F7748 (PopWriteBsdPoInfo.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B63EC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B64A0 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpCmciHandler @ 0x1404BC9F8 (HalpCmciHandler.c)
 *     HalpTscFallback @ 0x1404C1550 (HalpTscFallback.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3500 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonOverflowHandler @ 0x1404D37E0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DD9F0 (Amd64OverflowHandler.c)
 *     XmRdtscOp @ 0x1404E6C00 (XmRdtscOp.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508908 (IopLiveDumpGetMillisecondCounter.c)
 *     KeFreezeExecution @ 0x14051D630 (KeFreezeExecution.c)
 *     KeSwitchFrozenProcessor @ 0x14051DA40 (KeSwitchFrozenProcessor.c)
 *     KeThawExecution @ 0x14051DB20 (KeThawExecution.c)
 *     KiCheckStall @ 0x14051DC60 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x14051DDA0 (KiFreezeTargetExecution.c)
 *     PoInitiateProcessorWake @ 0x140565450 (PoInitiateProcessorWake.c)
 *     PpmIdleInstallConcurrency @ 0x140566960 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x140566B90 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140566D40 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleTransitionStall @ 0x140566ED8 (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x140567B20 (PpmTraceExitLatency.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056D4D8 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x140576300 (PdcPoCurrentPdcPhase.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577750 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x14057786C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14059A794 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059ACD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14059CA10 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     StEtaIoStart @ 0x14059D320 (StEtaIoStart.c)
 *     StLcBucketsCopy @ 0x14059D490 (StLcBucketsCopy.c)
 *     WmiGetClock @ 0x1405A66A0 (WmiGetClock.c)
 *     EtwpGetDurationSince @ 0x1405A89B4 (EtwpGetDurationSince.c)
 *     EtwpCompressPendingBuffers @ 0x1405AC9DC (EtwpCompressPendingBuffers.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C5480 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5644 (BgpFwDisplayBugCheckScreen.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x140677310 (NtQueryPerformanceCounter.c)
 *     ExpAllocateUuids @ 0x14069CDD4 (ExpAllocateUuids.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     EtwpAddLogHeader @ 0x140713C88 (EtwpAddLogHeader.c)
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140776F24 (PopResumeApps.c)
 *     PopResumeServices @ 0x140776F9C (PopResumeServices.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     Phase1Initialization @ 0x1407B3EE0 (Phase1Initialization.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     CmpRecordShutdownStopTime @ 0x14086BFE0 (CmpRecordShutdownStopTime.c)
 *     IoCaptureLiveDump @ 0x1408962E8 (IoCaptureLiveDump.c)
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14091B690 (RtlpCapChkTelemetryRunOnce.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopHiberCheckForDebugBreak @ 0x140994FFC (PopHiberCheckForDebugBreak.c)
 *     PopDecompressHiberBlocks @ 0x140995054 (PopDecompressHiberBlocks.c)
 *     KiCalibrateTimeAdjustment @ 0x140995370 (KiCalibrateTimeAdjustment.c)
 *     HalpCmciInit @ 0x1409A0EB4 (HalpCmciInit.c)
 *     HalpDpReplaceControl @ 0x1409A88C0 (HalpDpReplaceControl.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1409AD120 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     PnprGetMillisecondCounter @ 0x1409AD8DC (PnprGetMillisecondCounter.c)
 *     PopWriteImageHeader @ 0x1409B1E60 (PopWriteImageHeader.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x1409E0004 (VfFillAllocatedMemory.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140395BF0 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  LARGE_INTEGER result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  signed __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  LONGLONG v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // r10
  signed __int64 v18; // rdx
  __int64 InternalData; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  signed __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  signed __int64 v26; // rax
  int v27; // r9d
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  signed __int32 v33[10]; // [rsp+0h] [rbp-28h] BYREF
  LONGLONG v34; // [rsp+38h] [rbp+10h]

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v34 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v3 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v3 = *(_QWORD *)(HalpPerformanceCounter + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v3)
                        * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v20 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(InternalData);
        v21 = *(_QWORD *)(v2 + 208);
        v22 = v20;
      }
      else
      {
        do
        {
          v21 = *(_QWORD *)(v2 + 208);
          do
          {
            v23 = *(_QWORD *)(v2 + 200);
            v24 = HalpTimerGetInternalData(v2);
            v25 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v24);
            _InterlockedOr(v33, 0);
            v26 = *(_QWORD *)(v2 + 200);
          }
          while ( v23 != v26 );
        }
        while ( v21 != *(_QWORD *)(v2 + 208) );
        v27 = *(_DWORD *)(v2 + 220);
        v28 = v23 ^ v25;
        if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
        {
          v29 = 1LL;
          if ( v27 == 64 )
            v30 = -1LL;
          else
            v30 = (1LL << v27) - 1;
          if ( v27 != 64 )
            v29 = 1LL << v27;
          v31 = v23 & v30;
          v22 = v25 | v23 ^ v31;
          if ( v25 < v31 )
            v22 += v29;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v22, v26);
        }
        else
        {
          if ( v27 == 64 )
            v32 = -1LL;
          else
            v32 = (1LL << v27) - 1;
          v22 = v25 | v23 & ~v32;
        }
      }
      result.QuadPart = HalpTimerScaleCounter(v21 + v22, *(_QWORD *)(v2 + 192), 10000000LL);
    }
  }
  else
  {
    v34 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v5 = HalpTimerGetInternalData(HalpPerformanceCounter);
      result.QuadPart = *(_QWORD *)(v2 + 208) + (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v5);
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 208);
        do
        {
          v7 = *(_QWORD *)(v2 + 200);
          v8 = HalpTimerGetInternalData(v2);
          v9 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v8);
          _InterlockedOr(v33, 0);
          v10 = *(_QWORD *)(v2 + 200);
        }
        while ( v7 != v10 );
      }
      while ( v6 != *(_QWORD *)(v2 + 208) );
      v11 = *(_DWORD *)(v2 + 220);
      v12 = v7 ^ v9;
      if ( _bittest64((const __int64 *)&v12, (unsigned __int8)(v11 - 1)) )
      {
        if ( v11 == 64 )
        {
          v16 = -1LL;
          v15 = 1LL;
        }
        else
        {
          v15 = 1LL << v11;
          v16 = v15 - 1;
        }
        v17 = v7 & v16;
        v18 = v9 | v7 ^ v17;
        if ( v9 < v17 )
          v18 += v15;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v18, v10);
        result.QuadPart = v6 + v18;
      }
      else
      {
        if ( v11 == 64 )
          v13 = -1LL;
        else
          v13 = (1LL << v11) - 1;
        result.QuadPart = v6 + (v9 | v7 & ~v13);
      }
    }
  }
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v34;
  }
  else
  {
    v14 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v14 = 10000000LL;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpTimerScaleCounter)(
                        (LARGE_INTEGER)result.QuadPart,
                        v34,
                        v14);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v14;
  }
  return result;
}
