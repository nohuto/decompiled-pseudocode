/*
 * XREFs of sub_180080B78 @ 0x180080B78
 * Callers:
 *     sub_18010AF30 @ 0x18010AF30 (sub_18010AF30.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 *     sub_18001C744 @ 0x18001C744 (sub_18001C744.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180080B78(__int64 a1, __int64 a2)
{
  double v4; // xmm1_8
  double v5; // xmm2_8
  double v6; // xmm3_8
  __m128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+40h] [rbp-48h]
  __int128 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]

  sub_1800839A4(a1);
  sub_180080974(a1, &v9);
  v4 = *(double *)&v10;
  v5 = *(double *)&v11;
  v6 = *(double *)&v12;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  sub_18001C744(&v8, v4, v5, v6);
  sub_18001256C((_OWORD *)a2, v4, v5, v6);
  return a2;
}
