/*
 * XREFs of PspLockThreadSecurityShared @ 0x140581784
 * Callers:
 *     PsLockThreadNameShared @ 0x1403F8534 (PsLockThreadNameShared.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
}
