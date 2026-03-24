/*
 * XREFs of ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x180200E98
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x18021DB54 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  const struct D2DQuaternion *v7; // rbp
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  const struct D2DQuaternion *v10; // r14
  CExpressionValue *v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  __int128 v14; // xmm0
  unsigned int v16; // [rsp+20h] [rbp-78h]
  __int128 v17; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[80]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 3 )
  {
    v16 = 3878;
LABEL_18:
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v16,
      0LL);
    return v13;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 3);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
  }
  v12 = *((_DWORD *)v7 + 18);
  if ( *((_DWORD *)v5 + 18) != 18 || (v13 = 0, v12 != *((_DWORD *)v10 + 18)) )
  {
    v16 = 3903;
    goto LABEL_18;
  }
  if ( v12 != 71 )
  {
    v16 = 3935;
    goto LABEL_18;
  }
  D3DXQuaternionSlerp((struct D2DQuaternion *)&v17, v7, v10, *v5);
  v14 = v17;
  *((_DWORD *)v7 + 18) = 71;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v14;
  *((_DWORD *)this + 4) -= 2;
  return v13;
}
