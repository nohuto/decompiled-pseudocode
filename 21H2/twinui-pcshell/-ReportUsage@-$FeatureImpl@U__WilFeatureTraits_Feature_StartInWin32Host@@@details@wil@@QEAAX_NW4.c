/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029B698
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@SA_NXZ @ 0x1800C7240 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@SA_NXZ.c)
 *     ?InitializePrivilegedOperations@XamlLauncher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18039C1C0 (-InitializePrivilegedOperations@XamlLauncher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18039C1E0 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097584 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180299BCC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@detai.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartInWin32Host>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartInWin32Host>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  BYTE4(v9) = 0;
  v7 = 0;
  v8 = WORD2(v9);
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x114C492u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)&v7,
           v5,
           3u);
}
