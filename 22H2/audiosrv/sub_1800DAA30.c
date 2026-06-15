/*
 * XREFs of sub_1800DAA30 @ 0x1800DAA30
 * Callers:
 *     sub_1800DEF30 @ 0x1800DEF30 (sub_1800DEF30.c)
 *     sub_1800DFD58 @ 0x1800DFD58 (sub_1800DFD58.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800DAA30(__int64 **a1)
{
  __int64 *v1; // rbx
  BOOL result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18000F708(v1 + 2);
    sub_18000F708(v1 + 1);
    sub_18000F708(v1);
    return sub_18006A148(v1);
  }
  return result;
}
