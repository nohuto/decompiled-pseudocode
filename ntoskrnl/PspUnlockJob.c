/*
 * XREFs of PspUnlockJob @ 0x1406FBF7C
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspJobNotificationWorker @ 0x14067EDE0 (PspJobNotificationWorker.c)
 *     PspSendProcessNotificationToJobChain @ 0x1406F84CC (PspSendProcessNotificationToJobChain.c)
 *     PspJobClose @ 0x1406F8760 (PspJobClose.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F8844 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspGetNextJobProcess @ 0x1406F90E0 (PspGetNextJobProcess.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406F91EC (PspQueryJobHierarchyProcessIdList.c)
 *     PspLockRootJobFromProcess @ 0x1406F93EC (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406FAE20 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextChildJob @ 0x1406FB938 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x1406FBDC4 (PspChargeJobWakeCounter.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FC054 (PspCallJobHierarchyCallbacks.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PsInsertPermanentSiloContextEx @ 0x14073858C (PsInsertPermanentSiloContextEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x140797438 (PspCreateSilo.c)
 *     PspNotificationPacketCallback @ 0x140797BA0 (PspNotificationPacketCallback.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409AF690 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x1409AF83C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1409B0054 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
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
