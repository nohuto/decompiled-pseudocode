/*
 * XREFs of ?Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x1801FF374
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18021CF8C (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18021DA10 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromYawPitchRoll(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  float *v6; // rbx
  CExpressionValue *v7; // rax
  float *v8; // rsi
  __int64 v9; // rax
  CExpressionValue *v10; // rax
  float *v11; // r14
  CExpressionValue *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v18; // [rsp+28h] [rbp-19h]
  _BYTE v19[16]; // [rsp+38h] [rbp-9h] BYREF
  _OWORD v20[5]; // [rsp+48h] [rbp+7h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 3 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 3);
    v6 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = (unsigned int)(v2 - 2);
    if ( (unsigned int)v9 < v4 )
    {
      v11 = (float *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v11 = (float *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    if ( *((_DWORD *)v8 + 18) == 18 )
    {
      if ( *((_DWORD *)v11 + 18) == 18 )
      {
        if ( *((_DWORD *)v6 + 18) == 18 )
        {
          D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)v19, *v8, *v11, *v6);
          D2DMatrixRotationQuaternion((struct D2DMatrix *)v20, (const struct D2DQuaternion *)v19);
          v13 = v20[0];
          v14 = v20[1];
          *((_DWORD *)v8 + 18) = 265;
          *(_OWORD *)v8 = v13;
          *((_BYTE *)v8 + 76) = 1;
          v15 = v20[2];
          *((_OWORD *)v8 + 1) = v14;
          v16 = v20[3];
          *((_OWORD *)v8 + 2) = v15;
          *((_OWORD *)v8 + 3) = v16;
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
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v18,
    0LL);
  return v3;
}
