/*
 * XREFs of PspLockJobShared @ 0x1406FBFC0
 * Callers:
 *     PspQueryJobHierarchyProcessIdList @ 0x1406F91EC (PspQueryJobHierarchyProcessIdList.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x1406FB938 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FC054 (PspCallJobHierarchyCallbacks.c)
 *     PsInsertPermanentSiloContextEx @ 0x14073858C (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409AF690 (PspQueryJobHierarchyInterferenceCount.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
