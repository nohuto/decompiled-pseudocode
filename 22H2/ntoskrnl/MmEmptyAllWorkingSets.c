/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14053C744
 * Callers:
 *     EtwpSetMark @ 0x14093742C (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140990620 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14053B138 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
