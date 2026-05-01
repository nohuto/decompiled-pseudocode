/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF178
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA?AV?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@0@U_GUID@@@Z @ 0x1800BEDDC (--$open@V-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA-AV-$ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF198 (--1-$test_data_control@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF1D0 (--1-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C025C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0944 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0AC0 (-StartSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800C0F88 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV-$c.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ @ 0x1800C0384 (-Release@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::Release(v1);
  return result;
}
