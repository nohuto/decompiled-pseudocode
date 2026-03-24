/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18005C8F8
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180059A0C (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18005C5F0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NXZ @ 0x1800EFDB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2929769787>::GetImpl'::`2'::impl)
    && !*((_QWORD *)this + 42) )
  {
    v6 = -2147418113;
    v9 = 540;
LABEL_4:
    v7 = v6;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v7, v9, 0LL);
    return v6;
  }
  if ( a3 > 0xFFFFFFFF )
  {
    v9 = 548;
    goto LABEL_12;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v9 = 550;
LABEL_12:
    v7 = -2147024362;
    v6 = -2147024362;
    goto LABEL_13;
  }
  if ( (unsigned int)a3 + a2 > *((_DWORD *)this + 86) )
  {
    v6 = -2147483637;
    v9 = 555;
    goto LABEL_4;
  }
  return 0;
}
