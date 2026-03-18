/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14063570C
 * Callers:
 *     PopTransitionToSleep @ 0x140AA5400 (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14035E878 (MiQueueWorkingSetRequest.c)
 *     PsGetNextPartition @ 0x14036A720 (PsGetNextPartition.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C699E4 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 128);
    }
  }
}
