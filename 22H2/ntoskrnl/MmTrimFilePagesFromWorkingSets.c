/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14053C8EC
 * Callers:
 *     PopTransitionToSleep @ 0x140990620 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5454 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C4EEDC )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 256);
    }
  }
}
