/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x1407001C8
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140683890 (PspApplyJobLimitsToProcess.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1409AFD2C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1224, 0LL);
}
