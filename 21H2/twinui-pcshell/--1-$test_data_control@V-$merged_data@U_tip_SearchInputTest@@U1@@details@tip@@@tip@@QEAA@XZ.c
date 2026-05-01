/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF198
 * Callers:
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C025C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC138 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C1270 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy.c)
 */

__int64 __fastcall tip::test_data_control<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::~test_data_control<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>(a1);
}
