/*
 * XREFs of ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180468CD4
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18007FDC0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x180463BD0 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463C24 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1804644C0 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x180464608 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180468090 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180469180 (-MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1804698A0 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___::Run @ 0x18046A6D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___--Run.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18046ACE0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18046B020 (-ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x18046B040 (-ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectab.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x180470860 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TabletModePositioner::IsTabletMode(TabletModePositioner *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 58) != 1 || *((_DWORD *)this + 59) != 1 )
    return 0;
  return result;
}
