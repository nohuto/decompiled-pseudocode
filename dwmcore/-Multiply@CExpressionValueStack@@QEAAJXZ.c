__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // r15d
  __int64 *v4; // rdi
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  void *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v12; // xmm1
  int v13; // r9d
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  float v16; // xmm10_4
  float v17; // xmm9_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  __m128 v27; // xmm4
  __m128 v28; // xmm3
  float v29; // eax
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  int v36; // eax
  unsigned int v37; // ecx
  __int128 v39; // [rsp+38h] [rbp-89h] BYREF
  __int64 v40; // [rsp+48h] [rbp-79h]
  float v41; // [rsp+50h] [rbp-71h]
  _OWORD v42[5]; // [rsp+58h] [rbp-69h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x434u,
      0LL);
    return v3;
  }
  v3 = 0;
  v4 = (__int64 *)&CExpressionValueStack::s_emptyValue;
  v5 = v1 - 2;
  if ( (unsigned int)v5 < *((_DWORD *)this + 12) )
  {
    v7 = (void *)(*((_QWORD *)this + 3) + 80 * v5);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v4 = (__int64 *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
  }
  v10 = *((_DWORD *)v7 + 18);
  v11 = *((_DWORD *)v4 + 18);
  if ( v10 == v11 )
  {
    if ( v10 == 18 )
    {
      v35 = *(float *)v4 * *(float *)v7;
      *((_DWORD *)v7 + 18) = 18;
      *(float *)v7 = v35;
      goto LABEL_26;
    }
    if ( v10 == 35 )
    {
      v33 = *(float *)v7 * *(float *)v4;
      v34 = *((float *)v7 + 1) * *((float *)v4 + 1);
      *((_DWORD *)v7 + 18) = 35;
      *(float *)v7 = v33;
      *((float *)v7 + 1) = v34;
      goto LABEL_26;
    }
    if ( v10 == 52 )
    {
      v29 = *((float *)v7 + 2);
      *(_QWORD *)&v39 = *(_QWORD *)v7;
      v40 = *v4;
      v30 = *(float *)&v40 * *(float *)&v39;
      *((float *)&v39 + 2) = v29;
      v31 = *((float *)&v40 + 1) * *((float *)&v39 + 1);
      v41 = *((float *)v4 + 2);
      v32 = v41 * v29;
      *((_DWORD *)v7 + 18) = 52;
      *(float *)v7 = v30;
      *((float *)v7 + 1) = v31;
      *((float *)v7 + 2) = v32;
      goto LABEL_26;
    }
    if ( v10 == 69 )
    {
      v27 = (__m128)_mm_loadu_si128((const __m128i *)v4);
      *((_DWORD *)v7 + 18) = 69;
      v28 = (__m128)_mm_loadu_si128((const __m128i *)v7);
      *(float *)&v39 = v27.m128_f32[0] * v28.m128_f32[0];
      *((float *)&v39 + 3) = _mm_shuffle_ps(v27, v27, 255).m128_f32[0] * _mm_shuffle_ps(v28, v28, 255).m128_f32[0];
      *((float *)&v39 + 1) = _mm_shuffle_ps(v27, v27, 85).m128_f32[0] * _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
      *((float *)&v39 + 2) = _mm_shuffle_ps(v27, v27, 170).m128_f32[0] * _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
    }
    else
    {
      if ( v10 != 71 )
      {
        if ( v10 == 104 )
        {
          v16 = *((float *)v4 + 2);
          v17 = *(float *)v4;
          v18 = *((float *)v7 + 2);
          v19 = *((float *)v7 + 4);
          v20 = (float)(*((float *)v4 + 1) * *(float *)v7) + (float)(*((float *)v4 + 3) * *((float *)v7 + 1));
          v21 = *((float *)v7 + 3);
          v22 = (float)(v18 * *((float *)v4 + 1)) + (float)(v21 * *((float *)v4 + 3));
          v23 = (float)(v18 * *(float *)v4) + (float)(v21 * v16);
          v24 = *((float *)v7 + 5);
          v25 = (float)((float)(v19 * *((float *)v4 + 1)) + (float)(v24 * *((float *)v4 + 3))) + *((float *)v4 + 5);
          v26 = (float)((float)(v19 * *(float *)v4) + (float)(v24 * v16)) + *((float *)v4 + 4);
          *((_DWORD *)v7 + 18) = 104;
          *(float *)v7 = (float)(v17 * *(float *)v7) + (float)(v16 * *((float *)v7 + 1));
          *((float *)v7 + 1) = v20;
          *((float *)v7 + 2) = v23;
          *((float *)v7 + 3) = v22;
          *((float *)v7 + 4) = v26;
          *((float *)v7 + 5) = v25;
        }
        else
        {
          if ( v10 != 265 )
          {
            v3 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              v11,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x49Du,
              0LL);
            return v3;
          }
          D2DMatrixMultiply((struct D2DMatrix *)v42, (const struct D2DMatrix *)v7, (const struct D2DMatrix *)v4);
          v12 = v42[1];
          *(_OWORD *)v7 = v42[0];
          *((_DWORD *)v7 + 18) = v13;
          v14 = v42[2];
          *((_OWORD *)v7 + 1) = v12;
          v15 = v42[3];
          *((_OWORD *)v7 + 2) = v14;
          *((_OWORD *)v7 + 3) = v15;
        }
LABEL_26:
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v3;
      }
      D3DXQuaternionMultiply(
        (struct D2DQuaternion *)&v39,
        (const struct D2DQuaternion *)v4,
        (const struct D2DQuaternion *)v7);
      *((_DWORD *)v7 + 18) = 71;
    }
    *(_OWORD *)v7 = v39;
    goto LABEL_26;
  }
  if ( v11 == 18 || v10 == 18 )
  {
    v36 = CExpressionValueStack::Scale(this);
    v3 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        v37,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v36,
        0x4ACu,
        0LL);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v11,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x4B6u,
      0LL);
  }
  return v3;
}
