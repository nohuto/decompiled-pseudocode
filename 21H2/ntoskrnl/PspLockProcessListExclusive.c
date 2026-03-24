/*
 * XREFs of PspLockProcessListExclusive @ 0x1402527AC
 * Callers:
 *     PspInsertProcess @ 0x140607710 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
