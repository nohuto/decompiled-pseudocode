/*
 * XREFs of PspLockJobExclusive @ 0x1406FC178
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspJobNotificationWorker @ 0x14067EDE0 (PspJobNotificationWorker.c)
 *     PspJobClose @ 0x1406F8760 (PspJobClose.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F8844 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspGetNextJobProcess @ 0x1406F90E0 (PspGetNextJobProcess.c)
 *     PspLockRootJobFromProcess @ 0x1406F93EC (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FC054 (PspCallJobHierarchyCallbacks.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspCreateSilo @ 0x140797438 (PspCreateSilo.c)
 *     PspNotificationPacketCallback @ 0x140797BA0 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x1409AF83C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
