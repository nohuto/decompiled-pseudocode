/*
 * XREFs of PspLockProcessListExclusive @ 0x14025200C
 * Callers:
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
