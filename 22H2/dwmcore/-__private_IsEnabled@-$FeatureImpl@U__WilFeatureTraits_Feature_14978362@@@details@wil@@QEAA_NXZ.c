/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ @ 0x180119B04
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDA50 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180227AF0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180227F3C (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802776A0 (-Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801198B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119A80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
