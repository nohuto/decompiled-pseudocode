/*
 * XREFs of ??D?$fast_iterator@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@2@XZ @ 0x1800A18F4
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A19E4 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2248 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800F2358 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800F2A30 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802673F8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>>::operator*(
        __int64 **a1,
        winrt *a2)
{
  __int64 *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  unsigned int v8; // eax

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 2);
  *(_QWORD *)a2 = 0LL;
  v5 = *v3;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)*v3 + 48LL);
  v7 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v8 = v6(v5, v4, v7);
  winrt::check_hresult(v8);
  return a2;
}
