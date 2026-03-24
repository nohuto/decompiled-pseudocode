/*
 * XREFs of ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802021A0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x1801E2528 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021DE80 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Transform(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned int *v6; // rbx
  CExpressionValue *v7; // rax
  _DWORD *v8; // rdi
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

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v17 = 7541;
LABEL_3:
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
  v4 = *((_DWORD *)this + 12);
  v5 = (unsigned int)(v2 - 2);
  v6 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
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
    v6 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
  }
  if ( v8[18] != 52 )
  {
    v17 = 7547;
    goto LABEL_3;
  }
  v2 = v6[18];
  if ( (_DWORD)v2 != 71 && (_DWORD)v2 != 265 )
  {
    v17 = 7555;
    goto LABEL_3;
  }
  v10 = v8[2];
  v18 = *(_QWORD *)v8;
  v19 = v10;
  if ( (_DWORD)v2 == 265 )
  {
    v11 = *((_OWORD *)v6 + 1);
    v23[0] = *(_OWORD *)v6;
    v12 = *((_OWORD *)v6 + 2);
    v23[1] = v11;
    v13 = *((_OWORD *)v6 + 3);
    v23[2] = v12;
    v23[3] = v13;
    D3DXVec3Transform((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18, (const struct D2DMatrix *)v23);
  }
  else
  {
    v22 = *(_OWORD *)v6;
    D3DXVec3Transform((struct D2DVector3 *)&v20, (const struct D2DVector3 *)&v18, (const struct D2DQuaternion *)&v22);
  }
  v14 = v20;
  v15 = v21;
  v8[18] = 52;
  *(_QWORD *)v8 = v14;
  v8[2] = v15;
  *((_BYTE *)v8 + 76) = 1;
  --*((_DWORD *)this + 4);
  return 0;
}
