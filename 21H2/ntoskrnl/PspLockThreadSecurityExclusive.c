/*
 * XREFs of PspLockThreadSecurityExclusive @ 0x14023F0A0
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockExclusiveEx(a1 + 1280, 0LL);
}
