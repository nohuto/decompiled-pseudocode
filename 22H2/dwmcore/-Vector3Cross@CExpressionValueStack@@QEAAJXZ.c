/*
 * XREFs of ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x180201EBC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18021DE24 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Cross(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rsi
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

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = &CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    }
    if ( v8[18] == 52 )
    {
      if ( v6[18] == 52 )
      {
        v10 = v8[2];
        v19 = *(_QWORD *)v8;
        v11 = *(_QWORD *)v6;
        v20 = v10;
        v12 = v6[2];
        v17 = v11;
        v18 = v12;
        D3DXVec3Cross((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DVector3 *)&v17);
        v13 = v21;
        v14 = v22;
        v8[18] = 52;
        *(_QWORD *)v8 = v13;
        v8[2] = v14;
        *((_BYTE *)v8 + 76) = 1;
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
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16,
    0LL);
  return v3;
}
