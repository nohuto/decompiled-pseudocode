/*
 * XREFs of PspLockJobListExclusive @ 0x140720A44
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
}
