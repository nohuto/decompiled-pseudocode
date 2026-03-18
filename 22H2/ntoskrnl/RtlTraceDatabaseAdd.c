/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1405B12B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B1668 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405B16D0 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405B1948 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  RtlpTraceDatabaseAcquireLock();
  LOBYTE(a4) = RtlpTraceDatabaseInternalAdd(a1, a2, a3, a4);
  RtlpTraceDatabaseReleaseLock(a1);
  return a4;
}
