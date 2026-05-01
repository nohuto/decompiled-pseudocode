/*
 * XREFs of ??4?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAAAEAV01@AEBV?$test_watcher@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@1@@Z @ 0x1800D4B90
 * Callers:
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1803FDCAC (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D4C08 (-Release@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 */

void **__fastcall tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>::operator=(
        void **a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rax
  void *v4; // rcx

  v2 = *(volatile signed __int32 **)(a2 + 48);
  v4 = *a1;
  *a1 = (void *)v2;
  if ( v2 )
    _InterlockedIncrement(v2 + 68);
  if ( v4 )
    tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::Release(v4);
  return a1;
}
