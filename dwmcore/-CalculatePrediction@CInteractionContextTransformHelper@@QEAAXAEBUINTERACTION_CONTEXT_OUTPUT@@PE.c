/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1802B6CA8
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180281FF4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _anonymous_namespace_::operator_ @ 0x1802B6C40 (_anonymous_namespace_--operator_.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x1802B75E4 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const struct MANIPULATION_TRANSFORM *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  float *v10; // r8
  const struct MANIPULATION_TRANSFORM *v12; // rax
  __m128 v13; // xmm14
  int v14; // r14d
  float *v15; // rax
  float *v16; // r8
  _DWORD *v17; // r9
  __int128 *v18; // r10
  __m128 v19; // xmm3
  int v20; // r11d
  float v21; // xmm15_4
  __int64 v22; // xmm1_8
  float v23; // xmm4_4
  float v24; // xmm15_4
  float v25; // xmm12_4
  float v26; // xmm9_4
  float v27; // xmm13_4
  __m128i v28; // xmm7
  int v29; // eax
  float v30; // xmm3_4
  __int128 v31; // xmm0
  float v32; // xmm8_4
  float v33; // xmm7_4
  char v34; // r11
  float v35; // xmm4_4
  __int128 v36; // xmm0
  __int64 v37; // r10
  __int128 v38; // xmm0
  __int64 v39; // r10
  __int128 v40; // xmm0
  double v41; // xmm2_8
  float v42; // xmm5_4
  float v43; // xmm9_4
  float v44; // xmm3_4
  __int64 v45; // xmm1_8
  __int128 v46; // xmm0
  float v47; // xmm1_4
  float v48; // [rsp+38h] [rbp-C1h] BYREF
  float v49; // [rsp+3Ch] [rbp-BDh] BYREF
  float v50; // [rsp+40h] [rbp-B9h] BYREF
  float v51; // [rsp+44h] [rbp-B5h] BYREF
  float v52; // [rsp+48h] [rbp-B1h] BYREF
  float v53; // [rsp+4Ch] [rbp-ADh] BYREF
  _QWORD v54[3]; // [rsp+50h] [rbp-A9h] BYREF
  _QWORD v55[3]; // [rsp+68h] [rbp-91h] BYREF
  __int64 v56; // [rsp+80h] [rbp-79h]

  v10 = (float *)((char *)this + 176);
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    *v10 = 0.0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 46) = 1065353216;
    *((_DWORD *)this + 47) = 0;
    *((_DWORD *)this + 48) = 0;
    *((_BYTE *)this + 196) = 0;
    *((_BYTE *)this + 197) = a5 == 1;
  }
  else
  {
    *((_BYTE *)this + 197) &= a5 == 1;
  }
  v12 = (CInteractionContextTransformHelper *)((char *)this + 176);
  if ( a3 )
    v12 = a3;
  v13 = *(__m128 *)v12;
  v14 = *((_DWORD *)v12 + 4);
  LODWORD(v55[0]) = v14;
  *(__m128 *)&v54[1] = v13;
  v15 = anonymous_namespace_::operator_((float *)&v55[1], (float *)&v54[1], v10);
  v19 = *(__m128 *)v15;
  *(float *)&v56 = v15[4];
  *a8 = v19.m128_f32[0] + a6;
  *a9 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0] + a7;
  if ( *(_DWORD *)a2 == v20 && *((_DWORD *)a2 + 2) == 2 && v17 )
  {
    v21 = *((float *)a2 + 10);
    v22 = *((_QWORD *)v18 + 2);
    v23 = v21 + v13.m128_f32[0];
    v24 = v21 - *((float *)a2 + 5);
    v25 = *v16;
    v26 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v27 = *((float *)v18 + 45);
    v28 = _mm_cvtsi32_si128(v17[2] - *v17);
    v29 = v17[3] - v17[1];
    v30 = *((float *)a2 + 11) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    v48 = v24;
    v31 = *v18;
    v32 = (float)v29 - 1.0;
    v33 = _mm_cvtepi32_ps(v28).m128_f32[0] - 1.0;
    *(float *)v54 = v26;
    v49 = v26;
    v50 = v25;
    v51 = v27;
    v52 = v23;
    v53 = v30;
    *(_OWORD *)&v55[1] = v31;
    v56 = v22;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v55[1]) )
    {
      v36 = v18[3];
      v56 = *((_QWORD *)v18 + 8);
      *(_OWORD *)&v55[1] = v36;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v55[1],
        v35,
        v30,
        &v52,
        &v53);
      v38 = *(_OWORD *)(v37 + 48);
      v56 = *(_QWORD *)(v37 + 64);
      *(_OWORD *)&v55[1] = v38;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v55[1],
        v24,
        v26,
        &v48,
        &v49);
      v40 = *(_OWORD *)(v39 + 48);
      v56 = *(_QWORD *)(v39 + 64);
      *(_OWORD *)&v55[1] = v40;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v55[1],
        v25,
        v27,
        &v50,
        &v51);
      v24 = v48;
      v25 = v50;
      v27 = v51;
      v35 = v52;
      v30 = v53;
      *(float *)v54 = v49;
    }
    v41 = v33;
    if ( !*((_BYTE *)v18 + 197)
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35) & _xmm) <= v41
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & _xmm) <= v32 )
    {
      v34 = 0;
    }
    if ( v34 )
    {
      if ( *((_BYTE *)v18 + 196) )
      {
        *a8 = 0.0;
        *a9 = 0.0;
      }
      else
      {
        v42 = v35;
        v43 = v30;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35) & _xmm) > v41 )
        {
          v35 = v33;
          if ( v42 < 0.0 )
            LODWORD(v35) = LODWORD(v33) ^ _xmm;
          v30 = (float)(v30 * v35) / v42;
        }
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & _xmm) > v32 )
        {
          v30 = v32;
          if ( v43 < 0.0 )
            LODWORD(v30) = LODWORD(v32) ^ _xmm;
          v35 = (float)(v42 * v30) / v43;
        }
        v44 = v30 - (float)(v27 + *(float *)v54);
        *a8 = v35 - (float)(v25 + v24);
        *a9 = v44;
        v45 = *((_QWORD *)v18 + 2);
        *(_OWORD *)&v55[1] = *v18;
        v56 = v45;
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v55[1]) )
        {
          v46 = *(__int128 *)((char *)v18 + 72);
          v47 = *a8;
          v56 = *((_QWORD *)v18 + 11);
          *(_OWORD *)&v55[1] = v46;
          CInteractionContextTransformHelper::TransformDirection(
            (const struct D2D1::Matrix3x2F *)&v55[1],
            v47,
            v44,
            a8,
            a9);
        }
      }
    }
    *((_BYTE *)v18 + 196) = v34;
  }
  v18[11] = (__int128)v13;
  *((_DWORD *)v18 + 48) = v14;
}
