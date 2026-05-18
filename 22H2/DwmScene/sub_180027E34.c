/*
 * XREFs of sub_180027E34 @ 0x180027E34
 * Callers:
 *     sub_180027CC0 @ 0x180027CC0 (sub_180027CC0.c)
 * Callees:
 *     sub_1800276A0 @ 0x1800276A0 (sub_1800276A0.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180027E34(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x30uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 5) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_1800276A0(a1, a2, a3, v9 + 8, v9);
  return a2;
}
