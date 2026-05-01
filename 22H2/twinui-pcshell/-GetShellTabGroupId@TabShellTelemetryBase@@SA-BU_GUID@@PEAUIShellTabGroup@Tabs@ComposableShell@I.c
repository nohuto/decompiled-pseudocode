/*
 * XREFs of ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C
 * Callers:
 *     LoggingUtil::GetGroupIdFromTab @ 0x1802DF4D8 (LoggingUtil--GetGroupIdFromTab.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x1802E0F70 (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1802E7058 (-StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1802E7D64 (-StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIAppl.c)
 *     ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x1802E7EE0 (-StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUISh.c)
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E8200 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802E876C (-Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E8A90 (-Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EC234 (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 *     ?TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x1802EC368 (-TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x1802EC494 (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x1802EC5F4 (-TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIAppl.c)
 *     ?TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@_N@Z @ 0x1802EC730 (-TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUI.c)
 *     ?TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802EC890 (-TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composa.c)
 *     ?TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBUtagRECT@@@Z @ 0x1802EC994 (-TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1802ECC50 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802ECD80 (-TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@C.c)
 *     ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802ECED8 (-TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Co.c)
 *     ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x1802ECFDC (-TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@.c)
 *     ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802ED110 (-TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composab.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802F04D0 (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802F3B88 (-TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShell.c)
 *     ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x1803019CC (-HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableS.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

struct _GUID *__fastcall TabShellTelemetryBase::GetShellTabGroupId(
        struct _GUID *__return_ptr retstr,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2)
{
  struct _GUID v4; // [rsp+20h] [rbp-28h] BYREF

  *retstr = GUID_NULL;
  if ( a2
    && !(*(unsigned int (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct _GUID *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v4) )
  {
    *retstr = v4;
  }
  return retstr;
}
