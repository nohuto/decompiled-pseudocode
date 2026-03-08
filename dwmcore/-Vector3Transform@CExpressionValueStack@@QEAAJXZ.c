/*
 * XREFs of ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x18025F344
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18027B488 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x18027B530 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Transform(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  CExpressionValueStack *v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  int v15; // eax
  unsigned int v17; // [rsp+28h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  int v19; // [rsp+40h] [rbp-21h]
  __int64 v20; // [rsp+48h] [rbp-19h] BYREF
  int v21; // [rsp+50h] [rbp-11h]
  __int128 v22; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v23[5]; // [rsp+68h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v17 = 7541;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17,
      0LL);
    return v3;
  }
  v4 = v1 - 2;
  v5 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
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
  v8 = (unsigned int)(*((_DWORD *)v2 + 4) - 1);
  if ( (unsigned int)v8 < *((_DWORD *)v2 + 12) )
  {
    v5 = (unsigned int *)(*((_QWORD *)v2 + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
  }
  if ( v7[18] != 52 )
  {
    v17 = 7547;
    goto LABEL_3;
  }
  this = (CExpressionValueStack *)v5[18];
  if ( (_DWORD)this != 71 && (_DWORD)this != 265 )
  {
    v17 = 7555;
    goto LABEL_3;
  }
  v10 = v7[2];
  v18 = *(_QWORD *)v7;
  v19 = v10;
  if ( (_DWORD)this == 265 )
  {
    v11 = *((_OWORD *)v5 + 1);
    v23[0] = *(_OWORD *)v5;
    v12 = *((_OWORD *)v5 + 2);
    v23[1] = v11;
    v13 = *((_OWORD *)v5 + 3);
    v23[2] = v12;
    v23[3] = v13;
    D3DXVec3Transform((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18, (const struct D2DMatrix *)v23);
  }
  else
  {
    v22 = *(_OWORD *)v5;
    D3DXVec3Transform((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18, (const struct D2DQuaternion *)&v22);
  }
  v14 = v20;
  v15 = v21;
  v7[18] = 52;
  *(_QWORD *)v7 = v14;
  v7[2] = v15;
  *((_BYTE *)v7 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return 0;
}
