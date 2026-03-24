/*
 * XREFs of PspLockProcessExclusive @ 0x1402E98B0
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x1406D9B60 (NtTerminateProcess.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     PspCreatePicoProcess @ 0x14090BD00 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
