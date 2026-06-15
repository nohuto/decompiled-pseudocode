/*
 * XREFs of sub_18010E768 @ 0x18010E768
 * Callers:
 *     sub_18010DFFC @ 0x18010DFFC (sub_18010DFFC.c)
 *     sub_18010E7A8 @ 0x18010E7A8 (sub_18010E7A8.c)
 * Callees:
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 */

__int64 __fastcall sub_18010E768(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_1801055A0((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
