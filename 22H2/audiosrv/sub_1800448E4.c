/*
 * XREFs of sub_1800448E4 @ 0x1800448E4
 * Callers:
 *     sub_18000543C @ 0x18000543C (sub_18000543C.c)
 *     sub_1800055B0 @ 0x1800055B0 (sub_1800055B0.c)
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180018FA0 @ 0x180018FA0 (sub_180018FA0.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_1800C63BC @ 0x1800C63BC (sub_1800C63BC.c)
 *     sub_1800C8E8C @ 0x1800C8E8C (sub_1800C8E8C.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 *     sub_1800D30A8 @ 0x1800D30A8 (sub_1800D30A8.c)
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800448E4(__int64 *a1, int a2)
{
  __int64 result; // rax

  if ( a2 < 0 || a2 > *(_DWORD *)(*a1 - 12) )
    sub_1800B8610(2147942487LL);
  *(_DWORD *)(*a1 - 16) = a2;
  result = *a1;
  *(_WORD *)(*a1 + 2LL * a2) = 0;
  return result;
}
