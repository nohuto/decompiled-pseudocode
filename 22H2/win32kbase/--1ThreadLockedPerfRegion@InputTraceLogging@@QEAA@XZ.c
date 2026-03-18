/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0053374 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0054478 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     UserKSTWait @ 0x1C0055434 (UserKSTWait.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C005779C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0057904 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0057F70 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     ApiSetClientCallDitThread @ 0x1C0058904 (ApiSetClientCallDitThread.c)
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1C00589A0 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C006EEA0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C00765B0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00CB280 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CBE90 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D41D8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     rimInputApc @ 0x1C00E21C0 (rimInputApc.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4DD0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4FC0 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00E5360 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00E6390 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0142240 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C01424C0 (NtMITSynthesizeTouchInput.c)
 *     NtUserDownlevelTouchpad @ 0x1C0143C90 (NtUserDownlevelTouchpad.c)
 *     NtUserInjectDeviceInput @ 0x1C0147250 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147BA0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148360 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148D00 (NtUserInjectPointerInput.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4F38 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D1808 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C01DCD90 (-OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2680 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C01E26E0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2730 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C01E2770 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E27C0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C01E28F0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2970 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C01E2D50 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1C01E5240 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x1C01E8470 (InvokeMouseCursorPositionCallout.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01FB67C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C0140030 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( qword_1C0295460 )
      qword_1C0295460(v2 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
