/*
 * XREFs of PspLockJobListExclusive @ 0x14071FE14
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
}
