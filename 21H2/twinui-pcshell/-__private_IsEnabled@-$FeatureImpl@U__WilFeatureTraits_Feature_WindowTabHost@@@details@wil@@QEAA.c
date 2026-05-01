/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x1800C71B4
 * Callers:
 *     ?IsWindowTabHostEnabled@PCShellImmersiveShellBuilder@@YA_NXZ @ 0x1800C7010 (-IsWindowTabHostEnabled@PCShellImmersiveShellBuilder@@YA_NXZ.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800D3DE8 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1803AF9C0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1803FDF7C (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x180404760 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804148F0 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180414B80 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C6CC4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C70D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
