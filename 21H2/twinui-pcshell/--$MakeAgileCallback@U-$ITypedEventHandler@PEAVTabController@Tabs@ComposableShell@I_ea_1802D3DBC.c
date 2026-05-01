/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVTabController@Tabs@ComposableShell@Internal@Windows@@PEAVTabControllerThumbnailEventArgs@2345@@Foundation@Windows@@PEAVTabViewManager@@P84@EAAJPEAUITabController@Tabs@ComposableShell@Internal@3@PEAUITabControllerThumbnailEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVTabController@Tabs@ComposableShell@Internal@Windows@@PEAVTabControllerThumbnailEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVTabViewManager@@$$QEAP84@EAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@6789@@Z@Z @ 0x1802D3DBC
 * Callers:
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802EB6F0 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::ITabController____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs____Microsoft::WRL::FtmBase___lambda_975440ee23e388e9180f4cc7ba0f706e___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs____Microsoft::WRL::FtmBase___lambda_975440ee23e388e9180f4cc7ba0f706e___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs___ @ 0x1802D8D54 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802D8D54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs *>,TabViewManager *,long (TabViewManager::*)(Windows::Internal::ComposableShell::Tabs::ITabController *,Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs *)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = *a2;
  v9 = *a3;
  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::ITabController____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs____Microsoft::WRL::FtmBase___lambda_975440ee23e388e9180f4cc7ba0f706e___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerThumbnailEventArgs____Microsoft::WRL::FtmBase___lambda_975440ee23e388e9180f4cc7ba0f706e___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs___(
           v5,
           &v8);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      78LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
    __debugbreak();
  }
  return a1;
}
