/*
 * XREFs of PspLockProcessExclusive @ 0x14029AC00
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x1406B0E40 (NtTerminateProcess.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     PspCreatePicoProcess @ 0x14090BE60 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
