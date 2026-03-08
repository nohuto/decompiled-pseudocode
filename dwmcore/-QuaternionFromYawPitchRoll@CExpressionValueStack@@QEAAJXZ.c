/*
 * XREFs of ?QuaternionFromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x18025E0C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18027B018 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromYawPitchRoll(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  float *v7; // rbp
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float *v10; // r14
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int128 v13; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-78h]
  __int128 v16; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 3 )
  {
    v4 = v1 - 3;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v10 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
      v10 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v11);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    }
    if ( *((_DWORD *)v7 + 18) == 18 )
    {
      if ( *((_DWORD *)v10 + 18) == 18 )
      {
        if ( *((_DWORD *)v5 + 18) == 18 )
        {
          D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v16, *v7, *v10, *v5);
          v13 = v16;
          *((_DWORD *)v7 + 18) = 71;
          *((_BYTE *)v7 + 76) = 1;
          *(_OWORD *)v7 = v13;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v15 = 7110;
      }
      else
      {
        v15 = 7109;
      }
    }
    else
    {
      v15 = 7108;
    }
  }
  else
  {
    v15 = 7101;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v15,
    0LL);
  return v3;
}
