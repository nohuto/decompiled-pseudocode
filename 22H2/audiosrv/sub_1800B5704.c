/*
 * XREFs of sub_1800B5704 @ 0x1800B5704
 * Callers:
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     sub_1800B5788 @ 0x1800B5788 (sub_1800B5788.c)
 *     sub_1800B58DC @ 0x1800B58DC (sub_1800B58DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B5704(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  return 2 * v2 + 2;
}
