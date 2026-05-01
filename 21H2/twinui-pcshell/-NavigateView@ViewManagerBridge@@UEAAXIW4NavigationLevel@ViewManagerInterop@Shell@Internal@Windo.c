/*
 * XREFs of ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18032F430
 * Callers:
 *     wil::details::ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___::_ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___ @ 0x180310498 (wil--details--ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___--_ScopeExitFn__lambda_be3d.c)
 *     wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x1803104CC (wil--details--ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___--_ScopeExitFn__lambda_da6f.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18031BDF4 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18031C36C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x18032CF50 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 * Callees:
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180025ED0 (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewManagerBridge::NavigateView(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  if ( !*(_BYTE *)(a1 + 145) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 104) + 112LL))(
           *(_QWORD *)(a1 + 104),
           a2,
           a3,
           0LL,
           1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
      &v5,
      &v6);
  }
}
