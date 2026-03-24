/*
 * XREFs of KxAcquireSpinLock @ 0x140229570
 * Callers:
 *     ExpTimerApcRoutine @ 0x1402000B0 (ExpTimerApcRoutine.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x140229440 (KeIntSteerPeriodic.c)
 *     PpmIdleSnapConcurrency @ 0x14022A8E0 (PpmIdleSnapConcurrency.c)
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x14022BB40 (IopAllocateFileObjectExtension.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 *     KiTimer2Expiration @ 0x140248150 (KiTimer2Expiration.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x140249B00 (ExpCancelTimer.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14026DF04 (PspProcessUnbindVirtualizedTimers.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     PspGetProperty @ 0x1402F00EC (PspGetProperty.c)
 *     KiInsertTimer2 @ 0x1402F0540 (KiInsertTimer2.c)
 *     PsRemoveVirtualizedTimer @ 0x1402F1444 (PsRemoveVirtualizedTimer.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F4130 (KiAddThreadToPrcbQueue.c)
 *     FsRtlUninitializeFileLock @ 0x1402F6110 (FsRtlUninitializeFileLock.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x140309544 (HalpPCIAcquireConfigSpaceLock.c)
 *     KiScheduleNextForegroundBoost @ 0x14030F47C (KiScheduleNextForegroundBoost.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140313FD4 (IopCancelIrpsInCurrentThreadList.c)
 *     PfSnTraceTimerRoutine @ 0x14031A120 (PfSnTraceTimerRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x14031B20C (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x14031E8C0 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x14031EBF0 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x140320ECC (ExpTimerPause.c)
 *     KeRemoveQueueDpcEx @ 0x1403214A0 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x140324440 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140327160 (ExpTimerDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14032B950 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpLockBufferList @ 0x14032F320 (EtwpLockBufferList.c)
 *     EtwpLockUnlockBufferList @ 0x14032F7BC (EtwpLockUnlockBufferList.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140348F1C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiProcessPendingForegroundBoosts @ 0x14035B430 (KiProcessPendingForegroundBoosts.c)
 *     KeCpuSetReportParkedProcessors @ 0x14035EDA0 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSystemAllowedCpuSets @ 0x14035F238 (KeSetSystemAllowedCpuSets.c)
 *     PoNotifyMediaBuffering @ 0x14036C240 (PoNotifyMediaBuffering.c)
 *     HalpAcquireHighLevelLock @ 0x140378990 (HalpAcquireHighLevelLock.c)
 *     ExWakeTimersPause @ 0x14038CB60 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14038CD80 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x14038CE30 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x14039843C (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039DF60 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x1403A4420 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x1403A48C0 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B605C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403BFF28 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0ED8 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403C3E70 (PpmInstallNewIdleStates.c)
 *     IommupGetSystemContext @ 0x1403CB914 (IommupGetSystemContext.c)
 *     KeRegisterBugCheckCallback @ 0x1403CD130 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1403CF338 (KdDisableDebuggerWithLock.c)
 *     sub_1403E9AC0 @ 0x1403E9AC0 (sub_1403E9AC0.c)
 *     KeSynchronizeExecution @ 0x1403FEBC0 (KeSynchronizeExecution.c)
 *     HalConfigureAdapterChannel @ 0x1404CDF10 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x1404CE08C (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x1404CE1CC (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404CE3BC (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1404CE550 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x1404CE7C4 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404CE9F4 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1404CEB50 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404CECBC (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CEE44 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x1404CEFD8 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x1404CF140 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D7770 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x1404D7A50 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x1404D7ED0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D81E0 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x1404D8710 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x1404D8A90 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1404D8BD0 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1404D8DD0 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x1404D91E0 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x1404D9880 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x1404D9AA0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA320 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA530 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x1404DAA00 (IommuSetDeviceFaultReporting.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EF9F0 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1404FF7B0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050D07C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14050D0F4 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x140510770 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x1405108E0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x140510A50 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x140510AC4 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x140510CBC (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x140510F00 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x1405165E0 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140516750 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140517820 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140518E6C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x140518F1C (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x140519B4C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x14051CEEC (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x14051D630 (KeFreezeExecution.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520A60 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x140523F8C (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x1405240E8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140524194 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140566D40 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x140566F70 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x140567430 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056926C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x14056E49C (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x140574CDC (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576040 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577750 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x140578720 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1405ADA68 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1405ADCEC (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AFB70 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1405B66D4 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x14099D7FC (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AB53C (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x1409E0DC0 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E0EDC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E1010 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 */

void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v4; // rcx
  int v5; // eax
  int v6; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v5 = SchedulerAssist[6];
        SchedulerAssist[6] = v5 + 1;
        if ( v5 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      v4 = CurrentPrcb->SchedulerAssist;
      if ( v4 && CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = v4[6] - 1;
        v4[6] = v6;
        if ( !v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      KxWaitForSpinLockAndAcquire(SpinLock);
    }
  }
}
