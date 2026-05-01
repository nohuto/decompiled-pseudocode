/*
 * XREFs of ??$end@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x18009E7FC
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A1A04 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2268 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::end<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>,0>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a2 + 56LL))(*a2, &v6);
  winrt::check_hresult(v4);
  *(_DWORD *)(a1 + 8) = v6;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
