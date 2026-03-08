/*
 * XREFs of ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x18025F068
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18027B42C (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Cross(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  _DWORD *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  __int64 v11; // xmm0_8
  int v12; // eax
  __int64 v13; // xmm0_8
  int v14; // eax
  unsigned int v16; // [rsp+28h] [rbp-39h]
  __int64 v17; // [rsp+38h] [rbp-29h] BYREF
  int v18; // [rsp+40h] [rbp-21h]
  __int64 v19; // [rsp+48h] [rbp-19h] BYREF
  int v20; // [rsp+50h] [rbp-11h]
  __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  int v22; // [rsp+60h] [rbp-1h]
  _BYTE v23[80]; // [rsp+68h] [rbp+7h] BYREF

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
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    }
    if ( v7[18] == 52 )
    {
      if ( v5[18] == 52 )
      {
        v10 = v7[2];
        v19 = *(_QWORD *)v7;
        v11 = *(_QWORD *)v5;
        v20 = v10;
        v12 = v5[2];
        v17 = v11;
        v18 = v12;
        D3DXVec3Cross((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DVector3 *)&v17);
        v13 = v21;
        v14 = v22;
        v7[18] = 52;
        *(_QWORD *)v7 = v13;
        v7[2] = v14;
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return 0;
      }
      v16 = 7448;
    }
    else
    {
      v16 = 7447;
    }
  }
  else
  {
    v16 = 7441;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16,
    0LL);
  return v3;
}
