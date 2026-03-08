/*
 * XREFs of MmFlushAllPagesEx @ 0x1406398BC
 * Callers:
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x1406377FC (MiFlushAllPages.c)
 */

__int64 *__fastcall MmFlushAllPagesEx(char a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1);
  }
  return result;
}
