/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x1801FBC44
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18021D858 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebp
  unsigned int v4; // edx
  __int64 v5; // rax
  const struct D2DQuaternion *v6; // rbx
  CExpressionValue *v7; // rax
  const struct D2DQuaternion *v8; // rsi
  CExpressionValue *v9; // rax
  int v10; // eax
  __int128 v11; // xmm0
  unsigned int v13; // [rsp+20h] [rbp-78h]
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[80]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    v10 = *((_DWORD *)v8 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v6 + 18) )
    {
      if ( v10 == 71 )
      {
        D3DXQuaternionMultiply((struct D2DQuaternion *)&v14, v8, v6);
        v11 = v14;
        *((_DWORD *)v8 + 18) = 71;
        *((_BYTE *)v8 + 76) = 1;
        *(_OWORD *)v8 = v11;
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
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v3;
}
