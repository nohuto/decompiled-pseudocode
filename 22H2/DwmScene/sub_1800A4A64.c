/*
 * XREFs of sub_1800A4A64 @ 0x1800A4A64
 * Callers:
 *     sub_1800A50F8 @ 0x1800A50F8 (sub_1800A50F8.c)
 * Callees:
 *     sub_1800619B0 @ 0x1800619B0 (sub_1800619B0.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_1800A2094 @ 0x1800A2094 (sub_1800A2094.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A4A64(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r9
  char v8; // [rsp+20h] [rbp-38h]

  v4 = a1 + 472;
  sub_1800619B0(a1 + 472);
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = operator new(0x30uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *a2 = v5;
  sub_1800A2094(a2, (_QWORD *)(a1 + 480), v8, v6);
  sub_180061A3C(v4);
  return a2;
}
