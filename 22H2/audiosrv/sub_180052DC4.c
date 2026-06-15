/*
 * XREFs of sub_180052DC4 @ 0x180052DC4
 * Callers:
 *     sub_180052D54 @ 0x180052D54 (sub_180052D54.c)
 *     sub_1800671EC @ 0x1800671EC (sub_1800671EC.c)
 *     sub_180107298 @ 0x180107298 (sub_180107298.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

_QWORD *__fastcall sub_180052DC4(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_180052600(v5);
  return a1;
}
