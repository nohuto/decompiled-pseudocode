/*
 * XREFs of ?CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800BF534
 * Callers:
 *     ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C023C (-MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z.c)
 *     ?StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800C0924 (-StartNewSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z @ 0x1800C0DBC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C1250 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy.c)
 */

void __fastcall SearchAppDesktopExperienceView::CompleteSearchInputTest(SearchAppDesktopExperienceView *this)
{
  char *v1; // rdi
  __int64 v3; // rcx

  v1 = (char *)this + 328;
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
    tip::details::shared_data<1,0,0>::complete_without_lock(v3 + 8);
  wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::reset(v1);
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)this + 42);
}
