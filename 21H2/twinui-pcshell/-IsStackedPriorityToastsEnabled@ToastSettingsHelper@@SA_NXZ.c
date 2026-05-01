/*
 * XREFs of ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x18009AFEC
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180234504 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ @ 0x18009AE6C (-IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ.c)
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x18009AEE8 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopToastViewWithAttribution@@@details@wil@@QEAA_NXZ @ 0x18009B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopToastViewWithAttribution@@.c)
 */

bool ToastSettingsHelper::IsStackedPriorityToastsEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopToastViewWithAttribution>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopToastViewWithAttribution>::GetImpl'::`2'::impl)
    && ToastSettingsHelper::IsPlatformDesktop() )
  {
    return !ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride();
  }
  return v0;
}
