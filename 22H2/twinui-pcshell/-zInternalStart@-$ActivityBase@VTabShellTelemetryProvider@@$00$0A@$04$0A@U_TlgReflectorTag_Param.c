/*
 * XREFs of ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802F14BC
 * Callers:
 *     ?StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1802E77EC (-StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApp.c)
 *     ?StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1802E7A2C (-StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEA.c)
 *     ?StartActivity@TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1802E7BE4 (-StartActivity@TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x1802E7EE0 (-StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUISh.c)
 *     ?StartActivity@GroupWindowTemplateAppliedToFallbackWindow@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x180307CC4 (-StartActivity@GroupWindowTemplateAppliedToFallbackWindow@TabViewManagerTraceLogging@@QEAAXPEAUH.c)
 *     ?StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180307F48 (-StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801DAE28 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                    v3,
                    _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
