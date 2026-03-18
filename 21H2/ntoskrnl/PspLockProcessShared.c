/*
 * XREFs of PspLockProcessShared @ 0x14025A668
 * Callers:
 *     PspInheritSyscallProvider @ 0x1406598AC (PspInheritSyscallProvider.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
