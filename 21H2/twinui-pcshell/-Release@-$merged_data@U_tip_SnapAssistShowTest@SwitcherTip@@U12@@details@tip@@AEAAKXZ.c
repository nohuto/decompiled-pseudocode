/*
 * XREFs of ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D4C28
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D4B1C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_retur.c)
 *     ??4?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAAAEAV01@AEBV?$test_watcher@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@1@@Z @ 0x1800D4BB0 (--4-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAAA.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D4D08 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4DE0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_r.c)
 * Callees:
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A1408 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8F8 (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ.c)
 */

__int64 __fastcall tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    *(_QWORD *)pv = &tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::`vftable';
    tip::details::shared_data<0,0,0>::on_destroy((__int64)(pv + 2));
    tip::details::shared_data<1,0,0>::~shared_data<1,0,0>((__int64)(pv + 2));
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
