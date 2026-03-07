__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // r14d
  __int64 v4; // rax
  void *v5; // rdi
  CExpressionValue *v6; // rax
  void *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  __int32 v17; // eax
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  unsigned int v29; // [rsp+28h] [rbp-49h]
  __m128i v30; // [rsp+38h] [rbp-39h] BYREF
  __m128i v31; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v32[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v33[80]; // [rsp+68h] [rbp-9h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = &CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (void *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v33);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v33);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (void *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v33);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v33);
    }
    v10 = *((_DWORD *)v7 + 18);
    v3 = 0;
    if ( v10 != *((_DWORD *)v5 + 18) )
    {
      v29 = 1258;
      goto LABEL_3;
    }
    if ( v10 == 18 )
    {
      if ( *(float *)v5 == 0.0 )
      {
        v29 = 1271;
        goto LABEL_3;
      }
      v27 = *(float *)v7 / *(float *)v5;
      *((_DWORD *)v7 + 18) = 18;
    }
    else
    {
      if ( v10 != 35 )
      {
        if ( v10 == 52 )
        {
          v17 = *((_DWORD *)v7 + 2);
          v30.m128i_i64[0] = *(_QWORD *)v7;
          v31.m128i_i64[0] = *(_QWORD *)v5;
          v18 = *(float *)v31.m128i_i32;
          v30.m128i_i32[2] = v17;
          v31.m128i_i32[2] = *((_DWORD *)v5 + 2);
          if ( *(float *)v31.m128i_i32 == 0.0
            || *(float *)&v31.m128i_i32[1] == 0.0
            || (v19 = *(float *)&v31.m128i_i32[2], *(float *)&v31.m128i_i32[2] == 0.0) )
          {
            v29 = 1311;
            goto LABEL_3;
          }
          v20 = *(float *)v30.m128i_i32;
          v21 = *(float *)&v30.m128i_i32[1] / *(float *)&v31.m128i_i32[1];
          *((_DWORD *)v7 + 18) = 52;
          v22 = *(float *)&v30.m128i_i32[2] / v19;
          *(float *)v7 = v20 / v18;
          *((float *)v7 + 1) = v21;
          *((float *)v7 + 2) = v22;
        }
        else
        {
          if ( v10 == 69 )
          {
            v12 = _mm_loadu_si128((const __m128i *)v5);
            v30 = *(__m128i *)v7;
            v31 = v12;
            if ( *(float *)v12.m128i_i32 == 0.0
              || (v13 = *(float *)&v31.m128i_i32[1], *(float *)&v31.m128i_i32[1] == 0.0)
              || (v14 = *(float *)&v31.m128i_i32[2], *(float *)&v31.m128i_i32[2] == 0.0)
              || (v15 = *(float *)&v31.m128i_i32[3], *(float *)&v31.m128i_i32[3] == 0.0) )
            {
              v29 = 1334;
              goto LABEL_3;
            }
            v16 = *(float *)v30.m128i_i32 / *(float *)v12.m128i_i32;
            *((_DWORD *)v7 + 18) = 69;
            *(float *)v31.m128i_i32 = v16;
            *(float *)&v31.m128i_i32[1] = *(float *)&v30.m128i_i32[1] / v13;
            *(float *)&v31.m128i_i32[2] = *(float *)&v30.m128i_i32[2] / v14;
            *(float *)&v31.m128i_i32[3] = *(float *)&v30.m128i_i32[3] / v15;
            v11 = v31;
          }
          else
          {
            if ( v10 != 71 )
            {
              v29 = 1386;
              goto LABEL_3;
            }
            v31 = *(__m128i *)v7;
            v30 = _mm_loadu_si128((const __m128i *)v5);
            if ( *(float *)v30.m128i_i32 == 0.0
              || *(float *)&v30.m128i_i32[1] == 0.0
              || *(float *)&v30.m128i_i32[2] == 0.0
              || *(float *)&v30.m128i_i32[3] == 0.0 )
            {
              v29 = 1358;
              goto LABEL_3;
            }
            D3DXQuaternionInverse((struct D2DQuaternion *)v32, (const struct D2DQuaternion *)&v30);
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v30,
              (const struct D2DQuaternion *)v32,
              (const struct D2DQuaternion *)&v31);
            v11 = v30;
            *((_DWORD *)v7 + 18) = 71;
          }
          *(__m128i *)v7 = v11;
        }
LABEL_44:
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v3;
      }
      v23 = *(float *)v5;
      v24 = *(float *)v7;
      v25 = *((float *)v7 + 1);
      v26 = *((float *)v5 + 1);
      if ( *(float *)v5 == 0.0 || v26 == 0.0 )
      {
        v29 = 1290;
        goto LABEL_3;
      }
      *((_DWORD *)v7 + 18) = 35;
      v27 = v24 / v23;
      *((float *)v7 + 1) = v25 / v26;
    }
    *(float *)v7 = v27;
    goto LABEL_44;
  }
  v29 = 1235;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v29,
    0LL);
  return v3;
}
