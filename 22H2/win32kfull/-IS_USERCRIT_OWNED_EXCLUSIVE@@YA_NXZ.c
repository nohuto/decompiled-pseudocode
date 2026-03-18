/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C00176A0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00713C4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     SfnINDEVICECHANGE @ 0x1C0097D70 (SfnINDEVICECHANGE.c)
 *     SfnNCDESTROY @ 0x1C0098F50 (SfnNCDESTROY.c)
 *     SfnINOUTSTYLECHANGE @ 0x1C00993D0 (SfnINOUTSTYLECHANGE.c)
 *     xxxClientCallDitThread @ 0x1C0099858 (xxxClientCallDitThread.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0099F1C (xxxClientAllocWindowClassExtraBytes.c)
 *     UnmapDesktop @ 0x1C009C1E0 (UnmapDesktop.c)
 *     EditionParseDesktop @ 0x1C009DB40 (EditionParseDesktop.c)
 *     EnterEditionCrit @ 0x1C00BB950 (EnterEditionCrit.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     xxxClientCallWinEventProc @ 0x1C00E8294 (xxxClientCallWinEventProc.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00F0584 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     OffsetWindow @ 0x1C00F1570 (OffsetWindow.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 *     GetInheritedMonitor @ 0x1C010E880 (GetInheritedMonitor.c)
 *     SfnINOUTLPPOINT5 @ 0x1C011ADE0 (SfnINOUTLPPOINT5.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C01210C8 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0121E78 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122140 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0152DC0 (EnsurePointerDeviceHasMonitor.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02494A0 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

bool __fastcall IS_USERCRIT_OWNED_EXCLUSIVE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v4; // rax

  v4 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  return ExIsResourceAcquiredExclusiveLite(*v4) == 1;
}
