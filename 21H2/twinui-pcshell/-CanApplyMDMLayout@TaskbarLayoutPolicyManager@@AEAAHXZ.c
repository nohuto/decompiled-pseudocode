/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18020C0E4
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18020C140 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18020E370 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__&_ @ 0x1800999A0 (wil--details--RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__-_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18020EB38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(TaskbarLayoutPolicyManager *this, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // r9
  struct DiagnosticsInfo v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]
  struct DiagnosticsInfo retaddr; // [rsp+48h] [rbp+0h]
  TaskbarLayoutPolicyManager *v8; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(a2) = 1;
  v5[2] = 0LL;
  v5[0] = retaddr;
  v5[1] = (struct DiagnosticsInfo)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v8 = this;
  v6 = 304;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MdmSupportForEdu>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetImpl'::`2'::impl,
    a2);
  return wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b____(v2, v5, (__int64)&v8, v3);
}
