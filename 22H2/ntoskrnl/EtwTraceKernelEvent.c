/*
 * XREFs of EtwTraceKernelEvent @ 0x140211EFC
 * Callers:
 *     EtwTraceProcessTerminate @ 0x140204F94 (EtwTraceProcessTerminate.c)
 *     EtwpTraceImageUnload @ 0x140211D88 (EtwpTraceImageUnload.c)
 *     MiCombineWithExisting @ 0x1402179D4 (MiCombineWithExisting.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KiRetireDpcList @ 0x1402459D0 (KiRetireDpcList.c)
 *     KiTimer2Expiration @ 0x1402514C0 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x140252A30 (KiProcessExpiredTimerList.c)
 *     KiCancelTimer @ 0x140253980 (KiCancelTimer.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140299380 (CcCachemapUninitWorkerThread.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B2DF0 (KiHvEnlightenedGuestPriorityKick.c)
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7030 (KeResumeClockTimerFromIdle.c)
 *     KiCheckForTimerExpiration @ 0x1402C8110 (KiCheckForTimerExpiration.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     CcPerformReadAhead @ 0x14030E840 (CcPerformReadAhead.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     KePrepareClockTimerForIdle @ 0x140346E44 (KePrepareClockTimerForIdle.c)
 *     KiEventClockStateChange @ 0x140347170 (KiEventClockStateChange.c)
 *     PpmEventIdleStateChange @ 0x14034E368 (PpmEventIdleStateChange.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x14034ED3C (PpmEventLegacyProcessorPerfStateChange.c)
 *     CcPerfLogScheduleReadAhead @ 0x140391DB0 (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushSection @ 0x140392784 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14039286C (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403939D4 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x14039B3D0 (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x14039E86C (CcPerfLogLazyWriteScan.c)
 *     PpmIdleSelectStates @ 0x1403B6E10 (PpmIdleSelectStates.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     EtwTraceAntiStarvationBoost @ 0x1404117EC (EtwTraceAntiStarvationBoost.c)
 *     IopPerfCompleteRequest @ 0x14045F2FE (IopPerfCompleteRequest.c)
 *     KiTraceCancelTimer2 @ 0x140462388 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x140462420 (KiTraceSetTimer.c)
 *     PopLogNotifyDevice @ 0x1404629CA (PopLogNotifyDevice.c)
 *     PpmEventCoordinatedIdleTransition @ 0x140462C2A (PpmEventCoordinatedIdleTransition.c)
 *     EtwTracePriority @ 0x140466D2E (EtwTracePriority.c)
 *     EtwTraceThreadAffinity @ 0x1404670B0 (EtwTraceThreadAffinity.c)
 *     EtwpTraceFltIo @ 0x140467A70 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x140467BF0 (EtwpTraceNetwork.c)
 *     EtwpTraceWdf @ 0x140467C80 (EtwpTraceWdf.c)
 *     MiLogPerfMemoryEvent @ 0x14046B306 (MiLogPerfMemoryEvent.c)
 *     CcAsyncLazywriteWorker @ 0x1405398EC (CcAsyncLazywriteWorker.c)
 *     CcPerfLogCanWriteFail @ 0x14053A7B8 (CcPerfLogCanWriteFail.c)
 *     CcPerfLogExtraWBThreadAction @ 0x14053A848 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompletionRoutine @ 0x140559160 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x1405592B8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x14055938C (IopPerfLogCallReturnEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTimerExpiration @ 0x14057C864 (KiTimerExpiration.c)
 *     KiTimerExpirationDpc @ 0x14057CA70 (KiTimerExpirationDpc.c)
 *     KiTraceSetTimer2 @ 0x14057D634 (KiTraceSetTimer2.c)
 *     PpmTraceExitLatency @ 0x1405860E0 (PpmTraceExitLatency.c)
 *     PoSetUserPresent @ 0x14058DE50 (PoSetUserPresent.c)
 *     PpmTracePerfIdleRundown @ 0x140597F10 (PpmTracePerfIdleRundown.c)
 *     PpmEventEnterPlatformIdleState @ 0x14059A0F0 (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x14059B720 (PpmEventThermalCapChange.c)
 *     EtwTraceDebuggerEvent @ 0x1405FCA70 (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1405FCAF0 (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405FCB7C (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD9C (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1405FCE20 (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1405FCE9C (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1405FCF20 (EtwTraceIoTimerEvent.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x1405FCF8C (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x1405FD00C (EtwTraceLongDpcMitigationEvent.c)
 *     EtwTraceRetpolineExit @ 0x1405FD4D0 (EtwTraceRetpolineExit.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FD53C (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadFeedbackRead @ 0x1405FD700 (EtwTraceThreadFeedbackRead.c)
 *     EtwTraceThreadWorkItem @ 0x1405FD780 (EtwTraceThreadWorkItem.c)
 *     EtwTraceWorkloadClassUpdate @ 0x1405FD804 (EtwTraceWorkloadClassUpdate.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x1405FD884 (EtwTraceXSchedulerPriorityKickReceive.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FD8F8 (EtwTraceXSchedulerPriorityUpdate.c)
 *     EtwpLogMemInfo @ 0x1405FDEB4 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1405FE010 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1405FE390 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1405FE3F0 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1405FE4F0 (EtwpTraceDebugPrint.c)
 *     EtwpTraceOpticalIo @ 0x1405FE620 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405FE8D0 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1405FEA70 (EtwpTraceSplitIo.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405FED70 (PerfInfoLogUnexpectedInterrupt.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14060083C (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x1406008E4 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140600AD8 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x140600BF4 (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x140600DE8 (PerfLogSpinLockRelease.c)
 *     MiLogAllocateWsleEvent @ 0x14061C2C8 (MiLogAllocateWsleEvent.c)
 *     MiLogRemoveWsleEvent @ 0x14061C38C (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061D8E8 (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x140623510 (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1406417B0 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x140644F74 (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x1406536FC (MiLogCombinedPteDelete.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     EtwTraceThreadSetName @ 0x1406ACBBC (EtwTraceThreadSetName.c)
 *     PerfLogImageLoad @ 0x1406AD914 (PerfLogImageLoad.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADAFC (EtwpEnumerateAddressSpace.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706D8C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     HvpMarkDirty @ 0x140747620 (HvpMarkDirty.c)
 *     CmpNotifyChangeKey @ 0x140767A00 (CmpNotifyChangeKey.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     MmLogQueryCombineStats @ 0x1407EAB4C (MmLogQueryCombineStats.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A746C (EtwpLogSessionWorkingSetInfo.c)
 *     KeSetIntervalProfile @ 0x1409751C8 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A1E0 (PopPolicyWorkerAction.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E52DC (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x1409E53B8 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E5498 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1409E5548 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E55EC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E574C (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x1409E5F0C (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1409E5FC8 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409E6118 (EtwpLogMemInfoWsHelper.c)
 *     CmpLogHiveDestroyEvent @ 0x140A12820 (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x140A12914 (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x140A129FC (CmpLogHiveLinkEvent.c)
 *     MiLogSectionCreate @ 0x140A2F6B0 (MiLogSectionCreate.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9F000 (KiCalibrateTimeAdjustment.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 *     PopSystemIrpCompletion @ 0x140AA7680 (PopSystemIrpCompletion.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceKernelEvent(int a1, int a2, unsigned int a3, __int16 a4, int a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx

  result = EtwpHostSiloState;
  v7 = a3;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    result = 32LL * (unsigned int)v12;
    v13 = result + EtwpHostSiloState + 4284;
    if ( v13 )
    {
      result = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v13 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a1,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232),
                   a2,
                   a4,
                   a5);
    }
  }
  return result;
}
