/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0
 * Callers:
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000C19C (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C0012D54 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0015004 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C00150F0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0015530 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00315C4 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C00320D4 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C005BBB8 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0084240 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C0094ED0 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C00AB530 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C00AB580 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00C2680 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C01562F8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0157C48 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C020AE10 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C020AEAC (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C020AF94 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C020B050 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C020B0A4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C02176E0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C021D1EC (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021EEC0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C02316A8 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x1C02327A8 (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1C02328BC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x1C0232A20 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  return 0LL;
}
