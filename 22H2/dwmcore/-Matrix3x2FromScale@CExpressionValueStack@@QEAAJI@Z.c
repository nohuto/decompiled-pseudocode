/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1800D4928
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  char v3; // r13
  __int64 v4; // rcx
  unsigned int v6; // ebx
  CExpressionValue *v7; // rax
  unsigned int *v8; // rbx
  float v10; // xmm2_4
  float v11; // xmm3_4
  unsigned int v12; // edx
  __int64 v13; // rax
  float *v14; // rbx
  CExpressionValue *v15; // rax
  float *v16; // rdi
  CExpressionValue *v17; // rax
  float v18; // xmm2_4
  float v19; // xmm4_4
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  float v22; // xmm3_4
  unsigned int v23; // edx
  __int64 v24; // rax
  CExpressionValue *v25; // rax
  __int64 v26; // rax
  CExpressionValue *v27; // rax
  float *v28; // r15
  CExpressionValue *v29; // rax
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm2_4
  unsigned int v33; // [rsp+28h] [rbp-49h]
  __int128 v34; // [rsp+38h] [rbp-39h]
  __int128 v35; // [rsp+38h] [rbp-39h]
  _BYTE v36[80]; // [rsp+58h] [rbp-19h] BYREF

  v3 = 0;
  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 >= a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
        {
          v8 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
          v8 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
        }
        if ( v8[18] == 18 )
        {
          DWORD2(v34) = 0;
          *(_QWORD *)&v34 = *v8;
          HIDWORD(v34) = *v8;
          v8[18] = 104;
          *(_OWORD *)v8 = v34;
          *((_BYTE *)v8 + 76) = 1;
          *((_QWORD *)v8 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          goto LABEL_10;
        }
        if ( v8[18] == 35 )
        {
          v10 = *(float *)v8;
          v11 = *((float *)v8 + 1);
          v8[18] = 104;
          *(float *)v8 = v10;
          v8[1] = 0;
          v8[2] = 0;
          *((float *)v8 + 3) = v11;
          *((float *)v8 + 4) = 0.0 - (float)(v10 * 0.0);
          *((float *)v8 + 5) = 0.0 - (float)(v11 * 0.0);
          *((_BYTE *)v8 + 76) = 1;
LABEL_46:
          v3 = 1;
        }
LABEL_47:
        if ( !v3 )
        {
          v33 = 5926;
          goto LABEL_3;
        }
LABEL_10:
        *((_DWORD *)this + 4) += 1 - a2;
        return 0;
      case 2u:
        v12 = *((_DWORD *)this + 12);
        v13 = (unsigned int)(v4 - 2);
        v14 = (float *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v13 < v12 )
        {
          v16 = (float *)(*((_QWORD *)this + 3) + 80 * v13);
        }
        else
        {
          v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v15);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v16 = (float *)&CExpressionValueStack::s_emptyValue;
          v12 = *((_DWORD *)this + 12);
        }
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < v12 )
        {
          v14 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
        }
        if ( *((_DWORD *)v16 + 18) == 18 )
        {
          if ( *((_DWORD *)v14 + 18) == 18 )
          {
            v18 = *v16;
            v19 = *v14;
            *((_DWORD *)v16 + 18) = 104;
            *v16 = v18;
            v16[1] = 0.0;
            v16[2] = 0.0;
            v16[3] = v19;
            v16[4] = 0.0 - (float)(v18 * 0.0);
            v16[5] = 0.0 - (float)(v19 * 0.0);
LABEL_24:
            *((_BYTE *)v16 + 76) = 1;
            goto LABEL_10;
          }
          if ( *((_DWORD *)v16 + 18) == 18 && *((_DWORD *)v14 + 18) == 35 )
          {
            v20 = (__m128)*(unsigned int *)v14;
            v21 = (__m128)*((unsigned int *)v14 + 1);
            DWORD2(v35) = 0;
            *(_QWORD *)&v35 = *(unsigned int *)v16;
            *((float *)&v35 + 3) = *v16;
            *((_DWORD *)v16 + 18) = 104;
            v20.m128_f32[0] = v20.m128_f32[0] * (float)(1.0 - *((float *)&v35 + 3));
            v21.m128_f32[0] = v21.m128_f32[0] * (float)(1.0 - *((float *)&v35 + 3));
            *(_OWORD *)v16 = v35;
            *((_QWORD *)v16 + 2) = _mm_unpacklo_ps(v20, v21).m128_u64[0];
            goto LABEL_24;
          }
        }
        if ( *((_DWORD *)v16 + 18) != 35 || *((_DWORD *)v14 + 18) != 35 )
          goto LABEL_47;
        v22 = v16[1];
        break;
      case 3u:
        v23 = *((_DWORD *)this + 12);
        v24 = (unsigned int)(v4 - 3);
        v14 = (float *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v24 < v23 )
        {
          v16 = (float *)(*((_QWORD *)this + 3) + 80 * v24);
        }
        else
        {
          v25 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v25);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v16 = (float *)&CExpressionValueStack::s_emptyValue;
          v23 = *((_DWORD *)this + 12);
        }
        v26 = (unsigned int)(v4 - 2);
        if ( (unsigned int)v26 < v23 )
        {
          v28 = (float *)(*((_QWORD *)this + 3) + 80 * v26);
        }
        else
        {
          v27 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v27);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v28 = (float *)&CExpressionValueStack::s_emptyValue;
          v23 = *((_DWORD *)this + 12);
        }
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < v23 )
        {
          v14 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v29 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v29);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
        }
        if ( *((_DWORD *)v16 + 18) != 18 || *((_DWORD *)v28 + 18) != 18 || *((_DWORD *)v14 + 18) != 35 )
          goto LABEL_47;
        v22 = *v28;
        break;
      default:
        goto LABEL_47;
    }
    v30 = *v14;
    v31 = v14[1];
    v32 = *v16;
    *((_DWORD *)v16 + 18) = 104;
    *v16 = v32;
    v16[1] = 0.0;
    v16[2] = 0.0;
    v16[3] = v22;
    v16[4] = v30 - (float)(v32 * v30);
    v16[5] = v31 - (float)(v22 * v31);
    *((_BYTE *)v16 + 76) = 1;
    goto LABEL_46;
  }
  v33 = 5829;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v4,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v33,
    0LL);
  return v6;
}
