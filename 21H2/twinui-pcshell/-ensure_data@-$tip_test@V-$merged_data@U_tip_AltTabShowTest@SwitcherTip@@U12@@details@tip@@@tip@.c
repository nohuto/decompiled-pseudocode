/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D4704
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@@tip@@YA?AV?$test_watcher@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@0@XZ @ 0x1800D372C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@deta.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@1@XZ @ 0x1800D3978 (--C-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA-AV-$.c)
 * Callees:
 *     ??0?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@QEAA@XZ @ 0x1800D3808 (--0-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D38F0 (--1-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@Uerr_returncod.c)
 *     ?Release@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D3CEC (-Release@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD214 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x118uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::Release(v5);
    wil::com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
