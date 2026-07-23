/*
 * XREFs of PspLockJobExclusive @ 0x1406823D4
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspJobNotificationWorker @ 0x1405DC570 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1406139C0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x140614EC0 (PspJobClose.c)
 *     PspLockRootJobFromProcess @ 0x14067FF34 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x140681E54 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140681F80 (PspEnforceLimitsJobPostCallback.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x14090935C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
