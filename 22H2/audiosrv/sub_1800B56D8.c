/*
 * XREFs of sub_1800B56D8 @ 0x1800B56D8
 * Callers:
 *     sub_1800B4610 @ 0x1800B4610 (sub_1800B4610.c)
 *     sub_1800B5788 @ 0x1800B5788 (sub_1800B5788.c)
 *     sub_1800B58DC @ 0x1800B58DC (sub_1800B58DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B56D8(__int64 a1)
{
  __int64 v3; // rcx

  if ( !a1 )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a1 + v3) );
  return v3 + 1;
}
