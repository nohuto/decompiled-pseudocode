/*
 * XREFs of SendMessageTo @ 0x1C0081230
 * Callers:
 *     SendAppClipChanged @ 0x1C0015910 (SendAppClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C0016034 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C002EC7C (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C007CF1C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C0081160 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00839F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     SynchronizeContext @ 0x1C00CCA10 (SynchronizeContext.c)
 *     SendVisibilityChanged @ 0x1C00D1D20 (SendVisibilityChanged.c)
 *     SendPositionChanged @ 0x1C00D3B40 (SendPositionChanged.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C01BFB10 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01F1CA0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C02083AC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C020A370 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C020FEB0 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     SendOrientationChanged @ 0x1C0218410 (SendOrientationChanged.c)
 *     SendShape @ 0x1C0218460 (SendShape.c)
 *     SendShellClipChanged @ 0x1C0218490 (SendShellClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C0218700 (SendSuppressionStateChanged.c)
 *     ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1C0223BAC (--0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x1C0223C80 (--1VPTPContact@@QEAA@XZ.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0225CB4 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C022E28C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1C023101C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C023EAE8 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0081280 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendMessageTo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rax

  v4 = a3;
  v6 = a1;
  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(v7 + 16048), v6, a2, v4);
}
