/*
 * XREFs of sub_1800D542C @ 0x1800D542C
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     sub_1800D4FB4 @ 0x1800D4FB4 (sub_1800D4FB4.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_1800D542C(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 )
    sub_180052600(v2);
  sub_18006A148(a1);
  return a1;
}
