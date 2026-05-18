/*
 * XREFs of sub_18009C494 @ 0x18009C494
 * Callers:
 *     sub_18009E4A8 @ 0x18009E4A8 (sub_18009E4A8.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009C494(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rdx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0x48uLL);
  v6 = *a4;
  v8[6] = 0LL;
  v8[7] = 0LL;
  sub_18001CDF8(v8 + 4, v6);
  *((_WORD *)v8 + 32) = 0;
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
