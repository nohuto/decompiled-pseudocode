/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B149C
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18005C2C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800AD298 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801D89C0 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1802008EC (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800A95BC (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A9608 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 */

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
  unsigned __int64 v22; // xmm1_8
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+58h] [rbp-49h] BYREF
  __int128 v27; // [rsp+68h] [rbp-39h]
  __int128 v28; // [rsp+78h] [rbp-29h]
  __int128 v29; // [rsp+88h] [rbp-19h]
  float v30[16]; // [rsp+98h] [rbp-9h] BYREF

  memset_0(v30, 0, sizeof(v30));
  memset_0(&v26, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  v8 = CExpressionValue::CopyIntoFloatArray(this, v7, v30);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2EFu, 0LL);
    return v10;
  }
  for ( i = 0; i < v5; *((_DWORD *)&v26 + v9) = v8 )
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
    v8 = LODWORD(v30[v13]);
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
    *((_DWORD *)this + 1) = DWORD1(v26);
    *((_DWORD *)this + 18) = 35;
LABEL_28:
    *(_DWORD *)this = v26;
    goto LABEL_29;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v24 = DWORD2(v26);
    *(_QWORD *)this = _mm_unpacklo_ps((__m128)(unsigned int)v26, (__m128)DWORD1(v26)).m128_u64[0];
    *((_DWORD *)this + 2) = v24;
    *((_DWORD *)this + 18) = 52;
    goto LABEL_29;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v23 = 71;
    *(_OWORD *)this = v26;
    if ( *((_DWORD *)this + 18) != 71 )
      v23 = 69;
    *((_DWORD *)this + 18) = v23;
    goto LABEL_29;
  }
  v18 = v17 - 2;
  if ( !v18 )
  {
    v22 = _mm_unpacklo_ps((__m128)(unsigned int)v27, (__m128)DWORD1(v27)).m128_u64[0];
    *(_OWORD *)this = v26;
    *((_DWORD *)this + 18) = 104;
    *((_QWORD *)this + 2) = v22;
    goto LABEL_29;
  }
  if ( v18 == 10 )
  {
    v19 = v27;
    *(_OWORD *)this = v26;
    *((_DWORD *)this + 18) = 265;
    v20 = v28;
    *((_OWORD *)this + 1) = v19;
    v21 = v29;
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
