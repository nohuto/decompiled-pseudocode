/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0005A30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0034548 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003480C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ApiSetClientCallDitThread @ 0x1C0035488 (ApiSetClientCallDitThread.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0035C74 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     HandleMITWakeSignal @ 0x1C0037910 (HandleMITWakeSignal.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0037E68 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 *     UserKSTWait @ 0x1C00C6144 (UserKSTWait.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00E8B10 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0155C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0155E60 (NtMITSynthesizeTouchInput.c)
 *     NtUserDownlevelTouchpad @ 0x1C0158660 (NtUserDownlevelTouchpad.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C01D2C30 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     InvokeMouseCursorPositionCallout @ 0x1C01E7ED0 (InvokeMouseCursorPositionCallout.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01FB694 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01FCA40 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008B020 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152710 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
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
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( dword_1C028EE70 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C028EE70, 1LL) )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      {
        v8 = (__int64 *)NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
                          v7,
                          InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
        *this = v8;
        if ( v8 )
        {
          *v8 = (__int64)a2;
          (*this)[5] = 0LL;
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9, v11);
          if ( CurrentThreadWin32Thread )
            _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
          if ( a3 && *(_QWORD *)a3 )
          {
            *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
            (*this)[5] = (__int64)(*this + 3);
          }
          EtwActivityIdControl(3u, (LPGUID)(*this + 1));
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 1LL) )
          {
            v13 = **this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (int)&dword_1C028EE70,
              (__int64)&v13);
          }
          if ( qword_1C029BD10 )
            qword_1C029BD10(this, *this + 6, _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
        }
      }
    }
  }
  return this;
}
