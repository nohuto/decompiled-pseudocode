/*
 * XREFs of sub_1800CDE50 @ 0x1800CDE50
 * Callers:
 *     sub_1800CDFF0 @ 0x1800CDFF0 (sub_1800CDFF0.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CDE50(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-10h]

  v6 = operator new(0x60uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_18001CDF8(v6 + 4, a3);
  *((_OWORD *)v6 + 4) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v6 + 5) = *(_OWORD *)(a3 + 48);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
