/*
 * XREFs of ?Release@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D3CEC
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D38F0 (--1-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncod.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1800D3DE8 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D4704 (-ensure_data@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D48D8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_retur.c)
 * Callees:
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A1408 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8F8 (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ.c)
 */

__int64 __fastcall tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    *(_QWORD *)pv = &tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::`vftable';
    tip::details::shared_data<0,0,0>::on_destroy((__int64)(pv + 2));
    tip::details::shared_data<1,0,0>::~shared_data<1,0,0>((__int64)(pv + 2));
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
