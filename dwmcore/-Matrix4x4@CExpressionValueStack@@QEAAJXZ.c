__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  int v1; // eax
  CExpressionValueStack *v2; // rdi
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _DWORD *v5; // rax
  bool v6; // zf
  int v7; // xmm3_4
  int v8; // xmm1_4
  int v9; // xmm2_4
  int v10; // xmm0_4
  int v11; // xmm5_4
  int v12; // xmm4_4
  int v13; // esi
  _QWORD *i; // r14
  __int64 v15; // rax
  CExpressionValue *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // xmm14_4
  int v20; // xmm15_4
  int v21; // xmm13_4
  int v22; // xmm12_4
  int v23; // xmm11_4
  int v24; // xmm10_4
  int v25; // xmm9_4
  int v26; // xmm8_4
  int v27; // xmm7_4
  int v28; // xmm6_4
  int v29; // xmm5_4
  int v30; // xmm4_4
  int v31; // xmm3_4
  int v32; // xmm2_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  unsigned int v35; // edi
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  _BYTE v38[80]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v39[16]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( !v1 )
  {
    v37 = 5577;
LABEL_21:
    v35 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v37,
      0LL);
    return v35;
  }
  v3 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v5 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v38);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v38);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  v6 = v5[18] == 18;
  v39[0] = v5;
  if ( v6 )
  {
    this = (CExpressionValueStack *)*((unsigned int *)v2 + 4);
    if ( (unsigned int)this >= 0x10 )
    {
      v13 = 0;
      for ( i = v39; ; ++i )
      {
        v15 = (unsigned int)((_DWORD)this + v13 - 16);
        if ( (unsigned int)v15 < *((_DWORD *)v2 + 12) )
        {
          v17 = (_DWORD *)(*((_QWORD *)v2 + 3) + 80 * v15);
        }
        else
        {
          v16 = CExpressionValue::CExpressionValue((CExpressionValue *)v38);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v16);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v38);
          this = (CExpressionValueStack *)*((unsigned int *)v2 + 4);
          v17 = &CExpressionValueStack::s_emptyValue;
        }
        v6 = v17[18] == 18;
        *i = v17;
        if ( !v6 )
          break;
        if ( ++v13 >= 16 )
        {
          v18 = v39[0];
          v19 = *(_DWORD *)v39[1];
          v20 = *(_DWORD *)v39[0];
          v21 = *(_DWORD *)v39[2];
          v22 = *(_DWORD *)v39[3];
          v23 = *(_DWORD *)v39[4];
          v24 = *(_DWORD *)v39[5];
          v25 = *(_DWORD *)v39[6];
          v26 = *(_DWORD *)v39[7];
          v27 = *(_DWORD *)v39[8];
          v28 = *(_DWORD *)v39[9];
          v29 = *(_DWORD *)v39[10];
          v30 = *(_DWORD *)v39[11];
          v31 = *(_DWORD *)v39[12];
          v32 = *(_DWORD *)v39[13];
          v33 = *(_DWORD *)v39[14];
          v34 = *(_DWORD *)v39[15];
          *(_DWORD *)(v39[0] + 72LL) = 265;
          *(_DWORD *)v18 = v20;
          *(_DWORD *)(v18 + 4) = v19;
          *(_DWORD *)(v18 + 8) = v21;
          *(_DWORD *)(v18 + 12) = v22;
          *(_DWORD *)(v18 + 16) = v23;
          *(_DWORD *)(v18 + 20) = v24;
          *(_DWORD *)(v18 + 24) = v25;
          *(_DWORD *)(v18 + 28) = v26;
          *(_DWORD *)(v18 + 32) = v27;
          *(_DWORD *)(v18 + 36) = v28;
          *(_DWORD *)(v18 + 40) = v29;
          *(_DWORD *)(v18 + 44) = v30;
          *(_DWORD *)(v18 + 48) = v31;
          *(_DWORD *)(v18 + 52) = v32;
          *(_DWORD *)(v18 + 56) = v33;
          *(_DWORD *)(v18 + 60) = v34;
          *(_BYTE *)(v18 + 76) = 1;
          *((_DWORD *)v2 + 4) -= 15;
          return 0;
        }
      }
      v37 = 5605;
    }
    else
    {
      v37 = 5591;
    }
    goto LABEL_21;
  }
  if ( v5[18] != 104 )
  {
    v37 = 5643;
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
