/*
 * XREFs of ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002AB00
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002AC10 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180218040 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x1802DC7EC (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     LoggingUtil::GetViewIdFromView @ 0x1802E07B4 (LoggingUtil--GetViewIdFromView.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1802E2550 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x1802EE168 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_1802EE168.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1802EE8C0 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802EFF64 (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x1802FD4C8 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x1802FF394 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1803081B8 (-StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetCoreWindowForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  __int64 (__fastcall **v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF
  __int64 v13; // [rsp+48h] [rbp+18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF

  v2 = *this;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v3 = (*v2)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v12);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
    v3 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v4,
        v10);
    v5 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL))(
           v13,
           1LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v12) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v14);
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = v13;
  v8 = v14;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
