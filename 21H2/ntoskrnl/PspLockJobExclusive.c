/*
 * XREFs of PspLockJobExclusive @ 0x1406FFED4
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140683DF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140687598 (PspLockRootJobFromProcess.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PspNotificationPacketCallback @ 0x1406A1DE0 (PspNotificationPacketCallback.c)
 *     PspGetNextJobProcess @ 0x1406CA970 (PspGetNextJobProcess.c)
 *     PspJobClose @ 0x1406D77F0 (PspJobClose.c)
 *     PspCreateSilo @ 0x1406E4FA4 (PspCreateSilo.c)
 *     PspJobNotificationWorker @ 0x1406E9850 (PspJobNotificationWorker.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FFF24 (PspCallJobHierarchyCallbacks.c)
 *     PspConvertSiloToServerSilo @ 0x1409ABCF4 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x1409B05AC (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
