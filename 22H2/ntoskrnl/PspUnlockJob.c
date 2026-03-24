/*
 * XREFs of PspUnlockJob @ 0x140618B90
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x140605088 (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140614560 (PspQueryJobHierarchyProcessIdList.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140616734 (PspLockRootJobFromProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140617BCC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x1406181BC (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140618278 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140618450 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140618654 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618780 (PspEnforceLimitsJobPostCallback.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspJobNotificationWorker @ 0x14065F1B0 (PspJobNotificationWorker.c)
 *     PsInsertPermanentSiloContextEx @ 0x140660CE4 (PsInsertPermanentSiloContextEx.c)
 *     PspGetNextJobProcess @ 0x14068EDB0 (PspGetNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1406977B0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406989C0 (PspJobClose.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905FB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1409060A4 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409090A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x14090924C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x140909914 (PspSetNetRateControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
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
