/*
 * XREFs of sub_1800D3078 @ 0x1800D3078
 * Callers:
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800D3078(__int64 *a1, int a2)
{
  __int64 v2; // rcx

  if ( a2 < 0 || (v2 = *a1, a2 > *(_DWORD *)(v2 - 16)) )
    sub_1800B8610(-2147024809);
  return *(unsigned __int16 *)(v2 + 2LL * a2);
}
