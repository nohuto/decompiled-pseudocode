/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1405AF190
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1405AF1B8 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405AF498 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlpTraceDatabaseAcquireLock();
  RtlpTraceDatabaseReleaseLock(a1);
  return 1;
}
