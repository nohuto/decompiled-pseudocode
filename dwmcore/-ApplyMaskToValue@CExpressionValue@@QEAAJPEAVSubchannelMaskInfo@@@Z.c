__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, struct SubchannelMaskInfo *a2)
{
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int i; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v23; // xmm4_4
  int v24; // xmm5_4
  int v25; // eax
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm2_4
  __int128 v30; // [rsp+48h] [rbp-49h] BYREF
  __int128 v31; // [rsp+58h] [rbp-39h]
  __int128 v32; // [rsp+68h] [rbp-29h]
  __int128 v33; // [rsp+78h] [rbp-19h]
  float v34[16]; // [rsp+88h] [rbp-9h] BYREF

  memset_0(v34, 0, sizeof(v34));
  memset_0(&v30, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  v8 = CExpressionValue::CopyIntoFloatArray(this, v7, v34);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2EFu, 0LL);
    return v10;
  }
  for ( i = 0; i < v5; *((_DWORD *)&v30 + v9) = v8 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      LOBYTE(v8) = *((_BYTE *)a2 + 4) - i;
      v12 = (unsigned int)(2 * v8 - 2);
      v13 = (*((unsigned __int8 *)a2 + 8) >> (2 * v8 - 2)) & 3;
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
      {
        v10 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x30Au, 0LL);
        return v10;
      }
      v12 = 4 * (*((unsigned __int8 *)a2 + 4) - i) - 4;
      v13 = (*((_QWORD *)a2 + 1) >> (4 * (*((_BYTE *)a2 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
    }
    if ( (unsigned int)v13 >= v6 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147467259, 0x315u, 0LL);
      return v10;
    }
    if ( i >= 0x10 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147467259, 0x320u, 0LL);
      return v10;
    }
    v8 = LODWORD(v34[v13]);
    v9 = i++;
  }
  v14 = v5 - 1;
  if ( !v14 )
  {
    *((_DWORD *)this + 18) = 18;
    goto LABEL_28;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *((_DWORD *)this + 1) = DWORD1(v30);
    *((_DWORD *)this + 18) = 35;
LABEL_28:
    *(_DWORD *)this = v30;
    goto LABEL_29;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v26 = v30;
    v27 = DWORD1(v30);
    v28 = DWORD2(v30);
    *((_DWORD *)this + 18) = 52;
    *(_DWORD *)this = v26;
    *((_DWORD *)this + 1) = v27;
    *((_DWORD *)this + 2) = v28;
    goto LABEL_29;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v25 = 71;
    if ( *((_DWORD *)this + 18) != 71 )
      v25 = 69;
    *(_OWORD *)this = v30;
    *((_DWORD *)this + 18) = v25;
    goto LABEL_29;
  }
  v18 = v17 - 2;
  if ( !v18 )
  {
    v22 = v30;
    v23 = v31;
    v24 = DWORD1(v31);
    *((_DWORD *)this + 18) = 104;
    *(_OWORD *)this = v22;
    *((_DWORD *)this + 4) = v23;
    *((_DWORD *)this + 5) = v24;
    goto LABEL_29;
  }
  if ( v18 == 10 )
  {
    v19 = v31;
    *(_OWORD *)this = v30;
    *((_DWORD *)this + 18) = 265;
    v20 = v32;
    *((_OWORD *)this + 1) = v19;
    v21 = v33;
    *((_OWORD *)this + 2) = v20;
    *((_OWORD *)this + 3) = v21;
LABEL_29:
    *((_BYTE *)this + 76) = 1;
    return v10;
  }
  v10 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x357u, 0LL);
  return v10;
}
