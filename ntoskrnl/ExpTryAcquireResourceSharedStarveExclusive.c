/*
 * XREFs of ExpTryAcquireResourceSharedStarveExclusive @ 0x1402E9154
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceSharedStarveExclusive(__int64 a1)
{
  char result; // al

  if ( *(char *)(a1 + 26) < 0 )
    return 0;
  result = 1;
  ++*(_DWORD *)(a1 + 64);
  *(_WORD *)(a1 + 24) = 1;
  return result;
}
