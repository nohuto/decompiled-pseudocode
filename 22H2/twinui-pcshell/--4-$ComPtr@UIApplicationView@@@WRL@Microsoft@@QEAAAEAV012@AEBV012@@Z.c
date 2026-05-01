/*
 * XREFs of ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0
 * Callers:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800132A4 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180013430 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800136A0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800567E0 (-_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18006A340 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     _lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator() @ 0x1800D7B2C (_lambda_8c16e7598293d9a49fcaed3324cb1e66_--operator().c)
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800D7F60 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801E0064 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801E0520 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1801E0CE8 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801EAD34 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1801EB170 (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@.c)
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x1801ED2A0 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 *     ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x1801FE2D0 (-GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z.c)
 *     ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1801FF8D0 (-TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180214C20 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x1802C5AE0 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 *     ?SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802CA0C0 (-SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@F.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1802CF278 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180314B80 (-RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18031808C (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180318880 (-UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18031B3E0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV-$CRefCountedObject@UV.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18031B938 (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18031BB84 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18032F640 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x180359F2C (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1803F66EC (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804089D0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x180409CF0 (-Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x18040AE48 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x180411A8C (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180411F70 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Navigate@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@IW4NavigationType@@@Z @ 0x180412A90 (-Navigate@CMultitaskingViewElementBase@@UEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180412C30 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180413360 (-SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180413C08 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180413DB8 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180414300 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804147F0 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180416C30 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x1804173F4 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 *     ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x180417C34 (-_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Mic.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18041A984 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x18041B500 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x18041CA70 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x18041EC30 (-_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ.c)
 *     ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x18041FA08 (--4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x18041FB1C (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 *     ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x18043285C (-RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMulti.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x180434B44 (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18043AF08 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplicatio.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180464880 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180465390 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x180471270 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x180472150 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18047270C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1804765D0 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18047A7A0 (-SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayout.c)
 *     ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x18047B028 (-FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18047E030 (-Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRA.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x1804804B8 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180481FC4 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180487F0C (-GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x18048C494 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x18048CC70 (-InitDropFeedback@JointResize@@AEAAJH@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180495770 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x18049B618 (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1804A4F40 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x1804A6710 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x1804AE8DC (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1804B0A70 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x1804B2810 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x1804B3558 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x1804EF040 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IApplicationView>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  return a1;
}
