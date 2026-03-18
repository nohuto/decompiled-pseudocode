/*
 * XREFs of ExpTryAcquireResourceSharedStarveExclusive @ 0x14035497C
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402632C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9280 (ExAcquireFastResourceSharedStarveExclusive.c)
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
