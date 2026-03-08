/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x1406FC318
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x1406FF17C (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1409AED9C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1248, 0LL);
}
