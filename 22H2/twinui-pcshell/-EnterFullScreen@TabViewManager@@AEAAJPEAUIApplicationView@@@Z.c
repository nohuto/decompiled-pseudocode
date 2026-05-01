/*
 * XREFs of ?EnterFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802DE0B0
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1802E3710 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802D850C (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA008 (--1TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1802E7514 (-StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802E8034 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

__int64 __fastcall TabViewManager::EnterFullScreen(TabViewManager *this, struct IApplicationView *a2)
{
  void (__fastcall *v4)(char *, GUID *, IUnknown **); // rbx
  HRESULT v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  IUnknown *punk; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"TabViewManager_EnterFullScreen");
  v12[0] = &TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::`vftable';
  TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_EnterFullScreen *)v12,
    a2);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v4 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v4((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v5 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_FullScreenManager,
         &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
         &ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  if ( v5 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, __int64, __int64))(*(_QWORD *)ppvOut + 24LL))(
           ppvOut,
           a2,
           1LL,
           1LL);
    v5 = v8;
    if ( v8 >= 0 )
    {
      wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
      v5 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v8;
    v7 = 3017LL;
  }
  else
  {
    v6 = (unsigned int)v5;
    v7 = 3015LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::~TabViewManager_EnterFullScreen((TabViewManagerTraceLogging::TabViewManager_EnterFullScreen *)v12);
  return (unsigned int)v5;
}
