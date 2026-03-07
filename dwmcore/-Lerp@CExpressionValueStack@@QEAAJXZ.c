__int64 __fastcall CExpressionValueStack::Lerp(__int64 this)
{
  __int64 v1; // r14
  unsigned int v2; // eax
  __int64 v3; // rax
  _QWORD *v4; // r15
  float *v5; // rsi
  CExpressionValue *v6; // rax
  _OWORD *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  int v13; // eax
  float v14; // xmm8_4
  unsigned int v15; // esi
  __m128 v16; // xmm4
  __m128 v17; // xmm15
  __m128 v18; // xmm1
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __m128 v21; // xmm14
  float v22; // xmm0_4
  float v23; // xmm12_4
  float v24; // xmm13_4
  float v25; // xmm0_4
  float v26; // xmm9_4
  float v27; // xmm11_4
  float v28; // xmm0_4
  float v29; // xmm10_4
  float v30; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm0_4
  __m128 v35; // xmm6
  float v36; // xmm5_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  __m128 v40; // xmm7
  __m128 v41; // xmm6
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  __m128 v48; // xmm5
  __m128 v49; // xmm4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  unsigned int v63; // [rsp+28h] [rbp-E0h]
  __m128 v64; // [rsp+38h] [rbp-D0h]
  __int128 v65; // [rsp+38h] [rbp-D0h]
  float v66; // [rsp+40h] [rbp-C8h]
  __int64 v67; // [rsp+48h] [rbp-C0h]
  float v68; // [rsp+50h] [rbp-B8h]
  __int64 v69; // [rsp+50h] [rbp-B8h]
  float v70; // [rsp+58h] [rbp-B0h]
  __int32 v71; // [rsp+60h] [rbp-A8h]
  __int64 v72; // [rsp+70h] [rbp-98h]
  _BYTE v73[240]; // [rsp+78h] [rbp-90h] BYREF

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( v2 < 3 )
  {
    v63 = 2989;
LABEL_29:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v63,
      0LL);
    return v15;
  }
  v3 = v2 - 3;
  v4 = (_QWORD *)(this + 24);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *(_DWORD *)(this + 48) )
  {
    v7 = (_OWORD *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v73);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v73);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*(_DWORD *)(v1 + 16) - 2);
  if ( (unsigned int)v8 < *(_DWORD *)(v1 + 48) )
  {
    v10 = (_QWORD *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v73);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v73);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*(_DWORD *)(v1 + 16) - 1);
  if ( (unsigned int)v11 < *(_DWORD *)(v1 + 48) )
  {
    v5 = (float *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v73);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v73);
  }
  v13 = *((_DWORD *)v7 + 18);
  v14 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v15 = 0, v13 != *((_DWORD *)v10 + 18)) )
  {
    v63 = 3015;
    goto LABEL_29;
  }
  switch ( v13 )
  {
    case 18:
      v61 = *(float *)v10 - *(float *)v7;
      *((_DWORD *)v7 + 18) = 18;
      *(float *)v7 = (float)(fmaxf(0.0, fminf(v14, 1.0)) * v61) + *(float *)v7;
      break;
    case 35:
      v57 = *(float *)v10 - *(float *)v7;
      v58 = *((float *)v10 + 1) - *((float *)v7 + 1);
      *((_DWORD *)v7 + 18) = 35;
      v59 = fmaxf(0.0, fminf(v14, 1.0));
      v60 = (float)(v58 * v59) + *((float *)v7 + 1);
      *(float *)v7 = (float)(v57 * v59) + *(float *)v7;
      *((float *)v7 + 1) = v60;
      break;
    case 52:
      v69 = *(_QWORD *)v7;
      v54 = COERCE_FLOAT(*v10) - COERCE_FLOAT(*(_QWORD *)v7);
      v55 = fmaxf(0.0, fminf(v14, 1.0));
      v56 = COERCE_FLOAT(HIDWORD(*v10)) - COERCE_FLOAT(HIDWORD(*(_QWORD *)v7));
      v70 = *((float *)v7 + 2);
      v66 = *((float *)v10 + 2);
      *((_DWORD *)v7 + 18) = 52;
      *(float *)v7 = (float)(v54 * v55) + *(float *)&v69;
      *((float *)v7 + 1) = (float)(v56 * v55) + *((float *)&v69 + 1);
      *((float *)v7 + 2) = (float)((float)(v66 - v70) * v55) + v70;
      break;
    case 69:
      v48 = (__m128)_mm_loadu_si128((const __m128i *)v10);
      *((_DWORD *)v7 + 18) = 69;
      v49 = (__m128)_mm_loadu_si128((const __m128i *)v7);
      v50 = fmaxf(0.0, fminf(v14, 1.0));
      *(float *)&v65 = (float)((float)(v48.m128_f32[0] - v49.m128_f32[0]) * v50) + v49.m128_f32[0];
      v51 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
      v52 = (float)((float)(_mm_shuffle_ps(v48, v48, 85).m128_f32[0] - v51) * v50) + v51;
      v53 = _mm_shuffle_ps(v49, v49, 170).m128_f32[0];
      v49.m128_f32[0] = _mm_shuffle_ps(v49, v49, 255).m128_f32[0];
      *((float *)&v65 + 1) = v52;
      *((float *)&v65 + 2) = (float)((float)(_mm_shuffle_ps(v48, v48, 170).m128_f32[0] - v53) * v50) + v53;
      *((float *)&v65 + 3) = (float)((float)(_mm_shuffle_ps(v48, v48, 255).m128_f32[0] - v49.m128_f32[0]) * v50)
                           + v49.m128_f32[0];
      *v7 = v65;
      break;
    case 104:
      v40 = *(__m128 *)v7;
      v41 = *(__m128 *)v10;
      v72 = *((_QWORD *)v7 + 2);
      v67 = v10[2];
      v42 = _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
      v43 = fmaxf(0.0, fminf(v14, 1.0));
      *((_DWORD *)v7 + 18) = 104;
      v44 = (float)((float)(_mm_shuffle_ps(v41, v41, 85).m128_f32[0] - v42) * v43) + v42;
      v45 = _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
      v46 = (float)((float)(_mm_shuffle_ps(v41, v41, 170).m128_f32[0] - v45) * v43) + v45;
      v47 = _mm_shuffle_ps(v40, v40, 255).m128_f32[0];
      *(float *)v7 = (float)((float)(v41.m128_f32[0] - v40.m128_f32[0]) * v43) + v40.m128_f32[0];
      *((float *)v7 + 1) = v44;
      *((float *)v7 + 2) = v46;
      *((float *)v7 + 3) = (float)((float)(_mm_shuffle_ps(v41, v41, 255).m128_f32[0] - v47) * v43) + v47;
      *((float *)v7 + 4) = (float)((float)(*(float *)&v67 - *(float *)&v72) * v43) + *(float *)&v72;
      *((float *)v7 + 5) = (float)((float)(*((float *)&v67 + 1) - *((float *)&v72 + 1)) * v43) + *((float *)&v72 + 1);
      break;
    default:
      this = 265LL;
      if ( v13 != 265 )
      {
        v63 = 3124;
        goto LABEL_29;
      }
      v16 = *(__m128 *)v7;
      v17 = *(__m128 *)v10;
      v18 = *((__m128 *)v7 + 1);
      v19 = *((__m128 *)v10 + 1);
      v20 = *((__m128 *)v7 + 2);
      v21 = *((__m128 *)v7 + 3);
      v64 = *((__m128 *)v10 + 3);
      v22 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
      v23 = fmaxf(0.0, fminf(v14, 1.0));
      v24 = (float)((float)(_mm_shuffle_ps(v17, v17, 85).m128_f32[0] - v22) * v23) + v22;
      v25 = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
      v26 = (float)((float)(v19.m128_f32[0] - v18.m128_f32[0]) * v23) + v18.m128_f32[0];
      v27 = (float)((float)(_mm_shuffle_ps(v17, v17, 170).m128_f32[0] - v25) * v23) + v25;
      v28 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
      v29 = (float)((float)(_mm_shuffle_ps(v17, v17, 255).m128_f32[0] - v28) * v23) + v28;
      v30 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
      v31 = (float)((float)(_mm_shuffle_ps(v19, v19, 85).m128_f32[0] - v30) * v23) + v30;
      v32 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
      v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
      v33 = (float)((float)(_mm_shuffle_ps(v19, v19, 170).m128_f32[0] - v32) * v23) + v32;
      v34 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      v19.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v19, v19, 255).m128_f32[0] - v18.m128_f32[0]) * v23)
                      + v18.m128_f32[0];
      v35 = *((__m128 *)v10 + 2);
      v16.m128_f32[0] = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
      v18.m128_f32[0] = _mm_shuffle_ps(v35, v35, 255).m128_f32[0];
      v71 = v19.m128_i32[0];
      v36 = (float)((float)(_mm_shuffle_ps(v35, v35, 85).m128_f32[0] - v34) * v23) + v34;
      v37 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
      v35.m128_f32[0] = (float)((float)(v35.m128_f32[0] - v20.m128_f32[0]) * v23) + v20.m128_f32[0];
      v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] - v37) * v23) + v37;
      *((_DWORD *)v7 + 18) = 265;
      v38 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      v68 = (float)((float)(v18.m128_f32[0] - v20.m128_f32[0]) * v23) + v20.m128_f32[0];
      v19.m128_f32[0] = (float)((float)(v64.m128_f32[0] - v21.m128_f32[0]) * v23) + v21.m128_f32[0];
      v20.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v64, v64, 85).m128_f32[0] - v38) * v23) + v38;
      v39 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
      v21.m128_f32[0] = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      *(float *)v7 = (float)((float)(v17.m128_f32[0] - COERCE_FLOAT(*v7)) * v23) + COERCE_FLOAT(*v7);
      *((float *)v7 + 1) = v24;
      *((float *)v7 + 2) = v27;
      *((float *)v7 + 3) = v29;
      *((float *)v7 + 4) = v26;
      *((float *)v7 + 5) = v31;
      *((float *)v7 + 6) = v33;
      *((_DWORD *)v7 + 7) = v71;
      *((_DWORD *)v7 + 8) = v35.m128_i32[0];
      *((float *)v7 + 9) = v36;
      *((_DWORD *)v7 + 10) = v16.m128_i32[0];
      *((float *)v7 + 11) = v68;
      *((_DWORD *)v7 + 12) = v19.m128_i32[0];
      *((_DWORD *)v7 + 13) = v20.m128_i32[0];
      *((float *)v7 + 14) = (float)((float)(_mm_shuffle_ps(v64, v64, 170).m128_f32[0] - v39) * v23) + v39;
      *((float *)v7 + 15) = (float)((float)(_mm_shuffle_ps(v64, v64, 255).m128_f32[0] - v21.m128_f32[0]) * v23)
                          + v21.m128_f32[0];
      break;
  }
  *((_BYTE *)v7 + 76) = 1;
  *(_DWORD *)(v1 + 16) -= 2;
  return v15;
}
