/*
 * XREFs of PspUnlockJob @ 0x140618730
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x140605088 (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140614100 (PspQueryJobHierarchyProcessIdList.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x1406162D4 (PspLockRootJobFromProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140616398 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061776C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x140617D5C (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140617E18 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140617FF0 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406181F4 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618320 (PspEnforceLimitsJobPostCallback.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     PspJobNotificationWorker @ 0x140681530 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x1406ABE00 (PspGetNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1406B47F0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406B5A00 (PspJobClose.c)
 *     PsInsertPermanentSiloContextEx @ 0x140715D5C (PsInsertPermanentSiloContextEx.c)
 *     PspAssignProcessToJob @ 0x14071F430 (PspAssignProcessToJob.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905F60 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140906054 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140909050 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x1409091FC (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1409098C4 (PspSetNetRateControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v3);
  }
}
