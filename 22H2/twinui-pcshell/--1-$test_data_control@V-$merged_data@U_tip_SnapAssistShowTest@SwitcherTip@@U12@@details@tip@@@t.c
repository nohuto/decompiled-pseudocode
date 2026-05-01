/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D4B1C
 * Callers:
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1803FDCAC (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC274 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4DC0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_r.c)
 */

__int64 __fastcall tip::test_data_control<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>::~test_data_control<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>>(
        void **a1,
        __int64 a2)
{
  void *v3; // rcx

  v3 = *a1;
  if ( v3 )
  {
    tip::details::shared_data<0,0,0>::end_update((__int64)v3 + 8, a2);
    wil::com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>(a1);
}
