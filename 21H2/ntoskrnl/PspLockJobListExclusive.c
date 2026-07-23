/*
 * XREFs of PspLockJobListExclusive @ 0x1406F7544
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
}
