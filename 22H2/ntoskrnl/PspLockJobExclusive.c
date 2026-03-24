/*
 * XREFs of PspLockJobExclusive @ 0x140618BD4
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604FA0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x140616734 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x140618654 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618780 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobNotificationWorker @ 0x14065F1B0 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x14068EDB0 (PspGetNextJobProcess.c)
 *     PspNotificationPacketCallback @ 0x1406977B0 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406989C0 (PspJobClose.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 *     PspConvertSiloToServerSilo @ 0x1409060A4 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x14090924C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
