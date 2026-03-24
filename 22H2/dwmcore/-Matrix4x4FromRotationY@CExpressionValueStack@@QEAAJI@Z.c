/*
 * XREFs of ?Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z @ 0x1801FE9A4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18021D22C (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18021D2B0 (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromRotationY(CExpressionValueStack *this, unsigned int a2)
{
  __int64 v4; // rcx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rbx
  CExpressionValue *v13; // rax
  _DWORD *v14; // r14
  CExpressionValue *v15; // rax
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+28h] [rbp-29h]
  __int64 v24; // [rsp+38h] [rbp-19h] BYREF
  int v25; // [rsp+40h] [rbp-11h]
  __int128 v26; // [rsp+48h] [rbp-9h] BYREF
  __int128 v27; // [rsp+58h] [rbp+7h]
  __int128 v28; // [rsp+68h] [rbp+17h]
  __int128 v29; // [rsp+78h] [rbp+27h]

  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 < a2 )
  {
    v23 = 6441;
LABEL_21:
    v21 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v4,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v21;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v10 = *((unsigned int *)this + 12);
      v11 = (unsigned int)(v4 - 2);
      v12 = &CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v11 < (unsigned int)v10 )
      {
        v14 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v11);
      }
      else
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
        LODWORD(v4) = *((_DWORD *)this + 4);
        v14 = &CExpressionValueStack::s_emptyValue;
        v10 = *((unsigned int *)this + 12);
      }
      v4 = (unsigned int)(v4 - 1);
      if ( (unsigned int)v4 < (unsigned int)v10 )
      {
        v12 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
      }
      else
      {
        v15 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
      }
      if ( v14[18] == 18 && v12[18] == 52 )
      {
        v16 = v12[2];
        v24 = *(_QWORD *)v12;
        v25 = v16;
        D2DMatrixRotationY(&v26, v10, &v24);
        v17 = v26;
        v18 = v27;
        v14[18] = 265;
        *(_OWORD *)v14 = v17;
        *((_BYTE *)v14 + 76) = 1;
        v19 = v28;
        *((_OWORD *)v14 + 1) = v18;
        v20 = v29;
        *((_OWORD *)v14 + 2) = v19;
        *((_OWORD *)v14 + 3) = v20;
        goto LABEL_19;
      }
    }
LABEL_20:
    v23 = 6487;
    goto LABEL_21;
  }
  v4 = (unsigned int)(v4 - 1);
  if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
  {
    v6 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)&v26);
    v6 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v26);
  }
  if ( v6[18] != 18 )
    goto LABEL_20;
  D2DMatrixRotationY((struct D2DMatrix *)&v26, *(float *)v6);
  v7 = v27;
  *(_OWORD *)v6 = v26;
  v6[18] = 265;
  v8 = v28;
  *((_OWORD *)v6 + 1) = v7;
  *((_BYTE *)v6 + 76) = 1;
  v9 = v29;
  *((_OWORD *)v6 + 2) = v8;
  *((_OWORD *)v6 + 3) = v9;
LABEL_19:
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
