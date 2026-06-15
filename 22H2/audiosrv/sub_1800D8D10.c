/*
 * XREFs of sub_1800D8D10 @ 0x1800D8D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void __fastcall sub_1800D8D10(_QWORD *a1, char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    sub_180052600(v4);
  if ( a2 )
    sub_18006A148(a1);
}
