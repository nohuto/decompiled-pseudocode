/*
 * XREFs of ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18047ECB8
 * Callers:
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18047F230 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F4340 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1801F4340.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801F46B0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___ @ 0x18047BB7C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18047E130 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::ResetPlaceModeIdleTimer(WindowArrangementView *this)
{
  __int64 *v1; // rdi
  volatile int *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v8; // [rsp+30h] [rbp+8h] BYREF
  WindowArrangementView *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  v9 = this;
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
      (__int64)this,
      v3);
  v8 = this;
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  v6 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_af32df4a401f889ca6e3593a0d1a6fcf___(
         v5,
         v4,
         (__int64)v1,
         &v8);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v9);
}
