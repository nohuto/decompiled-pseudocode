/*
 * XREFs of EtwpClearPartitionContext @ 0x140321340
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
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
