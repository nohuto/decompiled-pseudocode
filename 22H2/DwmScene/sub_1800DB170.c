/*
 * XREFs of sub_1800DB170 @ 0x1800DB170
 * Callers:
 *     sub_1800DB5F0 @ 0x1800DB5F0 (sub_1800DB5F0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800DB170(__int64 a1)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 8) = v1;
}
