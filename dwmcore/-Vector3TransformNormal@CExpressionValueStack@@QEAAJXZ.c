/*
 * XREFs of ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x18025F4EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18027B7C0 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3TransformNormal(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  _OWORD *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // eax
  unsigned int v17; // [rsp+28h] [rbp-29h]
  __int64 v18; // [rsp+38h] [rbp-19h] BYREF
  int v19; // [rsp+40h] [rbp-11h]
  __int64 v20; // [rsp+48h] [rbp-9h] BYREF
  int v21; // [rsp+50h] [rbp-1h]
  _OWORD v22[5]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = &CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (_OWORD *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    }
    if ( v7[18] == 52 )
    {
      if ( *((_DWORD *)v5 + 18) == 265 )
      {
        v10 = v5[1];
        v11 = v7[2];
        v18 = *(_QWORD *)v7;
        v12 = *v5;
        v19 = v11;
        v22[1] = v10;
        v13 = v5[3];
        v22[0] = v12;
        v14 = v5[2];
        v22[3] = v13;
        v22[2] = v14;
        D3DXVec3TransformNormal(
          (struct D2DVector3 *)&v20,
          (const struct D2DVector3 *)&v18,
          (const struct D2DMatrix *)v22);
        *(_QWORD *)&v14 = v20;
        v15 = v21;
        v7[18] = 52;
        *(_QWORD *)v7 = v14;
        v7[2] = v15;
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return 0;
      }
      v17 = 7616;
    }
    else
    {
      v17 = 7615;
    }
  }
  else
  {
    v17 = 7609;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17,
    0LL);
  return v3;
}
