/*
 * XREFs of ??0WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x1800F4404
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044E1B4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_18044E1B4.c)
 */

WindowTabHostTelemetry::WindowTabHostThumbnailRequested *__fastcall WindowTabHostTelemetry::WindowTabHostThumbnailRequested::WindowTabHostThumbnailRequested(
        WindowTabHostTelemetry::WindowTabHostThumbnailRequested *this)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &WindowTabHostTelemetry::WindowTabHostThumbnailRequested::`vftable';
  return this;
}
