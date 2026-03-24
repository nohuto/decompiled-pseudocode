/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAA_NXZ @ 0x1800EFDB8
 * Callers:
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800595E0 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18005C8F8 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?ClearCache@CExpression@@UEAAXXZ @ 0x1801C0B30 (-ClearCache@CExpression@@UEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800EFAF0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EFCB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2929769787@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2929769787>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
