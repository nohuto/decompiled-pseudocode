/*
 * XREFs of ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0003280 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x1C0008B70 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     VidSchSetMonitorPowerState @ 0x1C000FA60 (VidSchSetMonitorPowerState.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0011358 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0012668 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiClearFlipDevice @ 0x1C0012708 (VidSchiClearFlipDevice.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00127D0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0012910 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0012A7C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C00131F8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C0013340 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C0016070 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0017CAC (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchHasReadyPackets @ 0x1C0018C60 (VidSchHasReadyPackets.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C001C8D0 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D52C (-VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DBB6 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001DC60 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003553C (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C003AC40 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C003B0C4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C003B608 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C003C4FC (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003D190 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003D23C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DB1C (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DBE0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchCancelPresentAtFlips @ 0x1C003E410 (VidSchCancelPresentAtFlips.c)
 *     VidSchConfirmToken @ 0x1C003E930 (VidSchConfirmToken.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003EF80 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchEscape @ 0x1C003F6B0 (VidSchEscape.c)
 *     VidSchExitIndependentFlip @ 0x1C003F9C0 (VidSchExitIndependentFlip.c)
 *     VidSchPresentDurationPlane @ 0x1C00402C0 (VidSchPresentDurationPlane.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0040990 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchTimeoutSyncObject @ 0x1C0040B90 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0042AA0 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0042C68 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0042F38 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchCreateDoorbell @ 0x1C0043F60 (VidSchCreateDoorbell.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044980 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchTerminateDoorbell @ 0x1C0045120 (VidSchTerminateDoorbell.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0045370 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00455A0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0045608 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0045F04 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiResetHwEngine @ 0x1C00460A0 (VidSchiResetHwEngine.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0046764 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C0046F08 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x1C004A1C4 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Release(AcquireSpinLock *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
    if ( *((_BYTE *)this + 33) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v2);
    else
      KeReleaseInStackQueuedSpinLock(v2);
    *((_BYTE *)this + 32) = 0;
  }
}
