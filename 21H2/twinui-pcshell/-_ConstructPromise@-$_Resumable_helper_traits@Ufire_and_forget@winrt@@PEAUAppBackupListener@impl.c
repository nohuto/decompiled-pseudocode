/*
 * XREFs of ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800ED8F0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800E8ED8 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_InitCoro$1 @ 0x1800F7278 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$1 @ 0x1800F8270 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_InitCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_InitCoro$1 @ 0x1800FA55C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Init.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$1 @ 0x1800FC88C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_InitCoro$1 @ 0x180102E3C (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryConsentChe.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1801043A0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_InitCoro$1 @ 0x1801051A4 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--TryWriteFeedsAv.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus$_InitCoro$1 @ 0x180106058 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--TryWriteFeedsDe.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$1 @ 0x18011C0F4 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_InitCoro$1 @ 0x18011D2C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Ini.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_InitCoro$1 @ 0x18011FBAC (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_I.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_InitCoro$1 @ 0x180122CC0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$1 @ 0x18013C62C (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_InitCoro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *>::_ConstructPromise(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a3 != 0 ? 2 : 65538;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
