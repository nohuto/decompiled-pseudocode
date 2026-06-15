/*
 * XREFs of sub_1800BC750 @ 0x1800BC750
 * Callers:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_1 @ 0x1800C5790 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_1.c)
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 *     sub_18011B0C8 @ 0x18011B0C8 (sub_18011B0C8.c)
 *     sub_18011CF10 @ 0x18011CF10 (sub_18011CF10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800BC750(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 2147942934LL;
  }
  return result;
}
