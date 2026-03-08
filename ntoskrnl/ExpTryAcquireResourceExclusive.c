/*
 * XREFs of ExpTryAcquireResourceExclusive @ 0x1403C4DA0
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x140608B54 (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceExclusive(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 64) )
    return 0;
  *(_WORD *)(a1 + 26) |= 0x80u;
  result = 1;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = 1;
  return result;
}
