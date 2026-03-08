/*
 * XREFs of Controller_ReportFatalErrorEx @ 0x1C001EB8C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010BA0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010D70 (Endpoint_OnCancelStopCompletion.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A00 (UsbDevice_SetAddressCompletion.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FD74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0033210 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 *     Controller_ReportFatalError @ 0x1C0034770 (Controller_ReportFatalError.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039950 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0039B90 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C003A7B4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C003A9C0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C003AB40 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C003AFC0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003B410 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003B760 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003BA34 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E4C0 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C00409F0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0042CA4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C00471E8 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048620 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateBootRecovery @ 0x1C0033900 (Controller_InitiateBootRecovery.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0037218 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall Controller_ReportFatalErrorEx(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 Pool2; // rax
  KIRQL v16; // al
  _QWORD *v17; // rcx
  char v18; // [rsp+30h] [rbp-28h]

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = a2;
    LOBYTE(a2) = 1;
    WPP_RECORDER_SF_LL(
      *(_QWORD *)(a1 + 72),
      a2,
      4,
      231,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      a3,
      v18);
  }
  DbgPrint("\nXHCI reported fatal error\n");
  if ( (*(_DWORD *)(a1 + 388) & 0x12) != 0 )
    return Controller_InitiateBootRecovery(a1, v10);
  v13 = 0LL;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 368),
          off_1C00630E0);
  if ( a3 )
  {
    if ( a3 != 4159 )
    {
      Pool2 = ExAllocatePool2(64LL, 64LL, 1229146200LL);
      v13 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = 0LL;
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 32) = a5;
        *(_QWORD *)(Pool2 + 40) = a6;
        *(_QWORD *)(Pool2 + 48) = a7;
        *(_QWORD *)(Pool2 + 56) = a8;
        *(_DWORD *)(Pool2 + 16) = a3;
        *(_QWORD *)(Pool2 + 24) = a4;
      }
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 16));
  if ( v13 )
  {
    v17 = *(_QWORD **)(v14 + 8);
    if ( *v17 != v14 )
      __fastfail(3u);
    *v13 = v14;
    v13[1] = v17;
    *v17 = v13;
    *(_QWORD *)(v14 + 8) = v13;
  }
  *(_DWORD *)(v14 + 80) |= v10;
  KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 16), v16);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 368));
}
