/*
 * XREFs of ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801FA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013E24 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18003190C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18003190C.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___ @ 0x1801F8620 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801F89B8 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x1801F9F00 (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::UnpresentWindow(CFrameApplicationPresentation *this)
{
  HWND *v2; // rbx
  int v3; // edx
  __int64 v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v7[2]; // [rsp+30h] [rbp-D8h] BYREF
  void **v8; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v9[40]; // [rsp+178h] [rbp+70h] BYREF

  if ( **((_QWORD **)this + 13) )
  {
    v2 = (HWND *)*((_QWORD *)this + 14);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v9,
      (__int64)"UnpresentWindow");
    v3 = *((_DWORD *)this + 12);
    v9[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFramePresentationTelemetry::UnpresentWindow::StartActivity(
      (CFramePresentationTelemetry::UnpresentWindow *)v9,
      v3,
      *v2);
    v6 = **((_QWORD **)this + 13);
    v4 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
    v7[0] = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
    v7[1] = (__int64)this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v8,
      v9);
    v8 = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_db6d4cb92203a874116970825d9bc39e___((unsigned int *)this, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)v9);
  }
  return 0LL;
}
