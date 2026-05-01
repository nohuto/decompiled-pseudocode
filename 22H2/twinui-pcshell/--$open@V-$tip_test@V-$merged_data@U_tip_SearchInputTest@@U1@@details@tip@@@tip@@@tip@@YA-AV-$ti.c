/*
 * XREFs of ??$open@V?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA?AV?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@0@U_GUID@@@Z @ 0x1800BEDBC
 * Callers:
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C023C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0924 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z @ 0x1800BEF98 (--0-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF158 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF1BC (--4-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD064 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

_QWORD *__fastcall tip::open<tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>>(
        _QWORD *a1,
        __int128 *a2)
{
  LPVOID v3; // rax
  wil::details::in1diag3 *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = *a2;
  v3 = CoTaskMemAlloc(0x128uLL);
  if ( !v3 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v4);
  v7 = tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>(
         v3,
         &v6);
  wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::operator=(
    a1,
    &v7);
  wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>(&v7);
  return a1;
}
