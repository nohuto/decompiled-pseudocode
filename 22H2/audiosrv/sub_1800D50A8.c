/*
 * XREFs of sub_1800D50A8 @ 0x1800D50A8
 * Callers:
 *     sub_1800D7D70 @ 0x1800D7D70 (sub_1800D7D70.c)
 *     sub_1800E15FC @ 0x1800E15FC (sub_1800E15FC.c)
 *     sub_180106C74 @ 0x180106C74 (sub_180106C74.c)
 *     sub_180107A1C @ 0x180107A1C (sub_180107A1C.c)
 *     sub_18010A534 @ 0x18010A534 (sub_18010A534.c)
 *     sub_180136310 @ 0x180136310 (sub_180136310.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

_QWORD *__fastcall sub_1800D50A8(_QWORD *a1, __int64 *a2)
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
