/*
 * XREFs of ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1800EFECC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2_::_1_::catch$92 @ 0x1800EA571 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_1800EA571.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$58 @ 0x1800F80A4 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1800F80A4.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::catch$169 @ 0x1800FA4BC (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800FA4BC.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2_::_1_::catch$163 @ 0x1800FC7EC (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1800FC7EC.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$119 @ 0x1800FDF48 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800FDF48.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::catch$46 @ 0x180104302 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_180104302.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::catch$42 @ 0x180104F3B (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_180104F3B.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2_::_1_::catch$47 @ 0x180105FBA (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--T_ea_180105FBA.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus$_ResumeCoro$2_::_1_::catch$41 @ 0x18010698B (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--T_ea_18010698B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2_::_1_::catch$110 @ 0x18011D156 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_18011D156.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2_::_1_::catch$165 @ 0x18011F099 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_18011F099.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2_::_1_::catch$65 @ 0x18012060B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMe_ea_18012060B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2_::_1_::catch$51 @ 0x1801244E3 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppB_ea_1801244E3.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2_::_1_::catch$127 @ 0x18013DA9C (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimA_ea_18013DA9C.c)
 * Callees:
 *     ?terminate@winrt@@YAXXZ @ 0x1800EFE64 (-terminate@winrt@@YAXXZ.c)
 */

void __fastcall __noreturn std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::unhandled_exception(
        winrt *a1)
{
  winrt::terminate(a1);
}
