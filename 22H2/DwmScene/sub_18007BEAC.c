/*
 * XREFs of sub_18007BEAC @ 0x18007BEAC
 * Callers:
 *     sub_18006C734 @ 0x18006C734 (sub_18006C734.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 * Callees:
 *     sub_18007BF1C @ 0x18007BF1C (sub_18007BF1C.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_18007BEAC(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  sub_18007BF1C(a1, &v8);
  v6 = v8;
  if ( v8 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(v8 + 32) + 8LL) < 0 )
    v6 = *a1;
  result = a2;
  *a2 = v6;
  return result;
}
