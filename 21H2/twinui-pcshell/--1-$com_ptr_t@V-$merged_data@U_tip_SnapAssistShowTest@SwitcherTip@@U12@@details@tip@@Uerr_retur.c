/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D4B1C
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@@tip@@YA?AV?$test_watcher@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@0@XZ @ 0x1800D49F0 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D4B3C (--1-$test_data_control@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D4B74 (--1-$test_watcher@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@Q.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D4BA4 (--1-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D4D08 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D4C28 (-Release@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::Release(v1);
  return result;
}
