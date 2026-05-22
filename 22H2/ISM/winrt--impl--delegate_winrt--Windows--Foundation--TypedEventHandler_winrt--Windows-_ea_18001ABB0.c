/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke @ 0x18001ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001AF4C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18001B114 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ??$_Insert_unverified@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@1@@Z @ 0x18001B160 (--$_Insert_unverified@U-$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD46C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r15
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // r12
  _DWORD *v10; // rax
  _QWORD v12[9]; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+90h] [rbp+8h] BYREF
  __int64 v14; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v14 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
    &v14,
    &v15);
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 48LL))(v15, &v13);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  v6 = v13;
  v7 = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v8 = **(_QWORD **)(v4 + 64);
  if ( *(_QWORD *)(v4 + 72) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v9 = *(_QWORD **)(v8 + 8);
  v12[0] = v4 + 64;
  v12[1] = 0LL;
  v10 = operator new(0x20uLL);
  v10[4] = v6;
  *((_QWORD *)v10 + 3) = v7;
  *(_QWORD *)v10 = v8;
  *((_QWORD *)v10 + 1) = v9;
  ++*(_QWORD *)(v4 + 72);
  *(_QWORD *)(v8 + 8) = v10;
  *v9 = v10;
  std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Insert_unverified<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>>>>(
    v4 + 56,
    v12,
    **(_QWORD **)(v4 + 64) + 16LL);
  if ( v15 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v15);
  if ( v16 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
  if ( v14 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v14);
  return 0LL;
}
