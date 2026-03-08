/*
 * XREFs of ESM_AddEvent @ 0x1C000C3E8
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Control_Transfer_MapIntoRing @ 0x1C00062A0 (Control_Transfer_MapIntoRing.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Control_MapTransfer @ 0x1C00071B4 (Control_MapTransfer.c)
 *     TR_AttemptStateChange @ 0x1C0008120 (TR_AttemptStateChange.c)
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 *     Endpoint_Disable @ 0x1C000B0AC (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C000BDC0 (Endpoint_Enable.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C000DD10 (Bulk_WdfEvtRequestCancel.c)
 *     TR_TransfersReclaimed @ 0x1C000E578 (TR_TransfersReclaimed.c)
 *     Bulk_EP_StopMapping @ 0x1C000F2C0 (Bulk_EP_StopMapping.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C000F5E0 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C000F6C0 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C000F930 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010BA0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010D70 (Endpoint_OnCancelStopCompletion.c)
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C0011250 (ESM_UpdatingTransferRingDequeuePointers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MappingLoop @ 0x1C0011F10 (Bulk_MappingLoop.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0037C6C (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C00398C0 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039950 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0039B90 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0039EC0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C003A180 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C003A7B4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C003A9C0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C003AB40 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C003AD30 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C003AFC0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003B410 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003B760 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C003C41C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003C4D0 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003C830 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C003D660 (Endpoint_WdfEvtStateMachineTimer.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C00423B0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C00424D0 (Control_EP_StopMapping.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042974 (Control_ProcessTransferEventWithED0.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0043120 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00432B0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C00441D0 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044CF4 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C004503C (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0045C90 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_ControllerGone @ 0x1C0048450 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C00484EC (UsbDevice_ControllerResetPostReset.c)
 * Callees:
 *     ESM_RunStateMachine @ 0x1C000C510 (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000C99C (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KSPIN_LOCK v5; // rdx
  __int64 v6; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h]

  v2 = Context + 105;
  NewIrql = KeAcquireSpinLockRaiseToDpc(Context + 105);
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 833) + 192) = a2;
  *((_BYTE *)Context + 833) = (*((_BYTE *)Context + 833) + 1) & 0xF;
  if ( *((_BYTE *)Context + 1016) )
  {
    if ( a2 != 126 )
    {
      *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
      *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
      goto LABEL_5;
    }
    *((_BYTE *)Context + 1016) = 0;
    ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    goto LABEL_4;
  }
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
  *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
  if ( !*((_BYTE *)Context + 848) )
  {
    v5 = Context[120];
    *((_BYTE *)Context + 848) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(WdfFunctions_01023 + 1632))(WdfDriverGlobals, v5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1640))(
      WdfDriverGlobals,
      v6,
      "State Machine Tag",
      1021LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
LABEL_4:
    ESM_RunStateMachine(Context);
  }
LABEL_5:
  KeReleaseSpinLock(v2, NewIrql);
}
