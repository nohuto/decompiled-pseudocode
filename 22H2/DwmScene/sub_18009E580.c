/*
 * XREFs of sub_18009E580 @ 0x18009E580
 * Callers:
 *     sub_18009E270 @ 0x18009E270 (sub_18009E270.c)
 *     sub_1800A2E30 @ 0x1800A2E30 (sub_1800A2E30.c)
 * Callees:
 *     sub_18009D690 @ 0x18009D690 (sub_18009D690.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18009E580(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 ***a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x38uLL);
  v9[4] = **a5;
  v9[5] = 0LL;
  v9[6] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18009D690(a1, a2, a3, (unsigned __int64 *)v9 + 4, v9);
  return a2;
}
