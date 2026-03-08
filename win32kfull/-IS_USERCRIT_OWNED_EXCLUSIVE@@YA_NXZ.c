/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C0016990 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     UnmapDesktop @ 0x1C003CEA0 (UnmapDesktop.c)
 *     SfnNCDESTROY @ 0x1C00411F0 (SfnNCDESTROY.c)
 *     SfnINDEVICECHANGE @ 0x1C0043590 (SfnINDEVICECHANGE.c)
 *     SfnINOUTLPPOINT5 @ 0x1C00439D0 (SfnINOUTLPPOINT5.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00469D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0049F70 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     OffsetWindow @ 0x1C004C918 (OffsetWindow.c)
 *     xxxClientCallWinEventProc @ 0x1C00636F8 (xxxClientCallWinEventProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 *     GetInheritedMonitor @ 0x1C00ACC90 (GetInheritedMonitor.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00C9628 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     SfnINOUTSTYLECHANGE @ 0x1C00CF7D0 (SfnINOUTSTYLECHANGE.c)
 *     xxxClientCallDitThread @ 0x1C00CFAD8 (xxxClientCallDitThread.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00CFFCC (xxxClientAllocWindowClassExtraBytes.c)
 *     EditionParseDesktop @ 0x1C00D45C0 (EditionParseDesktop.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C00E3814 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     EnterEditionCrit @ 0x1C00F34C0 (EnterEditionCrit.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0101318 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0146090 (EnsurePointerDeviceHasMonitor.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C024C180 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_OWNED_EXCLUSIVE(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserSessionState(a1);
  return ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v1 + 8)) == 1;
}
