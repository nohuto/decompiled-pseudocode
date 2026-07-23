/*
 * XREFs of PspLockProcessListExclusive @ 0x140285664
 * Callers:
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
