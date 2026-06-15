/*
 * XREFs of sub_1800E1DC0 @ 0x1800E1DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void __fastcall sub_1800E1DC0(_QWORD *a1, char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[3];
  if ( v4 )
    sub_180052600(v4);
  if ( a2 )
    sub_18006A148(a1);
}
