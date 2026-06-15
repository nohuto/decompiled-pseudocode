/*
 * XREFs of sub_180113C34 @ 0x180113C34
 * Callers:
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113C98 @ 0x180113C98 (sub_180113C98.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_18010E4B8 @ 0x18010E4B8 (sub_18010E4B8.c)
 */

_QWORD *__fastcall sub_180113C34(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  sub_1800E3598(&v8);
  v6 = sub_18010E4B8(v5, v4);
  sub_1800461B8(v6 + 5);
  sub_1800472E0((__int64)v6, 0x30uLL);
  *a2 = v8;
  return a2;
}
