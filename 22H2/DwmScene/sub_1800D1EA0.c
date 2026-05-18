/*
 * XREFs of sub_1800D1EA0 @ 0x1800D1EA0
 * Callers:
 *     sub_1800D48FC @ 0x1800D48FC (sub_1800D48FC.c)
 * Callees:
 *     sub_1800D31E0 @ 0x1800D31E0 (sub_1800D31E0.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D1EA0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rbx

  v6 = operator new(0xF8uLL);
  sub_1800D31E0(a1, v6 + 4, a3);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
