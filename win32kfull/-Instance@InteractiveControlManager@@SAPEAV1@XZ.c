/*
 * XREFs of ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C00150A0 (NtUserSetInteractiveControlFocus.c)
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C0015490 (NtUserSetInteractiveCtrlRotationAngle.c)
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0079BB0 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     EditionDevicePnpNotification @ 0x1C00D53F0 (EditionDevicePnpNotification.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     EditionRimDeviceReadNotification @ 0x1C01A7950 (EditionRimDeviceReadNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A7C60 (Win32kRIMDevChangeCallback.c)
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C01D2D30 (NtUserGetInteractiveControlDeviceInfo.c)
 *     NtUserGetInteractiveControlInfo @ 0x1C01D2EA0 (NtUserGetInteractiveControlInfo.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01D3030 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserInteractiveControlQueryUsage @ 0x1C01D6AC0 (NtUserInteractiveControlQueryUsage.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01DB390 (NtUserSendInteractiveControlHapticsReport.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C02265B0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1C02479F0 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0247C34 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0248044 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C024818C (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0248474 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C024897C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0248D88 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0248E28 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0249470 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C024952C (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C02495D4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C024A494 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C024A73C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C024AAB4 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C024AB34 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C024ABEC (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C024B170 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0079FB4 (--0InteractiveControlManager@@AEAA@XZ.c)
 */

struct InteractiveControlManager *__fastcall InteractiveControlManager::Instance(__int64 a1)
{
  __int64 v1; // rbx
  InteractiveControlManager *v3; // rax

  v1 = SGDGetUserSessionState(a1);
  if ( !*(_QWORD *)(v1 + 17104) )
  {
    v3 = (InteractiveControlManager *)Win32AllocPoolZInit(320LL, 1819440195LL);
    if ( v3 )
      *(_QWORD *)(v1 + 17104) = InteractiveControlManager::InteractiveControlManager(v3);
  }
  return *(struct InteractiveControlManager **)(v1 + 17104);
}
