/*
 * XREFs of PspUnlockJob @ 0x140682390
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspJobNotificationWorker @ 0x1405DC570 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1406139C0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x140614EC0 (PspJobClose.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x14067DD60 (PspQueryJobHierarchyProcessIdList.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x14067FF34 (PspLockRootJobFromProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406813CC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x1406819BC (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140681A78 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140681E54 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140681F80 (PspEnforceLimitsJobPostCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406C43AC (PsInsertPermanentSiloContextEx.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x1406F47B8 (PspSendProcessNotificationToJobChain.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409060C0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409091B0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x14090935C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x140909A24 (PspSetNetRateControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
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
