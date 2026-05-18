/*
 * XREFs of sub_180080DD4 @ 0x180080DD4
 * Callers:
 *     sub_180012380 @ 0x180012380 (sub_180012380.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 *     sub_1800FC7C0 @ 0x1800FC7C0 (sub_1800FC7C0.c)
 *     sub_1800FCAD0 @ 0x1800FCAD0 (sub_1800FCAD0.c)
 * Callees:
 *     sub_18001A310 @ 0x18001A310 (sub_18001A310.c)
 *     sub_18007E720 @ 0x18007E720 (sub_18007E720.c)
 *     sub_18007F750 @ 0x18007F750 (sub_18007F750.c)
 *     sub_18007F978 @ 0x18007F978 (sub_18007F978.c)
 *     sub_18007FB74 @ 0x18007FB74 (sub_18007FB74.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_180081344 @ 0x180081344 (sub_180081344.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180082EC0 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     sub_1800843D0 @ 0x1800843D0 (sub_1800843D0.c)
 *     sub_1800844B4 @ 0x1800844B4 (sub_1800844B4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     acosf @ 0x18011F75A (acosf.c)
 */

__int64 __fastcall sub_180080DD4(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  unsigned int v10; // eax
  _DWORD *v11; // rax
  __m128 v12; // xmm2
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int128 v20; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-71h]
  __int64 v23; // [rsp+40h] [rbp-69h] BYREF
  int v24; // [rsp+48h] [rbp-61h]
  unsigned __int64 v25; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-51h]
  __int128 v27; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v28[4]; // [rsp+A0h] [rbp-9h] BYREF

  sub_180083A6C(a1);
  sub_180080408(a1, (__int64)&v23);
  sub_18007E720(&v21, a2, (unsigned __int64 *)&v23);
  v6 = 0LL;
  v6.m128_f32[0] = *(float *)&v21;
  v7 = _mm_movelh_ps(_mm_unpacklo_ps(v6, (__m128)HIDWORD(v21)), (__m128)v22);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v20 = xmmword_18020DC50;
  }
  else
  {
    v26 = v22;
    v25 = v21;
    sub_180081344(&v25);
    v10 = *(_DWORD *)(a3 + 8);
    v21 = *(_QWORD *)a3;
    v22 = v10;
    sub_180081344(&v21);
    v11 = sub_18007F978(&v25, &v20, &v21);
    if ( !v11 )
      wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
    v12 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v11, (__m128)(unsigned int)v11[2]);
    v13 = _mm_mul_ps(v12, v12);
    v14 = _mm_shuffle_ps(v13, v13, 102);
    v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    if ( _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)).m128_f32[0] <= 0.00000059604645 )
    {
      v23 = qword_18020DBE8;
      v24 = dword_18020DBF0;
      sub_18007F978((unsigned __int64 *)&v23, &v21, &v25);
      sub_180081344(&v21);
      LODWORD(v16) = sub_18007FB74((unsigned __int64 *)&v23, &v25).m128_u32[0];
      v17 = fmaxf(v16, -1.0);
      v18 = fminf(v17, 1.0);
      acosf(v18);
      v15 = _mm_movelh_ps((__m128)v21, (__m128)v22);
      sub_1800843D0();
    }
    else
    {
      sub_18007F750((__int64)v28, (unsigned __int64 *)&v23, a2, &v21);
      sub_18001A310(v28, (__int64)&v27);
      v15.m128_u64[1] = *((_QWORD *)&v27 + 1);
      *(double *)v15.m128_u64 = sub_1800844B4();
    }
    v20 = (__int128)v15;
  }
  return std::numpunct<wchar_t>::_Init(a1, &v20);
}
