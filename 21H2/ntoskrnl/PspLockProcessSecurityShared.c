/*
 * XREFs of PspLockProcessSecurityShared @ 0x140399FA0
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     PspAssignPrimaryToken @ 0x1407BC1D0 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
