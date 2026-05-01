/*
 * XREFs of ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1800EFD5C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2_::_1_::catch$92 @ 0x1800EA401 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_1800EA401.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$58 @ 0x1800F7F34 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1800F7F34.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::catch$169 @ 0x1800FA34C (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800FA34C.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2_::_1_::catch$163 @ 0x1800FC67C (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1800FC67C.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$119 @ 0x1800FDDD8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800FDDD8.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::catch$46 @ 0x180104192 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_180104192.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::catch$42 @ 0x180104DCB (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_180104DCB.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2_::_1_::catch$47 @ 0x180105E4A (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--T_ea_180105E4A.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus$_ResumeCoro$2_::_1_::catch$41 @ 0x18010681B (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--T_ea_18010681B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2_::_1_::catch$110 @ 0x18011CFE6 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_18011CFE6.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2_::_1_::catch$165 @ 0x18011EF29 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_18011EF29.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2_::_1_::catch$65 @ 0x18012049B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMe_ea_18012049B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2_::_1_::catch$51 @ 0x180124373 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppB_ea_180124373.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2_::_1_::catch$127 @ 0x18013D92C (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimA_ea_18013D92C.c)
 * Callees:
 *     ?terminate@winrt@@YAXXZ @ 0x1800EFCF4 (-terminate@winrt@@YAXXZ.c)
 */

void __fastcall __noreturn std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::unhandled_exception(
        winrt *a1)
{
  winrt::terminate(a1);
}
