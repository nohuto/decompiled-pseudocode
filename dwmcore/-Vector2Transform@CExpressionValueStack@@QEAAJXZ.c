__int64 __fastcall CExpressionValueStack::Vector2Transform(__int64 this)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __m128 *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  __int32 v10; // eax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  float v13; // xmm4_4
  float v14; // xmm3_4
  __int64 v15; // xmm0_8
  unsigned int v17; // [rsp+20h] [rbp-39h]
  __m128 v18; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-19h]
  _BYTE v20[96]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 < 2 )
  {
    v17 = 7294;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17,
      0LL);
    return v3;
  }
  v4 = v1 - 2;
  v5 = (__m128 *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < *(_DWORD *)(this + 48) )
  {
    v7 = (_DWORD *)(*(_QWORD *)(this + 24) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*(_DWORD *)(v2 + 16) - 1);
  if ( (unsigned int)v8 < *(_DWORD *)(v2 + 48) )
  {
    v5 = (__m128 *)(*(_QWORD *)(v2 + 24) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
  }
  if ( v7[18] != 35 )
  {
    v17 = 7300;
    goto LABEL_3;
  }
  v10 = v5[4].m128_i32[2];
  this = 265LL;
  if ( v10 != 71 && v10 != 104 && v10 != 265 )
  {
    v17 = 7309;
    goto LABEL_3;
  }
  v21 = *(_QWORD *)v7;
  if ( v10 == 104 )
  {
    v11 = *v5;
    v19 = v5[1].m128_u64[0];
    *(float *)&v22 = (float)((float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] * *((float *)&v21 + 1))
                           + (float)(v11.m128_f32[0] * *(float *)&v21))
                   + *(float *)&v19;
    *((float *)&v22 + 1) = (float)((float)(_mm_shuffle_ps(v11, v11, 255).m128_f32[0] * *((float *)&v21 + 1))
                                 + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0] * *(float *)&v21))
                         + *((float *)&v19 + 1);
  }
  else if ( v10 == 265 )
  {
    v12 = v5[3];
    v13 = _mm_shuffle_ps(v5[1], v5[1], 85).m128_f32[0];
    v14 = _mm_shuffle_ps(*v5, *v5, 85).m128_f32[0] * *(float *)&v21;
    *(float *)&v22 = (float)((float)(COERCE_FLOAT(*(_OWORD *)&v5[1]) * *((float *)&v21 + 1))
                           + (float)(COERCE_FLOAT(*v5) * *(float *)&v21))
                   + v12.m128_f32[0];
    *((float *)&v22 + 1) = (float)((float)(v13 * *((float *)&v21 + 1)) + v14) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  }
  else
  {
    v18 = *v5;
    D3DXVec2Transform((struct D2DVector2 *)&v22, (const struct D2DVector2 *)&v21, (const struct D2DQuaternion *)&v18);
  }
  v15 = v22;
  v7[18] = 35;
  *(_QWORD *)v7 = v15;
  *((_BYTE *)v7 + 76) = 1;
  --*(_DWORD *)(v2 + 16);
  return 0;
}
