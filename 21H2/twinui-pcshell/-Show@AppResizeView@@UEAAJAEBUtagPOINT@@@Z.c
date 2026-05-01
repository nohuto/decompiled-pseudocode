/*
 * XREFs of ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x180482D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18021892C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x1804819C0 (--1TMAppResize@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804819EC (--4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InitAppLayout@AppResizeView@@AEAAJXZ @ 0x180482190 (-InitAppLayout@AppResizeView@@AEAAJXZ.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180482250 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180482354 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x180482EAC (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804891E0 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::Show(AppResizeView *this, const struct tagPOINT *a2)
{
  AppResizeView *v3; // rsi
  int inited; // eax
  int v5; // ebx
  __int64 v6; // rdx
  const struct _GUID *v8; // rcx
  struct IAppLayout *v9; // rbx
  int v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *(struct tagPOINT *)v10 = *a2;
  *(_QWORD *)((char *)this + 116) = *(_QWORD *)v10;
  *(struct tagPOINT *)v10 = *a2;
  v3 = (AppResizeView *)((char *)this - 24);
  inited = AppResizeView::InitAppLayout((AppResizeView *)((char *)this - 24));
  v5 = inited;
  if ( inited >= 0 )
  {
    inited = AppResizeView::InitDropFeedback(v3, (const struct Geometry::CPoint *)v10);
    v5 = inited;
    if ( inited >= 0 )
    {
      inited = AppResizeView::InitAppResizeData(v3, (const struct Geometry::CPoint *)v10);
      v5 = inited;
      if ( inited >= 0 )
        goto LABEL_8;
      v6 = 338LL;
    }
    else
    {
      v6 = 337LL;
    }
  }
  else
  {
    v6 = 336LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)inited);
LABEL_8:
  if ( v5 >= 0 )
  {
    if ( !*((_QWORD *)this + 7) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
      if ( AppResizeAcc_CreateInstance(v8, (void **)this + 7) >= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7));
    }
    v9 = (struct IAppLayout *)*((_QWORD *)this + 6);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v11,
      (__int64)"TMAppResize");
    v11[0] = &TabletModeTelemetry::TMAppResize::`vftable';
    TabletModeTelemetry::TMAppResize::StartActivity((TabletModeTelemetry::TMAppResize *)v11, v9);
    TabletModeTelemetry::TMAppResize::operator=((__int64)this + 128, (__int64)v11);
    TabletModeTelemetry::TMAppResize::~TMAppResize((TabletModeTelemetry::TMAppResize *)v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
