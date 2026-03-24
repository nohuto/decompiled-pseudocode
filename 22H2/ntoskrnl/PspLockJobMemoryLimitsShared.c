/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x140618E4C
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14060596C (PspApplyJobLimitsToProcess.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140618780 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140908964 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
