__int64 __fastcall CExpressionValueStack::Vector2TransformNormal(__int64 this)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __m128 *v5; // rdi
  CExpressionValue *v6; // rax
  void *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  __int32 v10; // eax
  float v11; // xmm5_4
  __m128 v12; // xmm1
  float v13; // xmm3_4
  float v14; // xmm4_4
  __m128 v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-88h]
  _BYTE v18[80]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 < 2 )
  {
    v17 = 7371;
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
    v7 = (void *)(*(_QWORD *)(this + 24) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*(_DWORD *)(v2 + 16) - 1);
  if ( (unsigned int)v8 < *(_DWORD *)(v2 + 48) )
  {
    v5 = (__m128 *)(*(_QWORD *)(v2 + 24) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
  }
  if ( *((_DWORD *)v7 + 18) != 35 )
  {
    v17 = 7377;
    goto LABEL_3;
  }
  v10 = v5[4].m128_i32[2];
  this = 265LL;
  if ( v10 != 104 && v10 != 265 )
  {
    v17 = 7385;
    goto LABEL_3;
  }
  v11 = *((float *)v7 + 1);
  if ( v10 == 104 )
  {
    v12 = *v5;
    v13 = (float)(_mm_shuffle_ps(*v5, *v5, 85).m128_f32[0] * *(float *)v7)
        + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * v11);
    v14 = (float)(COERCE_FLOAT(*v5) * *(float *)v7) + (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * v11);
  }
  else
  {
    v15 = v5[1];
    v13 = (float)(_mm_shuffle_ps(*v5, *v5, 85).m128_f32[0] * *(float *)v7)
        + (float)(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] * v11);
    v14 = (float)(COERCE_FLOAT(*v5) * *(float *)v7) + (float)(v15.m128_f32[0] * v11);
  }
  *((_DWORD *)v7 + 18) = 35;
  *(float *)v7 = v14;
  *((float *)v7 + 1) = v13;
  *((_BYTE *)v7 + 76) = 1;
  --*(_DWORD *)(v2 + 16);
  return 0;
}
