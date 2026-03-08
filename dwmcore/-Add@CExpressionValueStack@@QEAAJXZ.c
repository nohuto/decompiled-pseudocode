/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x180013C8C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802798D4 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  float *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  _OWORD *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  unsigned int v24; // [rsp+20h] [rbp-88h]
  __int128 v25; // [rsp+30h] [rbp-78h]
  _BYTE v26[80]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    }
    v10 = *((_DWORD *)v7 + 18);
    v3 = 0;
    if ( v10 != *((_DWORD *)v5 + 18) )
    {
      v24 = 878;
      goto LABEL_3;
    }
    switch ( v10 )
    {
      case 18:
        v12 = *v5;
        *((_DWORD *)v7 + 18) = 18;
        break;
      case 35:
        v21 = *v5 + *v7;
        v22 = v5[1] + v7[1];
        *((_DWORD *)v7 + 18) = 35;
        *v7 = v21;
        v7[1] = v22;
        goto LABEL_26;
      case 52:
        v12 = *v5;
        v19 = v5[1] + v7[1];
        v20 = v5[2] + v7[2];
        *((_DWORD *)v7 + 18) = 52;
        v7[1] = v19;
        v7[2] = v20;
        break;
      case 69:
        *(float *)&v25 = *v5 + *v7;
        *(float *)&v17 = v5[2] + v7[2];
        *((float *)&v25 + 1) = v5[1] + v7[1];
        *(float *)&v18 = v5[3] + v7[3];
        *((_DWORD *)v7 + 18) = 69;
        *((_QWORD *)&v25 + 1) = __PAIR64__(v18, v17);
        *(_OWORD *)v7 = v25;
        goto LABEL_26;
      case 104:
        v12 = *v5;
        v13 = v5[2] + v7[2];
        v14 = v5[3] + v7[3];
        v15 = v5[4] + v7[4];
        v16 = v5[5] + v7[5];
        v7[1] = v5[1] + v7[1];
        v7[2] = v13;
        v7[3] = v14;
        v7[4] = v15;
        v7[5] = v16;
        *((_DWORD *)v7 + 18) = 104;
        break;
      case 265:
        v11 = (_OWORD *)D2DMatrix::operator+(v7, v26, v5);
        *((_DWORD *)v7 + 18) = 265;
        *(_OWORD *)v7 = *v11;
        *((_OWORD *)v7 + 1) = v11[1];
        *((_OWORD *)v7 + 2) = v11[2];
        *((_OWORD *)v7 + 3) = v11[3];
LABEL_26:
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v3;
      default:
        v24 = 933;
        goto LABEL_3;
    }
    *v7 = v12 + *v7;
    goto LABEL_26;
  }
  v24 = 850;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v24,
    0LL);
  return v3;
}
