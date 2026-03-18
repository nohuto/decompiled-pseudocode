/*
 * XREFs of PspUnlockJob @ 0x1406FFE90
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140683DF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x140683F18 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140685304 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140687598 (PspLockRootJobFromProcess.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140687654 (PspQueryJobHierarchyProcessIdList.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PsInsertPermanentSiloContextEx @ 0x140692980 (PsInsertPermanentSiloContextEx.c)
 *     PspNotificationPacketCallback @ 0x1406A1DE0 (PspNotificationPacketCallback.c)
 *     PspGetNextJobProcess @ 0x1406CA970 (PspGetNextJobProcess.c)
 *     PspSetJobIoRateControl @ 0x1406D4808 (PspSetJobIoRateControl.c)
 *     PspJobClose @ 0x1406D77F0 (PspJobClose.c)
 *     PspCreateSilo @ 0x1406E4FA4 (PspCreateSilo.c)
 *     PspJobNotificationWorker @ 0x1406E9850 (PspJobNotificationWorker.c)
 *     PspGetNextChildJob @ 0x1406FF7C4 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FFF24 (PspCallJobHierarchyCallbacks.c)
 *     PspChargeJobWakeCounter @ 0x140700280 (PspChargeJobWakeCounter.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ABC00 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1409ABCF4 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409B0400 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x1409B05AC (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1409B0C74 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
