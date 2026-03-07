// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CStereoscopicContentManager::CalculateViewTransformsForSlate(
        __int64 a1,
        char a2,
        double a3,
        double a4,
        __m128 *a5,
        __int64 a6)
{
  __m128 v7; // xmm6
  __m128 v8; // xmm7
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm8
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 v28; // xmm11
  int v29; // esi
  __m128 v30; // xmm12
  __int64 v31; // rbx
  __int64 v32; // rdi
  __m128 *v33; // rax
  __m128 v34; // xmm1
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  double v37; // xmm0_8
  double v38; // xmm0_8
  __m128 v39; // xmm0
  __m128 v40; // xmm10
  __m128 v41; // xmm6
  __m128 v42; // xmm0
  __m128 v43; // xmm2
  __m128 v44; // xmm0
  double v45; // xmm0_8
  __m128 v46; // xmm0
  double v47; // xmm0_8
  unsigned __int64 v48; // xmm0_8
  __m128 v49; // xmm0
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v52[4]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v53[4]; // [rsp+78h] [rbp-90h] BYREF
  __m128 v54[4]; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v55[4]; // [rsp+F8h] [rbp-10h] BYREF
  __m128 v56[4]; // [rsp+138h] [rbp+30h] BYREF
  __m128 v57[4]; // [rsp+178h] [rbp+70h] BYREF
  __m128 v58[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v59[4]; // [rsp+238h] [rbp+130h] BYREF
  _OWORD v60[4]; // [rsp+278h] [rbp+170h] BYREF
  _OWORD v61[4]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _QWORD v62[3]; // [rsp+2F8h] [rbp+1F0h]
  _QWORD v63[3]; // [rsp+310h] [rbp+208h]

  v7 = *(__m128 *)&a4;
  v51 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  v8 = *(__m128 *)&a3;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v10 = *(_OWORD *)(a1 + 216);
  v59[0] = *(_OWORD *)(a1 + 200);
  v11 = *(_OWORD *)(a1 + 232);
  v59[1] = v10;
  v12 = *(_OWORD *)(a1 + 248);
  v59[2] = v11;
  v13 = *(_OWORD *)(a1 + 264);
  v59[3] = v12;
  v14 = *(_OWORD *)(a1 + 280);
  v60[0] = v13;
  v15 = *(_OWORD *)(a1 + 296);
  v60[1] = v14;
  v16 = *(_OWORD *)(a1 + 312);
  v60[2] = v15;
  v17 = *(__m128 *)(a1 + 136);
  v60[3] = v16;
  v18 = *(__m128 *)(a1 + 152);
  v53[0] = v17;
  v19 = *(__m128 *)(a1 + 168);
  v53[1] = v18;
  v20 = *(__m128 *)(a1 + 184);
  v53[2] = v19;
  v53[3] = v20;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v51);
  v21 = _mm_xor_ps(*(__m128 *)&a4, (__m128)_xmm);
  v22 = (__m128)_xmm;
  v61[1] = DirectX::g_XMIdentityR1;
  v61[3] = DirectX::g_XMIdentityR3;
  v62[0] = v59;
  v62[1] = v60;
  v62[2] = v61;
  v61[0] = DirectX::g_XMIdentityR0;
  v63[0] = a6 + 64;
  v61[2] = DirectX::g_XMIdentityR2;
  v63[1] = a6 + 128;
  v21.m128_f32[0] = v21.m128_f32[0] * 0.5;
  v63[2] = a6;
  v7.m128_f32[0] = *(float *)&a4 * 0.5;
  v23 = *a5;
  v54[1] = a5[1];
  v24 = a5[3];
  v54[0] = v23;
  v25 = a5[2];
  v54[3] = v24;
  v26 = v8;
  v8.m128_f32[0] = v8.m128_f32[0] * 0.5;
  v27 = _mm_xor_ps(v26, (__m128)_xmm);
  v27.m128_f32[0] = v27.m128_f32[0] * 0.5;
  v54[2] = v25;
  v28 = _mm_movelh_ps(_mm_unpacklo_ps(v27, v21), (__m128)_xmm);
  v29 = a2 & 1;
  v30 = _mm_movelh_ps(_mm_unpacklo_ps(v8, v7), (__m128)_xmm);
  v31 = 0LL;
  v32 = 3LL;
  do
  {
    v33 = (__m128 *)v62[v31];
    v34 = v33[1];
    v35 = v33[2];
    v36 = v33[3];
    *(_QWORD *)&v37 = DirectX::XMMatrixInverse(
                        0LL,
                        *(double *)v34.m128_u64,
                        *(double *)v35.m128_u64,
                        *(double *)v36.m128_u64).m128_u64[0];
    *(_QWORD *)&v38 = DirectX::XMMatrixMultiply(v37, v53).m128_u64[0];
    v39 = DirectX::XMMatrixMultiply(v38, v54);
    v55[0] = (__m128)DirectX::g_XMIdentityR0;
    v55[1] = (__m128)DirectX::g_XMIdentityR1;
    v55[2] = (__m128)DirectX::g_XMIdentityR2;
    v40 = _mm_mul_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_add_ps(_mm_mul_ps((__m128)0LL, v35), _mm_mul_ps(v22, v36)), _mm_mul_ps((__m128)0LL, v34)),
              _mm_mul_ps((__m128)0LL, v39)),
            (__m128)_xmm);
    v41 = _mm_movelh_ps(_mm_unpacklo_ps(v40, _mm_shuffle_ps(v40, v40, 85)), (__m128)_xmm);
    v42 = (__m128)LODWORD(FLOAT_N1_0);
    v55[3] = v41;
    v42.m128_f32[0] = (float)(-1.0 / _mm_shuffle_ps(v40, v40, 170).m128_f32[0]) * 4.0;
    v43 = _mm_unpacklo_ps((__m128)_xmm, _mm_unpacklo_ps((__m128)0LL, v42));
    v44 = DirectX::XMMatrixMultiply(*(double *)&_xmm, v55);
    v56[3] = (__m128)_xmm;
    v56[2] = v43;
    v56[1] = (__m128)_xmm;
    v56[0] = v44;
    *(_QWORD *)&v45 = DirectX::XMMatrixInverse(0LL, DirectX::g_XMIdentityR1, 0.0, *(double *)v41.m128_u64).m128_u64[0];
    v46 = DirectX::XMMatrixMultiply(v45, v56);
    v57[3] = v41;
    v52[2] = (__m128)_xmm;
    v57[2] = (__m128)DirectX::g_XMIdentityR2;
    v57[1] = (__m128)DirectX::g_XMIdentityR1;
    v57[0] = v46;
    v47 = DirectX::g_XMIdentityR0;
    v52[3] = (__m128)DirectX::g_XMIdentityR3;
    v58[0] = (__m128)DirectX::g_XMIdentityR0;
    v58[1] = (__m128)DirectX::g_XMIdentityR1;
    v58[2] = (__m128)DirectX::g_XMIdentityR2;
    v58[3] = v30;
    v52[0] = (__m128)_xmm;
    v52[1] = (__m128)_xmm;
    if ( v29 )
      *(_QWORD *)&v47 = DirectX::XMMatrixMultiply(DirectX::g_XMIdentityR0, v52).m128_u64[0];
    v48 = DirectX::XMMatrixMultiply(v47, v57).m128_u64[0];
    if ( v29 )
      v48 = DirectX::XMMatrixMultiply(*(double *)&v48, v52).m128_u64[0];
    v49 = DirectX::XMMatrixMultiply(*(double *)&v48, v58);
    result = v63[v31++];
    v22 = (__m128)_xmm;
    *(__m128 *)result = v49;
    *(_OWORD *)(result + 16) = DirectX::g_XMIdentityR1;
    *(_OWORD *)(result + 32) = DirectX::g_XMIdentityR2;
    *(__m128 *)(result + 48) = v28;
    --v32;
  }
  while ( v32 );
  return result;
}
