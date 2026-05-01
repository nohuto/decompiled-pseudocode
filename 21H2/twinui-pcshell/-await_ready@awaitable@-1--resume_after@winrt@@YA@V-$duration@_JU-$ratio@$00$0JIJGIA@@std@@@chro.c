/*
 * XREFs of ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x1804D51B4
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800DD0F0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800DD0F0.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800E9050 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800E9050.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x180102FA0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_180102FA0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x180104510 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_180104510.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2 @ 0x180105310 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_180105310.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsDeviceEnterpriseStatus$_ResumeCoro$2 @ 0x1801061C0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Tr_ea_1801061C0.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2 @ 0x18011D490 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 * Callees:
 *     <none>
 */

bool __fastcall `winrt::resume_after'::`2'::awaitable::await_ready(__int64 a1)
{
  return *(_QWORD *)(a1 + 8) <= 0LL;
}
