/*
 * XREFs of PspLockProcessExclusive @ 0x14035AE10
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x140707430 (NtTerminateProcess.c)
 *     PspCreatePicoProcess @ 0x14090BD50 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
