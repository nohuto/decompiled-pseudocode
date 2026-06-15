/*
 * XREFs of sub_1800D3180 @ 0x1800D3180
 * Callers:
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800D3180(unsigned __int16 **a1)
{
  if ( *((int *)*a1 - 4) < 0 )
    sub_1800B8610(-2147024809);
  return **a1;
}
