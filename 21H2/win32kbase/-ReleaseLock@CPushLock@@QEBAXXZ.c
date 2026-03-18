/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00021F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004A8F4 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C005DB90 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C006D2A0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C006F3A0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00913AC (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C009149C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C00917C4 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C0095980 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0095B9C (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0096060 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C009EC88 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00A0A60 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00A0B94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1C00C4AF4 (-BringISMUptodate@CActivationObjectManager@@QEBAXXZ.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00CFEF0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C0142740 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C01427AC (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C014297C (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1C0142A70 (-GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C0142ABC (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C0142DB0 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0144660 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C0144720 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0144878 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C01DB8D0 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DB918 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DBA00 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DBA60 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DBAB4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E46A0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4934 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01E7880 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01EC638 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE030 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C01EFE60 (-ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01FCA08 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
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
