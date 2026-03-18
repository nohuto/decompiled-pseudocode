/*
 * XREFs of PspLockJobShared @ 0x1406FFEFC
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140687654 (PspQueryJobHierarchyProcessIdList.c)
 *     PsInsertPermanentSiloContextEx @ 0x140692980 (PsInsertPermanentSiloContextEx.c)
 *     PspGetNextChildJob @ 0x1406FF7C4 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406FFF24 (PspCallJobHierarchyCallbacks.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ABC00 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409B0400 (PspQueryJobHierarchyInterferenceCount.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
