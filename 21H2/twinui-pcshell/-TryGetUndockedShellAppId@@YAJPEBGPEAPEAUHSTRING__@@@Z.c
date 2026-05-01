/*
 * XREFs of ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x18022171C
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18021FF00 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802246BC (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802354A8 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellUndockedPackage@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021FE64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellUndockedPackage@@@details@wil@@QEAAX.c)
 */

__int64 __fastcall TryGetUndockedShellAppId(const unsigned __int16 *a1, HSTRING *a2, __int64 a3)
{
  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellUndockedPackage>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ShellUndockedPackage>::GetImpl'::`2'::impl,
    0,
    a3);
  return 0LL;
}
