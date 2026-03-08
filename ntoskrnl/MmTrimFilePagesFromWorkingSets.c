/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14063327C
 * Callers:
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C69564 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = (__int64 *)PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 128);
    }
  }
}
