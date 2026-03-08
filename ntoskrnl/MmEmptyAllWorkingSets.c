/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140633230
 * Callers:
 *     EtwpSetMark @ 0x1409E3AC0 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406322B8 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
