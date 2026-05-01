/*
 * XREFs of ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18046ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800D5368 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800D7040 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x1801B78C0 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040BDE8 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180462E78 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180462F2C (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0I_ea_180462F2C.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1804634A8 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180468B9C (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180468CD4 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x180468DA8 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x180468F58 (-Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x18046B7F4 (-StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18046C148 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18046C91C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18046EDC0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180470068 (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180470510 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabletModePositioner::ShellTrackedWindowPosChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  __int64 *v9; // r14
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  HWND WindowForView; // rax
  struct IUnknown *v12; // rcx
  __int64 v13; // rcx
  struct IApplicationView *v14; // rdx
  int (__fastcall **v15)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // rax
  int v20; // eax
  __int64 *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v24[40]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v25[40]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  if ( *((_DWORD *)this + 18) != 2 )
  {
    v9 = (__int64 *)((char *)this - 160);
    if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v10, (struct IApplicationView *)v10);
      if ( !GetPropW(WindowForView, (LPCWSTR)0xA91D) )
      {
        v12 = (struct IUnknown *)*((_QWORD *)this + 33);
        if ( v12 && (unsigned int)SHIsSameObject(v12, (struct IUnknown *)a2) && EqualRect((const RECT *)this + 19, a4) )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
          SetRectEmpty((LPRECT)this + 19);
        }
        else
        {
          wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v25);
          v25[0] = (volatile signed __int32 *)&TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::StartActivity(
            (TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v25,
            a2,
            a3,
            a4,
            a5);
          if ( TabletModePositioner::IsWindowStateStale(
                 v13,
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                 (struct _GUID *)a4,
                 a5) )
          {
            TabletModeTraceLogging::ShellTrackedWindowPosChanged::StaleState((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v25);
          }
          else if ( a5 )
          {
            if ( a5 == 1 )
            {
              wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
                (struct wil::details::IFailureCallback *)v24,
                (__int64)v25);
              v24[0] = (volatile signed __int32 *)&TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              v23[1] = (__int64)v24;
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::Maximized((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v24);
              v23[0] = 0LL;
              if ( IsSurfaceHubWithWin32VtcEnabled() )
              {
                if ( TabletModePositionerHelpers::IsOperableView(
                       (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                       v14) )
                {
                  v15 = *(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
                  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>(v23);
                  if ( (*v15)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v16) >= 0 )
                  {
                    v22 = 0LL;
                    v17 = (__int64 *)v9[31];
                    v21 = &v22;
                    v18 = *v17;
                    v19 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *(&v21);
                    if ( (*(int (__fastcall **)(__int64 *, struct IApplicationView *, __int64 *, _QWORD))(v18 + 152))(
                           v17,
                           a2,
                           v19,
                           0LL) < 0 )
                    {
                      v20 = TabletModePositioner::SwitchToAppHelper(v9, a2, 0LL, 0LL, 0LL);
                      if ( v20 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x847,
                          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                          (const char *)(unsigned int)v20);
                    }
                    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v22);
                  }
                }
              }
              Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(v23);
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(v24);
            }
            else if ( a5 == 2 )
            {
              wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
                (struct wil::details::IFailureCallback *)v24,
                (__int64)v25);
              v24[0] = (volatile signed __int32 *)&TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModePositioner::ViewMinimized(v9, a2, v24);
            }
          }
          else
          {
            wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
              (struct wil::details::IFailureCallback *)v24,
              (__int64)v25);
            v24[0] = (volatile signed __int32 *)&TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
            TabletModePositioner::ViewRestored(v9, a2, v24);
          }
          if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)v9, (struct IUnknown *)a2) )
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9 + 34);
          wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(v25);
        }
      }
    }
  }
}
