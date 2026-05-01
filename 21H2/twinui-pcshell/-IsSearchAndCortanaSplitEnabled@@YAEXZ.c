/*
 * XREFs of ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250
 * Callers:
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18000F3F0 (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x18000F468 (-ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x180279BB8 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x18027A500 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x18027B970 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18027DDB0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     wil::details::functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__&_::Run @ 0x180280460 (wil--details--functor_wrapper_void__lambda_744fbbf31ab9c433b0df41c4c967a538__-_--Run.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180280EF0 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1803A48D0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A6710 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x1800102C0 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800102FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180018C18 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007ADFC (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_N@Z @ 0x18007FB28 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@.c)
 */

unsigned __int8 IsSearchAndCortanaSplitEnabled(void)
{
  __int64 v0; // rdx
  char v1; // bl
  CortanaFeatureConfiguration *v2; // rcx
  CortanaFeatureConfiguration *v4; // rcx
  CortanaFeatureConfiguration *v5; // rcx
  const unsigned __int16 *v6; // rdx
  CortanaFeatureConfiguration *v7; // rcx
  unsigned int v8; // r11d
  int v9; // r10d
  struct CortanaFeatureConfiguration::FeatureValue *v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( IsReducedSearchBoxWidthEnabled() )
    goto LABEL_3;
  LOBYTE(v0) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl,
    v0);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl) == 2 )
    goto LABEL_3;
  CortanaFeatureConfiguration::getSharedFeatureTable(v2);
  CortanaFeatureConfiguration::getSharedFeatureTable(v4);
  v7 = (CortanaFeatureConfiguration *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v5) + 9);
  if ( v9 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)0x80070057LL,
      (int)v10[0]);
    return v1;
  }
  *(_OWORD *)v10 = 0LL;
  if ( (int)CortanaFeatureConfiguration::GetFeatureValue(v7, v6, (bool (*)(void))v8, (unsigned int)v10, 0LL) >= 0 )
  {
    if ( HIDWORD(v10[0]) )
    {
LABEL_3:
      v12 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, &v12, 0LL);
      if ( v12 == 3 || v12 == 9 )
        return 1;
    }
  }
  return v1;
}
