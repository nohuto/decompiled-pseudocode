/*
 * XREFs of ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD46C
 * Callers:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180003BDC (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18000422C (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke @ 0x18001ABB0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18001ABB0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke @ 0x18001AD70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18001AD70.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18001B114 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026158 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033A08 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180033A9C (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAp.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033AE4 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180037D94 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180038828 (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180042BE8 (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180042C30 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@@impl@winrt@@YA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800BCAD8 (--$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@-$abi@U.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BCEB0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x1800BD00C (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD05C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD144 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800BD704 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x1800BD984 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BE1C8 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800BE2EC (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BE3CC (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x1800BEAC8 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800BCDA4 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_hresult(unsigned int a1)
{
  _QWORD pExceptionObject[4]; // [rsp+20h] [rbp-20h] BYREF

  switch ( a1 )
  {
    case 0x8007000E:
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    case 0x80070005:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_access_denied);
      throw (winrt::hresult_access_denied *)pExceptionObject;
    case 0x8001010E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_wrong_thread);
      throw (winrt::hresult_wrong_thread *)pExceptionObject;
    case 0x80004001:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_not_implemented);
      throw (winrt::hresult_not_implemented *)pExceptionObject;
    case 0x80070057:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_invalid_argument);
      throw (winrt::hresult_invalid_argument *)pExceptionObject;
    case 0x8000000B:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    case 0x80004002:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_no_interface);
      throw (winrt::hresult_no_interface *)pExceptionObject;
    case 0x80040111:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_class_not_available);
      throw (winrt::hresult_class_not_available *)pExceptionObject;
    case 0x8000000C:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_changed_state);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    case 0x8000000E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_method_call);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    case 0x8000000D:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_state_change);
      throw (winrt::hresult_illegal_state_change *)pExceptionObject;
    case 0x80000018:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_delegate_assignment);
      throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
    case 0x800704C7:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_canceled);
      throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::hresult_error::hresult_error((__int64)pExceptionObject, a1);
  throw (winrt::hresult_error *)pExceptionObject;
}
