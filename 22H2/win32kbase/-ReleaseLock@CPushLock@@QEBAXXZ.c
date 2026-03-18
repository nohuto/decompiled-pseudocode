/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C000B570 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000D8A0 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C00329B0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00629A4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C0062A90 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0062ED0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00642EC (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00651C8 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0066108 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0068364 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C006E594 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0077120 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C009C2F0 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00A7360 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C00B7224 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1C00C2C38 (-BringISMUptodate@CActivationObjectManager@@QEBAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00C6CF4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C012E850 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012E8BC (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1C012E9B0 (-GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C012EA24 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C012ED18 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0130110 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C01301D0 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0130324 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C016AF70 (GreIntersectVisRect.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016C2E0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C01DC020 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C01DC070 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DC0BC (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DC1A4 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DC260 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DC2B4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E4CB0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4F14 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01E7CE0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01ECFD4 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDC60 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C01EE720 (-ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01FB46C (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x1C01FC578 (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1C01FC68C (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x1C01FC7F0 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    ExReleasePushLockExclusiveEx(this, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
  }
  KeLeaveCriticalRegion();
}
