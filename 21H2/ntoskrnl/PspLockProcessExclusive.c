/*
 * XREFs of PspLockProcessExclusive @ 0x1402A0880
 * Callers:
 *     PspSyscallProviderOptIn @ 0x140659AD4 (PspSyscallProviderOptIn.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PspCreatePicoProcess @ 0x1409B2390 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
