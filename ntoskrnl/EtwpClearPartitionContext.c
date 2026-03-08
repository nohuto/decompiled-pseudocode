/*
 * XREFs of EtwpClearPartitionContext @ 0x14028DAAC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 */

__int64 __fastcall EtwpClearPartitionContext(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    PsDereferencePartition(v2);
    *a1 = 0LL;
  }
  return 0LL;
}
