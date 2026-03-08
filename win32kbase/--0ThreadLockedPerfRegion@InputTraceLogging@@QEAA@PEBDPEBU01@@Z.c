/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C002F130 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C007A654 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C007A800 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     UserKSTWait @ 0x1C007BCBC (UserKSTWait.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C007D944 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C007DAC8 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C007DCA0 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     ApiSetClientCallDitThread @ 0x1C007DD2C (ApiSetClientCallDitThread.c)
 *     HandleMITWakeSignal @ 0x1C007DE68 (HandleMITWakeSignal.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C009A800 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00C74B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C00C9CF0 (-OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ.c)
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00D7650 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00D8260 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C00F3260 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00F35E0 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     NtMITSynthesizeMouseInput @ 0x1C016BFB0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C016C230 (NtMITSynthesizeTouchInput.c)
 *     NtUserDownlevelTouchpad @ 0x1C016EB00 (NtUserDownlevelTouchpad.c)
 *     NtUserInjectDeviceInput @ 0x1C0172A60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0173440 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0173C50 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01746E0 (NtUserInjectPointerInput.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01D6420 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C02005EC (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211320 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211380 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C02113C0 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211410 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C02118B0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C0212070 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C0214D70 (-OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ.c)
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1C0214DC0 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x1C0217E70 (InvokeMouseCursorPositionCallout.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C02318B8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( dword_1C02CA7E0 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C02CA7E0, 1LL) )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      {
        v8 = (__int64 *)NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
                          v7,
                          WPP_MAIN_CB.Dpc.SystemArgument2);
        *this = v8;
        if ( v8 )
        {
          *v8 = (__int64)a2;
          (*this)[5] = 0LL;
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9, v11, v12, v14);
          if ( CurrentThreadWin32Thread )
            _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
          if ( a3 && *(_QWORD *)a3 )
          {
            *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
            (*this)[5] = (__int64)(*this + 3);
          }
          EtwActivityIdControl(3u, (LPGUID)(*this + 1));
          if ( (unsigned int)dword_1C02CA7E0 > 6 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 1LL) )
          {
            v15 = **this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (int)&dword_1C02CA7E0,
              (__int64)&v15);
          }
          if ( qword_1C02D65C8 )
            qword_1C02D65C8(this, *this + 6, _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
        }
      }
    }
  }
  return this;
}
