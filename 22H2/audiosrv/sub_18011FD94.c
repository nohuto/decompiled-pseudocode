/*
 * XREFs of sub_18011FD94 @ 0x18011FD94
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 */

void __fastcall sub_18011FD94(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    sub_1800C2A10(a2 + 48);
  }
}
