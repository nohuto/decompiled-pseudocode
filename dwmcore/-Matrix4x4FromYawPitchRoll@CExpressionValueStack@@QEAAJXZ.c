/*
 * XREFs of ?Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x18025C95C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18027A59C (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18027B018 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromYawPitchRoll(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  float *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float *v10; // r15
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v18; // [rsp+28h] [rbp-19h]
  _BYTE v19[16]; // [rsp+38h] [rbp-9h] BYREF
  _OWORD v20[5]; // [rsp+48h] [rbp+7h] BYREF

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
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v10 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      v10 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v11);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    if ( *((_DWORD *)v7 + 18) == 18 )
    {
      if ( *((_DWORD *)v10 + 18) == 18 )
      {
        if ( *((_DWORD *)v5 + 18) == 18 )
        {
          D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)v19, *v7, *v10, *v5);
          D2DMatrixRotationQuaternion((struct D2DMatrix *)v20, (const struct D2DQuaternion *)v19);
          v13 = v20[0];
          v14 = v20[1];
          *((_DWORD *)v7 + 18) = 265;
          *(_OWORD *)v7 = v13;
          *((_BYTE *)v7 + 76) = 1;
          v15 = v20[2];
          *((_OWORD *)v7 + 1) = v14;
          v16 = v20[3];
          *((_OWORD *)v7 + 2) = v15;
          *((_OWORD *)v7 + 3) = v16;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v18 = 6890;
      }
      else
      {
        v18 = 6889;
      }
    }
    else
    {
      v18 = 6888;
    }
  }
  else
  {
    v18 = 6881;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v18,
    0LL);
  return v3;
}
