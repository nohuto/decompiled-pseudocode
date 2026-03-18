/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1405B1640
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405B1668 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405B1948 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlpTraceDatabaseAcquireLock();
  RtlpTraceDatabaseReleaseLock(a1);
  return 1;
}
