/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x18005D478
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(unsigned __int64 this)
{
  int v1; // eax
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _DWORD *v5; // rax
  bool v6; // zf
  int v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm3_4
  int v10; // xmm2_4
  int v11; // xmm5_4
  int v12; // xmm4_4
  int v13; // esi
  _QWORD *i; // r14
  CExpressionValue *v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // xmm14_4
  int v19; // xmm15_4
  int v20; // xmm13_4
  int v21; // xmm12_4
  int v22; // xmm11_4
  int v23; // xmm10_4
  int v24; // xmm9_4
  int v25; // xmm8_4
  int v26; // xmm7_4
  int v27; // xmm6_4
  int v28; // xmm5_4
  int v29; // xmm4_4
  int v30; // xmm3_4
  int v31; // xmm2_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  unsigned int v34; // edi
  unsigned int v36; // [rsp+28h] [rbp-E0h]
  _BYTE v37[80]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v38[16]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( !v1 )
  {
    v36 = 5577;
LABEL_21:
    v34 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v36,
      0LL);
    return v34;
  }
  v3 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v3 < *(_DWORD *)(this + 48) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(this + 24) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v37);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v37);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  v6 = v5[18] == 18;
  v38[0] = v5;
  if ( v6 )
  {
    if ( *(_DWORD *)(v2 + 16) >= 0x10u )
    {
      v13 = 0;
      for ( i = v38; ; ++i )
      {
        this = (unsigned int)(v13 + *(_DWORD *)(v2 + 16) - 16);
        if ( (unsigned int)this < *(_DWORD *)(v2 + 48) )
        {
          v16 = (_DWORD *)(*(_QWORD *)(v2 + 24) + 80 * this);
        }
        else
        {
          v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v37);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v15);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v37);
          v16 = &CExpressionValueStack::s_emptyValue;
        }
        v6 = v16[18] == 18;
        *i = v16;
        if ( !v6 )
          break;
        if ( ++v13 >= 16 )
        {
          v17 = v38[0];
          v18 = *(_DWORD *)v38[1];
          v19 = *(_DWORD *)v38[0];
          v20 = *(_DWORD *)v38[2];
          v21 = *(_DWORD *)v38[3];
          v22 = *(_DWORD *)v38[4];
          v23 = *(_DWORD *)v38[5];
          v24 = *(_DWORD *)v38[6];
          v25 = *(_DWORD *)v38[7];
          v26 = *(_DWORD *)v38[8];
          v27 = *(_DWORD *)v38[9];
          v28 = *(_DWORD *)v38[10];
          v29 = *(_DWORD *)v38[11];
          v30 = *(_DWORD *)v38[12];
          v31 = *(_DWORD *)v38[13];
          v32 = *(_DWORD *)v38[14];
          v33 = *(_DWORD *)v38[15];
          *(_DWORD *)(v38[0] + 72LL) = 265;
          *(_DWORD *)v17 = v19;
          *(_DWORD *)(v17 + 4) = v18;
          *(_DWORD *)(v17 + 8) = v20;
          *(_DWORD *)(v17 + 12) = v21;
          *(_DWORD *)(v17 + 16) = v22;
          *(_DWORD *)(v17 + 20) = v23;
          *(_DWORD *)(v17 + 24) = v24;
          *(_DWORD *)(v17 + 28) = v25;
          *(_DWORD *)(v17 + 32) = v26;
          *(_DWORD *)(v17 + 36) = v27;
          *(_DWORD *)(v17 + 40) = v28;
          *(_DWORD *)(v17 + 44) = v29;
          *(_DWORD *)(v17 + 48) = v30;
          *(_DWORD *)(v17 + 52) = v31;
          *(_DWORD *)(v17 + 56) = v32;
          *(_DWORD *)(v17 + 60) = v33;
          *(_BYTE *)(v17 + 76) = 1;
          *(_DWORD *)(v2 + 16) -= 15;
          return 0;
        }
      }
      v36 = 5605;
    }
    else
    {
      v36 = 5591;
    }
    goto LABEL_21;
  }
  if ( v5[18] != 104 )
  {
    v36 = 5643;
    goto LABEL_21;
  }
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v10 = v5[3];
  v11 = v5[4];
  v12 = v5[5];
  v5[18] = 265;
  *v5 = v7;
  v5[1] = v8;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = v9;
  v5[5] = v10;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  *((_QWORD *)v5 + 5) = 1065353216LL;
  v5[12] = v11;
  v5[13] = v12;
  v5[14] = 0;
  v5[15] = 1065353216;
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
