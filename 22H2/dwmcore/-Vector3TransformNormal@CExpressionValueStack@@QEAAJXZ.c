/*
 * XREFs of ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x18020234C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021E040 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3TransformNormal(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  _OWORD *v6; // rbx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rsi
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
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = &CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (_OWORD *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    }
    if ( v8[18] == 52 )
    {
      if ( *((_DWORD *)v6 + 18) == 265 )
      {
        v10 = v6[1];
        v11 = v8[2];
        v18 = *(_QWORD *)v8;
        v12 = *v6;
        v19 = v11;
        v22[1] = v10;
        v13 = v6[3];
        v22[0] = v12;
        v14 = v6[2];
        v22[3] = v13;
        v22[2] = v14;
        D3DXVec3TransformNormal(
          (struct D2DVector3 *)&v20,
          (const struct D2DVector3 *)&v18,
          (const struct D2DMatrix *)v22);
        *(_QWORD *)&v14 = v20;
        v15 = v21;
        v8[18] = 52;
        *(_QWORD *)v8 = v14;
        v8[2] = v15;
        *((_BYTE *)v8 + 76) = 1;
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
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17,
    0LL);
  return v3;
}
