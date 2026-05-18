/*
 * XREFs of sub_18007097C @ 0x18007097C
 * Callers:
 *     sub_18007079C @ 0x18007079C (sub_18007079C.c)
 * Callees:
 *     sub_18006E7A4 @ 0x18006E7A4 (sub_18006E7A4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007097C(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 ***a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rdx
  __int64 **v10; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x40uLL);
  v10 = *a5;
  v9[4] = 0LL;
  v9[5] = 0LL;
  v9[4] = *v10;
  v9[5] = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v9[6] = 0LL;
  v9[7] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18006E7A4(a1, a2, a3, (__int64)(v9 + 4), v9);
  return a2;
}
