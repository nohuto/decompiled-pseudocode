/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180221C94
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Invoke_::_1_::catch$0 @ 0x1800A7B2C (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__::_1_::catch$10 @ 0x1800E6B8D (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--_ea_1800E6B8D.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::GetAppIdForWindow_::_1_::catch$8 @ 0x1800EB07C (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHost_winrt--Wind.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___lambda_9149871aec59121227803e9d8e93736d___::Invoke_::_1_::catch$4 @ 0x1800EB66D (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800EB66D.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::WindowTabView_winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs___lambda_183baf27b090b4cfecd741efea205505___::Invoke_::_1_::catch$0 @ 0x1800EB6DB (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800EB6DB.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::IsSupported_::_1_::catch$4 @ 0x1800EB739 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHos_ea_1800EB739.c)
 *     _winrt::impl::root_implements_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_Windows::Internal::Shell::ITabProxyWindowInternal_::NonDelegatingGetRuntimeClassName_::_1_::catch$4 @ 0x1800EB868 (_winrt--impl--root_implements_winrt--Windows--Internal--Shell--implementation--TabProxyWindow_Wi.c)
 *     _winrt::impl::root_implements_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_Windows::Internal::Shell::ITabProxyWindowInternal_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1800EB8D0 (_winrt--impl--root_implements_winrt--Windows--Internal--Shell--implementation--TabP_ea_1800EB8D0.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::UpdateTabsForWindow_::_1_::catch$2 @ 0x1800ECD45 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHos_ea_1800ECD45.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::WindowTabsChanged2_::_1_::catch$2 @ 0x1800ED24F (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHos_ea_1800ED24F.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::WindowTabsChanged_::_1_::catch$6 @ 0x1800ED319 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHos_ea_1800ED319.c)
 *     ?terminate@winrt@@YAXXZ @ 0x1800EFE64 (-terminate@winrt@@YAXXZ.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___std::shared_ptr_PinOperationContext__bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$8 @ 0x1800F3F5D (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_boo_ea_1800F3F5D.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Cancel_::_1_::catch$2 @ 0x1800F4BE5 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOper.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Close_::_1_::catch$2 @ 0x1800F4CF7 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1800F4CF7.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::ErrorCode_::_1_::catch$1 @ 0x1800F55CF (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1800F55CF.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___std::shared_ptr_PinOperationContext__bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::GetResults_::_1_::catch$7 @ 0x1800F5F33 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1800F5F33.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_563ef2cba1e039dda91c2deec08b635f___::Invoke_::_1_::catch$0 @ 0x1800F647B (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_w_ea_1800F647B.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___std::shared_ptr_PinOperationContext__bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName_::_1_::catch$5 @ 0x1800F6584 (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Foundation--IA.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1800F65D2 (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_1800F65D2.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___std::shared_ptr_PinOperationContext__bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::get_Completed_::_1_::catch$7 @ 0x180101308 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180101308.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode_::_1_::catch$6 @ 0x180101374 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180101374.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Id_::_1_::catch$5 @ 0x1801013CD (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1801013CD.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Status_::_1_::catch$5 @ 0x18010142D (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18010142D.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::TabProxyWindow___::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::put_Completed_::_1_::catch$2 @ 0x18010163F (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18010163F.c)
 *     _winrt::impl::delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___::Invoke_::_1_::catch$0 @ 0x180102841 (_winrt--impl--delegate_winrt--Windows--Networking--Connectivity--NetworkStatusChangedEventHandle.c)
 *     __lambda_ca5215f49b461d52db1d3f757407fb7b_::operator()_::_1_::catch$0 @ 0x18011BADC (__lambda_ca5215f49b461d52db1d3f757407fb7b_--operator()_--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$152 @ 0x18011FA57 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_18011FA57.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$153 @ 0x18011FB4E (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_18011FB4E.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::catch$29 @ 0x180120BD9 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--CompatFolderCh_ea_180120BD9.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent_::_1_::catch$23 @ 0x1801226D4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageI_ea_1801226D4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch$59 @ 0x180122A64 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_180122A64.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent_::_1_::catch$23 @ 0x180122C74 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_180122C74.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUpdatingEventArgs___lambda_505d7d8dd5d02cda7c2ed4b2e362c386___::Invoke_::_1_::catch$6 @ 0x1801245F2 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Application.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch$28 @ 0x180125433 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_180125433.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$8 @ 0x1801341DD (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_win_ea_1801341DD.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Cancel_::_1_::catch$2 @ 0x180137CE5 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180137CE5.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Close_::_1_::catch$2 @ 0x180137EC7 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180137EC7.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::ErrorCode_::_1_::catch$1 @ 0x18013917F (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_18013917F.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults_::_1_::catch$13 @ 0x18013A3E9 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18013A3E9.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7___::Invoke_::_1_::catch$0 @ 0x18013ADBC (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_w_ea_18013ADBC.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke_::_1_::catch$4 @ 0x18013AE9A (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_w_ea_18013AE9A.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_e5b45a8e7f2c7ec847f24290172a79dc___::Invoke_::_1_::catch$0 @ 0x18013AF48 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_w_ea_18013AF48.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::IsItemPinned_::_1_::catch$5 @ 0x18013B04C (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--PinManager_winrt--Windows.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::IsPinAllowed_::_1_::catch$5 @ 0x18013B374 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--PinManager_w_ea_18013B374.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName_::_1_::catch$5 @ 0x18013BCE4 (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_18013BCE4.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x18013BD32 (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_18013BD32.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::IPinManager_::RequestPinItemAsync_::_1_::catch$12 @ 0x18013FB81 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--PinManager_w_ea_18013FB81.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::get_Completed_::_1_::catch$9 @ 0x18014575A (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18014575A.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode_::_1_::catch$6 @ 0x1801457C4 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1801457C4.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Id_::_1_::catch$5 @ 0x18014581D (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18014581D.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Status_::_1_::catch$5 @ 0x18014587D (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18014587D.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::put_Completed_::_1_::catch$2 @ 0x180145D7C (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180145D7C.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::PinManager___std::shared_ptr_PinOperationContext__bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::put_Completed_::_1_::catch$2 @ 0x180145DFC (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180145DFC.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$8 @ 0x1801475DD (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_win_ea_1801475DD.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults_::_1_::catch$13 @ 0x180149C69 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_180149C69.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_c5e85cbf5d6483b8d295c64a0af9bf90___::Invoke_::_1_::catch$4 @ 0x18014A15B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notific.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Invoke_::_1_::catch$7 @ 0x18014A221 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_18014A221.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName_::_1_::catch$5 @ 0x18014A32C (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_18014A32C.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::get_Completed_::_1_::catch$9 @ 0x18014D70A (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18014D70A.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::put_Completed_::_1_::catch$2 @ 0x18014D7BC (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_18014D7BC.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_7814559f2e5978e3931afcf6062d6abe___::Invoke_::_1_::catch$8 @ 0x18021EFA8 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shel.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Invoke_::_1_::catch$0 @ 0x180262FFC (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke_::_1_::catch$8 @ 0x1804BB078 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--C.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$9 @ 0x1804D0F0A (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_boo_ea_1804D0F0A.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Cancel_::_1_::catch$2 @ 0x1804D1E45 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D1E45.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Close_::_1_::catch$2 @ 0x1804D1F67 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D1F67.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void_::ErrorCode_::_1_::catch$1 @ 0x1804D254B (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1804D254B.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_unsigned_int__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___wil::com_ptr_t_IDropTarget_wil::err_exception_policy__const_&_wil::com_ptr_t_IDataObject_wil::err_exception_policy__const_&_tagPOINT_const_&_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_unsigned_int___::GetResults_::_1_::catch$7 @ 0x1804D2DF0 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D2DF0.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::GetResults_::_1_::catch$7 @ 0x1804D2EC2 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D2EC2.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator_::InsertAsync_::_1_::catch$8 @ 0x1804D3242 (_winrt--impl--produce_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDr.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___::Invoke_::_1_::catch$3 @ 0x1804D32F3 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_u_ea_1804D32F3.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Invoke_::_1_::catch$0 @ 0x1804D338F (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___lambda_.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745___::Invoke_::_1_::catch$3 @ 0x1804D3443 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_b_ea_1804D3443.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator_::IsSupportedAsync_::_1_::catch$8 @ 0x1804D34E2 (_winrt--impl--produce_winrt--Windows--Internal--Shell--DragDropSimulator--implement_ea_1804D34E2.c)
 *     _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::NonDelegatingGetRuntimeClassName_::_1_::catch$4 @ 0x1804D35E8 (_winrt--impl--root_implements_winrt--immersive_shell_component_IObjectWithSite_IServiceProvider_.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_unsigned_int__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___wil::com_ptr_t_IDropTarget_wil::err_exception_policy__const_&_wil::com_ptr_t_IDataObject_wil::err_exception_policy__const_&_tagPOINT_const_&_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_unsigned_int__winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName_::_1_::catch$11 @ 0x1804D365C (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_1804D365C.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName_::_1_::catch$5 @ 0x1804D36D0 (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_1804D36D0.c)
 *     _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1804D3738 (_winrt--impl--root_implements_winrt--immersive_shell_component_IObjectWithSite_ISer_ea_1804D3738.c)
 *     _winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1804D3786 (_winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--F_ea_1804D3786.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::get_Completed_::_1_::catch$9 @ 0x1804D596A (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D596A.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode_::_1_::catch$6 @ 0x1804D59D4 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D59D4.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Id_::_1_::catch$5 @ 0x1804D5A2D (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D5A2D.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Status_::_1_::catch$5 @ 0x1804D5A8D (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D5A8D.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_unsigned_int__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___wil::com_ptr_t_IDropTarget_wil::err_exception_policy__const_&_wil::com_ptr_t_IDataObject_wil::err_exception_policy__const_&_tagPOINT_const_&_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_unsigned_int___::put_Completed_::_1_::catch$2 @ 0x1804D5C5F (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D5C5F.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::put_Completed_::_1_::catch$2 @ 0x1804D5CCF (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1804D5CCF.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::to_hresult(_DWORD *a1)
{
  _BYTE *v3; // rbp
  unsigned int *v4; // rbx
  __int64 v5; // rax
  OLECHAR *v6; // rcx
  _BYTE *v7; // rbp
  OLECHAR *v8; // rcx
  _BYTE *v9; // rbp
  OLECHAR *v10; // rcx
  _BYTE *v11; // rbp
  __int64 v12; // rax
  OLECHAR *v13; // rcx
  _BYTE *v14; // rdx
  _BYTE *v15; // rdx
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  _BYTE *v18; // rdx
  _BYTE *v19; // rdx
  _BYTE v20[88]; // [rsp+0h] [rbp-88h] BYREF
  const winrt::hresult_error *v21; // [rsp+58h] [rbp-30h] BYREF
  const wil::ResultException *v22; // [rsp+60h] [rbp-28h] BYREF
  const std::out_of_range *v23; // [rsp+68h] [rbp-20h] BYREF
  const std::invalid_argument *v24; // [rsp+70h] [rbp-18h] BYREF
  const std::exception *v25; // [rsp+78h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v27; // [rsp+90h] [rbp+8h]

  if ( !winrt_to_hresult_handler )
  {
    try
    {
      throw;
    }
    catch ( const winrt::hresult_error *v21 )
    {
      v14 = v20;
      winrt::hresult_error::to_abi(*((_QWORD *)v14 + 11), *((_DWORD **)v14 + 18));
      return (_DWORD *)v27;
    }
    catch ( const wil::ResultException *v22 )
    {
      v15 = v20;
      v3 = v15;
      v4 = (unsigned int *)*((_QWORD *)v15 + 12);
      *((_QWORD *)v15 + 19) = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)v3 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v3 + 20, (const CHAR **)v3 + 19);
      v5 = winrt::hresult_error::hresult_error((__int64)(v3 + 32), v4[7], (_QWORD *)v3 + 7);
      winrt::hresult_error::to_abi(v5, *((_DWORD **)v3 + 18));
      if ( *((_QWORD *)v3 + 6) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v3 + 6);
      v6 = (OLECHAR *)*((_QWORD *)v3 + 4);
      if ( v6 )
      {
        SysFreeString_0(v6);
        *((_QWORD *)v3 + 4) = 0LL;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)v3 + 20);
      return (_DWORD *)v27;
    }
    catch ( std::bad_alloc )
    {
      v16 = v20;
      **((_DWORD **)v16 + 18) = -2147024882;
      return (_DWORD *)v27;
    }
    catch ( const std::out_of_range *v23 )
    {
      v17 = v20;
      v7 = v17;
      *((_QWORD *)v17 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 13) + 8LL))(*((_QWORD *)v17 + 13));
      *((_QWORD *)v7 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v7 + 20, (const CHAR **)v7 + 19);
      winrt::hresult_error::hresult_error((__int64)(v7 + 32), winrt::impl::error_out_of_bounds, (_QWORD *)v7 + 7);
      winrt::hresult_error::to_abi((__int64)(v7 + 32), *((_DWORD **)v7 + 18));
      if ( *((_QWORD *)v7 + 6) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v7 + 6);
      v8 = (OLECHAR *)*((_QWORD *)v7 + 4);
      if ( v8 )
      {
        SysFreeString_0(v8);
        *((_QWORD *)v7 + 4) = 0LL;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)v7 + 20);
      return (_DWORD *)v27;
    }
    catch ( const std::invalid_argument *v24 )
    {
      v18 = v20;
      v9 = v18;
      *((_QWORD *)v18 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 14) + 8LL))(*((_QWORD *)v18 + 14));
      *((_QWORD *)v9 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v9 + 20, (const CHAR **)v9 + 19);
      winrt::hresult_error::hresult_error((__int64)(v9 + 32), winrt::impl::error_invalid_argument, (_QWORD *)v9 + 7);
      winrt::hresult_error::to_abi((__int64)(v9 + 32), *((_DWORD **)v9 + 18));
      if ( *((_QWORD *)v9 + 6) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v9 + 6);
      v10 = (OLECHAR *)*((_QWORD *)v9 + 4);
      if ( v10 )
      {
        SysFreeString_0(v10);
        *((_QWORD *)v9 + 4) = 0LL;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)v9 + 20);
      return (_DWORD *)v27;
    }
    catch ( const std::exception *v25 )
    {
      v19 = v20;
      v11 = v19;
      *((_QWORD *)v19 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 15) + 8LL))(*((_QWORD *)v19 + 15));
      *((_QWORD *)v11 + 7) = *winrt::to_hstring<char const *,void>((_QWORD *)v11 + 20, (const CHAR **)v11 + 19);
      v12 = winrt::hresult_error::hresult_error((__int64)(v11 + 32), winrt::impl::error_fail, (_QWORD *)v11 + 7);
      winrt::hresult_error::to_abi(v12, *((_DWORD **)v11 + 18));
      if ( *((_QWORD *)v11 + 6) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v11 + 6);
      v13 = (OLECHAR *)*((_QWORD *)v11 + 4);
      if ( v13 )
      {
        SysFreeString_0(v13);
        *((_QWORD *)v11 + 4) = 0LL;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)v11 + 20);
      return (_DWORD *)v27;
    }
  }
  *a1 = winrt_to_hresult_handler(retaddr);
  return a1;
}
