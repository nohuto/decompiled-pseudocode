/*
 * XREFs of ?SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1804AAD40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804A8D74 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1804A8FC0 (--1VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1804AB204 (-StartActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x1804ABE34 (-Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::SetDesktopName(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v13; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v14[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3);
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16), &v13);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
  v14[0] = (volatile signed __int32 *)&VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *)v14);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 8) + 32LL))(
         *((_QWORD *)this + 8),
         a2) )
  {
    v12 = 0LL;
    v7 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v8 = v7(a2, &GUID_4b27dbf1_5392_476b_ab37_f409943e0785, &v12);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, a3);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64))(**((_QWORD **)this + 13) + 48LL))(
                *((_QWORD *)this + 13),
                a2,
                a3);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x18A,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v10);
        v8 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64))(**((_QWORD **)this + 11) + 72LL))(
               *((_QWORD *)this + 11),
               a2,
               a3);
        v6 = v8;
        if ( v8 >= 0 )
        {
          VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::Stop(
            (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *)v14,
            a2,
            a3 != 0);
          v6 = 0;
          goto LABEL_13;
        }
        v9 = 396LL;
      }
      else
      {
        v9 = 390LL;
      }
    }
    else
    {
      v9 = 389LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    goto LABEL_14;
  }
  v6 = -2147024809;
LABEL_14:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::~VirtualDesktopSetNameActivity(v14);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return v6;
}
