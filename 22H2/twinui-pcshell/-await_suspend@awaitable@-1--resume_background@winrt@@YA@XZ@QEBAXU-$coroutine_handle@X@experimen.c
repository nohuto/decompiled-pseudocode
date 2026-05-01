/*
 * XREFs of ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1804D50FC
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1390 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1390.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2 @ 0x1800F7270 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_1800F7270.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800F8270 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC880 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C210 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2 @ 0x18011FBA0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122CC0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122CC0.c)
 * Callees:
 *     WINRT_TrySubmitThreadpoolCallback @ 0x1800952E5 (WINRT_TrySubmitThreadpoolCallback.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x180264468 (-throw_last_error@winrt@@YAXXZ.c)
 */

BOOL __fastcall `winrt::resume_background'::`2'::awaitable::await_suspend(__int64 a1, void *a2)
{
  BOOL result; // eax
  winrt *v3; // rcx

  result = WINRT_TrySubmitThreadpoolCallback(
             (PTP_SIMPLE_CALLBACK)`winrt::resume_after'::`2'::awaitable::callback,
             a2,
             0LL);
  if ( !result )
    winrt::throw_last_error(v3);
  return result;
}
