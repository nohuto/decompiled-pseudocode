/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001AF4C
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180003660 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 *     ?erase@?$list@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180003818 (-erase@-$list@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@st.c)
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180003D0C (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?OnAppViewRemoved@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x180003E90 (-OnAppViewRemoved@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@Applicat.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180018460 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019070 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke @ 0x18001ABB0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18001ABB0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke @ 0x18001AD70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18001AD70.c)
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026158 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@Z @ 0x180033730 (--$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ??$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@Z @ 0x180033850 (--$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180037D94 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180038828 (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180087428 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@Z @ 0x1800BCB34 (--$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800BCDA4 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800BCE78 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCEF8 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD05C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD144 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BD230 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD31C (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BD6B0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUAppView@WindowManagement@ApplicationM.c)
 *     ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x1800BD81C (--0marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 *     ??1?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800BD8E4 (--1-$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x1800BD984 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x1800BDAFC (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800BDB5C (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800BDE70 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BE1C8 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800BE2EC (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BE3CC (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 *     ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800BE560 (-Release@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows.c)
 *     ?get_marshaler@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@CA?AU?$com_ptr@UIMarshal@impl@winrt@@@4@XZ @ 0x1800BE688 (-get_marshaler@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@W.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800BE8C8 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800BE970 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800BEA18 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
