/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C0033774
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010BA0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010D70 (Endpoint_OnCancelStopCompletion.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A00 (UsbDevice_SetAddressCompletion.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FD74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C00347AC (Controller_SetControllerGone.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039950 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0039B90 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003B410 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003B760 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C003BA34 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042974 (Control_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044CF4 (Isoch_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048620 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006E734 (Controller_UpdateIdleTimeout.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x1C0036CD8 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_s @ 0x1C0037908 (WPP_RECORDER_SF_s.c)
 */

char __fastcall Controller_HwVerifierBreakIfEnabled(
        _QWORD *a1,
        char a2,
        char a3,
        __int64 a4,
        const char *a5,
        __int128 *a6,
        __int128 *a7)
{
  _UNKNOWN **v11; // rax
  __int128 *v12; // rcx
  __int128 *v13; // rax
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v11) = WPP_RECORDER_SF_s(a1[9], a2, a3, a4);
  if ( (a4 & a1[56]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    LOBYTE(v11) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v11 )
      __debugbreak();
  }
  v15 = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v12 = &v15;
    v13 = &v15;
    if ( a7 )
      v12 = a7;
    if ( a6 )
      v13 = a6;
    LOBYTE(v11) = McTemplateK0pppxsb16b16_EtwWriteTransfer(
                    (_DWORD)v12,
                    a2,
                    a3,
                    a1[1],
                    a2,
                    a3,
                    a4,
                    (__int64)a5,
                    (__int64)v13,
                    (__int64)v12);
  }
  return (char)v11;
}
