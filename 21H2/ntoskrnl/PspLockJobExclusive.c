/*
 * XREFs of PspLockJobExclusive @ 0x140618774
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x1406162D4 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406181F4 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618320 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobNotificationWorker @ 0x140681530 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x1406ABE00 (PspGetNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1406B47F0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406B5A00 (PspJobClose.c)
 *     PspAssignProcessToJob @ 0x14071F430 (PspAssignProcessToJob.c)
 *     PspConvertSiloToServerSilo @ 0x140906054 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x1409091FC (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
