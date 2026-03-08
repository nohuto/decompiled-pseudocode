/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x180259740
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18027AE60 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  const struct D2DQuaternion *v5; // rbx
  CExpressionValue *v6; // rax
  const struct D2DQuaternion *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  __int128 v11; // xmm0
  unsigned int v13; // [rsp+20h] [rbp-78h]
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[80]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
      v7 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    v10 = *((_DWORD *)v7 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v5 + 18) )
    {
      if ( v10 == 71 )
      {
        D3DXQuaternionMultiply((struct D2DQuaternion *)&v14, v7, v5);
        v11 = v14;
        *((_DWORD *)v7 + 18) = 71;
        *((_BYTE *)v7 + 76) = 1;
        *(_OWORD *)v7 = v11;
        --*((_DWORD *)this + 4);
        return v3;
      }
      v13 = 4021;
    }
    else
    {
      v13 = 3991;
    }
  }
  else
  {
    v13 = 3968;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v3;
}
