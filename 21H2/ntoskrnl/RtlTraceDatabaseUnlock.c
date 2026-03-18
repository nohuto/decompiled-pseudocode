/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1405EE1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x1405EE4E0 (RtlpTraceDatabaseReleaseLock.c)
 */

__int64 __fastcall RtlTraceDatabaseUnlock(__int64 a1)
{
  return RtlpTraceDatabaseReleaseLock(a1);
}
