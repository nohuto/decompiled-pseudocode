/*
 * XREFs of ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800D5348
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180401190 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180465FF8 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180466234 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180467E54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18046A950 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18046E170 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18046EE44 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18046F0C4 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180471AC0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180477850 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18048192C (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x1804F2760 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool IsSurfaceHubWithWin32VtcEnabled(void)
{
  return IsPPIEdition();
}
