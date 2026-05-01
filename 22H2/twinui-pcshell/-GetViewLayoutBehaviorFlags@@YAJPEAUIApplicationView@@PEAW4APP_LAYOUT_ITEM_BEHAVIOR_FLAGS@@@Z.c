/*
 * XREFs of ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18040B9B0
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040BA58 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18046EA30 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1804767F8 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180476D0C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180477E8C (-QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180477FF4 (-QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW.c)
 *     ?AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180479774 (-AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180479AD0 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18040BB48 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall GetViewLayoutBehaviorFlags(struct IApplicationView *a1, enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *a2)
{
  *(_DWORD *)a2 = 1;
  if ( IsPeopleExperienceHostView(a1) )
    *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFFFFC | 2;
  return 0LL;
}
