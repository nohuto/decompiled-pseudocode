/*
 * XREFs of sub_18001D980 @ 0x18001D980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18008741C @ 0x18008741C (sub_18008741C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall sub_18001D980(__int64 a1, float *a2, float *a3)
{
  float *result; // rax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  _QWORD v11[5]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF

  v12 = 0LL;
  sub_1800615B4(*(_QWORD *)(a1 + 16) + 16LL, &v12);
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18001269C(v11, (__int64)&unk_180208688);
  result = (float *)sub_18008741C(*(_QWORD *)(a1 + 16), v11);
  v7 = result[2] - result[5];
  v8 = result[1] - result[4];
  *a2 = *result - result[3];
  a2[1] = v8;
  a2[2] = v7;
  v9 = result[5] + result[2];
  v10 = result[1] + result[4];
  *a3 = *result + result[3];
  a3[1] = v10;
  a3[2] = v9;
  if ( BYTE8(v12) )
    return (float *)sub_180061A34(v12);
  return result;
}
