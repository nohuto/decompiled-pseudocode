/*
 * XREFs of sub_1800FBE02 @ 0x1800FBE02
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFC0 @ 0x18000FFC0 (sub_18000FFC0.c)
 */

void __fastcall sub_1800FBE02(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_18000FFC0(*(__int64 **)(a2 + 120));
  }
}
