/*
 * XREFs of ?QuaternionFromRotationMatrix@CExpressionValueStack@@QEAAJXZ @ 0x18025DFB0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180006F20 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromRotationMatrix(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _OWORD *v5; // rbx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v13[5]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (_OWORD *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
      v5 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    }
    if ( *((_DWORD *)v5 + 18) == 265 )
    {
      v6 = v5[1];
      v13[0] = *v5;
      v7 = v5[2];
      v13[1] = v6;
      v8 = v5[3];
      v13[2] = v7;
      v13[3] = v8;
      D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v12, (const struct D2DMatrix *)v13);
      v9 = v12;
      *((_DWORD *)v5 + 18) = 71;
      *((_BYTE *)v5 + 76) = 1;
      *v5 = v9;
      return 0;
    }
    v11 = 7061;
  }
  else
  {
    v11 = 7056;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v11,
    0LL);
  return v2;
}
