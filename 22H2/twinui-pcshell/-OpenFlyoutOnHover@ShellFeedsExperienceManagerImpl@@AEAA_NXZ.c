/*
 * XREFs of ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B674C
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x1800B6370 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z @ 0x1800B88B0 (-_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_N@Z @ 0x1800B9E88 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@w.c)
 */

bool __fastcall ShellFeedsExperienceManagerImpl::OpenFlyoutOnHover(ShellFeedsExperienceManagerImpl *this)
{
  ShellFeedsExperienceManagerImpl *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
         L"ShellFeedsTaskbarOpenOnHover",
         (unsigned int *)&v2) < 0 )
    return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl) != 4;
  else
    return (_DWORD)v2 != 0;
}
