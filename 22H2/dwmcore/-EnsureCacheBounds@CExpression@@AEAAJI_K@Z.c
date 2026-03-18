/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800C0DCC
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800BFA20 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C097C (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NXZ @ 0x18011A024 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl)
    && !*((_QWORD *)this + 45) )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147418113, 0x20Au, 0LL);
    return v6;
  }
  if ( a3 > 0xFFFFFFFF )
  {
    v8 = 526;
    goto LABEL_11;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v8 = 527;
LABEL_11:
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024362, v8, 0LL);
    return v6;
  }
  if ( (unsigned int)a3 + a2 <= *((_DWORD *)this + 92) )
  {
    return 0;
  }
  else
  {
    v6 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147483637, 0x214u, 0LL);
  }
  return v6;
}
