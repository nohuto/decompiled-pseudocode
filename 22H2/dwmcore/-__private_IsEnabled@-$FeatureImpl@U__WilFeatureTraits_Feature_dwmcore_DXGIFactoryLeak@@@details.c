/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@@@details@wil@@QEAA_NXZ @ 0x18011A848
 * Callers:
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CE198 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011A5D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011A7C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak@@@details@wil@@QE.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_dwmcore_DXGIFactoryLeak>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
