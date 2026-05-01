/*
 * XREFs of ??$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x18009A174
 * Callers:
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18007223C (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Win.c)
 *     ?TabsChanged@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@Z1??_97896@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1804BB500 (-TabsChanged@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModel.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18007229C (--$as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@23@@im.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ___make_event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BHA_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BHA_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64 *, __int64 *),
        __int64 a3)
{
  __int64 (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rdx
  int v6; // eax
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h]

  v8 = a1;
  v9 = a1;
  *a1 = 0LL;
  v5 = *a2;
  if ( v5 )
  {
    winrt::impl::as<winrt::impl::IWeakReferenceSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
      &v8,
      v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 24LL))(v8, a1);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  }
  a1[1] = a3;
  return a1;
}
