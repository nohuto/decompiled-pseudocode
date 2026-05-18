/*
 * XREFs of sub_180069760 @ 0x180069760
 * Callers:
 *     sub_180069610 @ 0x180069610 (sub_180069610.c)
 * Callees:
 *     sub_1800692F4 @ 0x1800692F4 (sub_1800692F4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180069760(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x40uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_1800692F4(a1, a2, a3, v9 + 8, v9);
  return a2;
}
