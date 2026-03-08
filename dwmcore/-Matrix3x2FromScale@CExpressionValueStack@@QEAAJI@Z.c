/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1800F2B30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  float *v7; // rbx
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  __int64 v11; // rax
  float *v12; // rbx
  CExpressionValue *v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  CExpressionValue *v16; // rax
  _DWORD *v17; // rax
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  unsigned int v29; // ebx
  __int64 v31; // rax
  void *v32; // rbx
  CExpressionValue *v33; // rax
  __int64 v34; // rax
  CExpressionValue *v35; // rax
  float *v36; // r12
  __int64 v37; // rax
  CExpressionValue *v38; // rax
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  unsigned int v43; // [rsp+20h] [rbp-60h]
  _BYTE v44[80]; // [rsp+30h] [rbp-50h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 >= a2 )
  {
    if ( a2 == 1 )
    {
      v5 = v2 - 1;
      if ( (unsigned int)v5 < *((_DWORD *)this + 12) )
      {
        v7 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
      }
      else
      {
        v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
        v7 = (float *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
      }
      if ( *((_DWORD *)v7 + 18) == 18 )
      {
        v8 = *v7;
        *v7 = *v7;
        *((_DWORD *)v7 + 18) = 104;
        v7[1] = 0.0;
        v7[2] = 0.0;
        v7[3] = v8;
        v7[4] = 0.0;
        v7[5] = 0.0;
        *((_BYTE *)v7 + 76) = 1;
LABEL_46:
        *((_DWORD *)this + 4) += 1 - a2;
        return 0;
      }
      if ( *((_DWORD *)v7 + 18) == 35 )
      {
        v9 = *v7;
        v10 = v7[1];
        *((_DWORD *)v7 + 18) = 104;
        *v7 = v9;
        v7[1] = 0.0;
        v7[2] = 0.0;
        v7[3] = v10;
        v7[4] = 0.0 - (float)(v9 * 0.0);
        v7[5] = 0.0 - (float)(v10 * 0.0);
        *((_BYTE *)v7 + 76) = 1;
        goto LABEL_46;
      }
LABEL_28:
      v43 = 5926;
      goto LABEL_29;
    }
    if ( a2 != 2 )
    {
      if ( a2 != 3 )
        goto LABEL_28;
      v31 = v2 - 3;
      v32 = &CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v31 < *((_DWORD *)this + 12) )
      {
        v14 = (void *)(*((_QWORD *)this + 3) + 80 * v31);
      }
      else
      {
        v33 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v33);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
        v14 = &CExpressionValueStack::s_emptyValue;
      }
      v34 = (unsigned int)(*((_DWORD *)this + 4) - 2);
      if ( (unsigned int)v34 < *((_DWORD *)this + 12) )
      {
        v36 = (float *)(*((_QWORD *)this + 3) + 80 * v34);
      }
      else
      {
        v35 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v35);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
        v36 = (float *)&CExpressionValueStack::s_emptyValue;
      }
      v37 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( (unsigned int)v37 < *((_DWORD *)this + 12) )
      {
        v32 = (void *)(*((_QWORD *)this + 3) + 80 * v37);
      }
      else
      {
        v38 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v38);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
      }
      if ( *((_DWORD *)v14 + 18) != 18 || *((_DWORD *)v36 + 18) != 18 || *((_DWORD *)v32 + 18) != 35 )
        goto LABEL_28;
      v39 = *(float *)v32;
      v40 = *((float *)v32 + 1);
      v41 = *(float *)v14;
      v42 = *v36;
      *((_DWORD *)v14 + 18) = 104;
      *(float *)v14 = v41;
      *((_DWORD *)v14 + 1) = 0;
      *((_DWORD *)v14 + 2) = 0;
      *((float *)v14 + 3) = v42;
      *((float *)v14 + 4) = v39 - (float)(v41 * v39);
      *((float *)v14 + 5) = v40 - (float)(v42 * v40);
LABEL_45:
      *((_BYTE *)v14 + 76) = 1;
      goto LABEL_46;
    }
    v11 = v2 - 2;
    v12 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
    {
      v14 = (void *)(*((_QWORD *)this + 3) + 80 * v11);
    }
    else
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
      v14 = &CExpressionValueStack::s_emptyValue;
    }
    v15 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v15 < *((_DWORD *)this + 12) )
    {
      v12 = (float *)(*((_QWORD *)this + 3) + 80 * v15);
    }
    else
    {
      v16 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v16);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
    }
    v17 = v12 + 18;
    if ( *((_DWORD *)v14 + 18) == 18 )
    {
      if ( *v17 == 18 )
      {
        v18 = *(float *)v14;
        v19 = *v12;
        v20 = *(float *)v14;
        *((_DWORD *)v14 + 18) = 104;
        *(float *)v14 = v18;
        *((_DWORD *)v14 + 1) = 0;
        *((_DWORD *)v14 + 2) = 0;
        *((float *)v14 + 3) = v19;
        *((float *)v14 + 4) = 0.0 - (float)(v20 * 0.0);
        v21 = 0.0 - (float)(v19 * 0.0);
LABEL_21:
        *((float *)v14 + 5) = v21;
        goto LABEL_45;
      }
      if ( *v17 == 35 )
      {
        v22 = *(float *)v14;
        v23 = *v12;
        v24 = v12[1];
        *((_DWORD *)v14 + 18) = 104;
        *(float *)v14 = v22;
        *((_DWORD *)v14 + 1) = 0;
        *((_DWORD *)v14 + 2) = 0;
        *((float *)v14 + 3) = v22;
        v21 = v24 * (float)(1.0 - v22);
        *((float *)v14 + 4) = v23 * (float)(1.0 - v22);
        goto LABEL_21;
      }
    }
    if ( *((_DWORD *)v14 + 18) == 35 && *v17 == 35 )
    {
      v25 = *v12;
      v26 = v12[1];
      v27 = *(float *)v14;
      v28 = *((float *)v14 + 1);
      *((_DWORD *)v14 + 18) = 104;
      *(float *)v14 = v27;
      *((_DWORD *)v14 + 1) = 0;
      *((_DWORD *)v14 + 2) = 0;
      *((float *)v14 + 3) = v28;
      *((float *)v14 + 4) = v25 - (float)(v27 * v25);
      *((float *)v14 + 5) = v26 - (float)(v28 * v26);
      *((_BYTE *)v14 + 76) = 1;
      goto LABEL_46;
    }
    goto LABEL_28;
  }
  v43 = 5829;
LABEL_29:
  v29 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v43,
    0LL);
  return v29;
}
