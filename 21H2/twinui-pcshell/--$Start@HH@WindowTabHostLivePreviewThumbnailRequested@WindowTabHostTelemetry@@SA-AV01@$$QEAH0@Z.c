/*
 * XREFs of ??$Start@HH@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@$$QEAH0@Z @ 0x1800F3C8C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA6C0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800FDFE8 (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044E544 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_18044E544.c)
 */

WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *__fastcall WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::Start<int,int>(
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *this,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::`vftable';
  WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::StartActivity(this, *a2, *a3);
  return this;
}
