/*
 * XREFs of ?Stop@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXJ@Z @ 0x1800FE0FC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::Stop(
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *this,
        int a2)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    this,
    a2);
}
