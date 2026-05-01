/*
 * XREFs of ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1804A9340
 * Callers:
 *     ?CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1804A94D0 (-CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18021892C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1804A8F68 (--1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1804AAF8C (-StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1804AB5D8 (-Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::CreateDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, struct IVirtualDesktop **); // rbx
  int v7; // eax
  __int64 v8; // rdx
  struct IVirtualDesktop *v9; // rax
  struct IVirtualDesktop *v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"VirtualDesktopCreatedActivity");
  v12[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v12);
  if ( a2 )
    *a2 = 0LL;
  if ( !*((_DWORD *)this + 40) )
  {
    v11[0] = 0LL;
    v5 = *((_QWORD *)this + 10);
    v6 = *(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v5 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
    v7 = v6(v5, v11);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 13) + 24LL))(
             *((_QWORD *)this + 13),
             v11[0]);
      v4 = v7;
      if ( v7 >= 0 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v12,
          v11[0],
          *((struct IVirtualDesktopCollection **)this + 10));
        if ( a2 )
        {
          v9 = v11[0];
          v11[0] = 0LL;
          *a2 = v9;
        }
        v4 = 0;
        goto LABEL_13;
      }
      v8 = 291LL;
    }
    else
    {
      v8 = 290LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
    goto LABEL_14;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11F,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)0x8007139FLL);
LABEL_14:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::~VirtualDesktopCreatedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v12);
  return v4;
}
