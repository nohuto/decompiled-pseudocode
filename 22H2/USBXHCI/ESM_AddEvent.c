/*
 * XREFs of ESM_AddEvent @ 0x1C000C418
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Control_Transfer_MapIntoRing @ 0x1C00062D0 (Control_Transfer_MapIntoRing.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006870 (Control_ProcessTransferEventWithED1.c)
 *     Control_MapTransfer @ 0x1C00071E4 (Control_MapTransfer.c)
 *     TR_AttemptStateChange @ 0x1C0008150 (TR_AttemptStateChange.c)
 *     Endpoint_TransferEventHandler @ 0x1C0009BD0 (Endpoint_TransferEventHandler.c)
 *     Endpoint_Disable @ 0x1C000B0DC (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C000BDF0 (Endpoint_Enable.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAF4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C000DD40 (Bulk_WdfEvtRequestCancel.c)
 *     TR_TransfersReclaimed @ 0x1C000E5A8 (TR_TransfersReclaimed.c)
 *     Bulk_EP_StopMapping @ 0x1C000F2F0 (Bulk_EP_StopMapping.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C000F610 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C000F6F0 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C000F960 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0010BD0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010DA0 (Endpoint_OnCancelStopCompletion.c)
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C0011280 (ESM_UpdatingTransferRingDequeuePointers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011354 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MappingLoop @ 0x1C0011F40 (Bulk_MappingLoop.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0037B6C (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C00397C0 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039850 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0039A90 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0039DC0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C003A080 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C003A6B4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C003A8C0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C003AA40 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C003AC30 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C003AEC0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B090 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003B310 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C003B660 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C003C31C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003C3D0 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003C730 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C003D560 (Endpoint_WdfEvtStateMachineTimer.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C00422B0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C00423D0 (Control_EP_StopMapping.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042874 (Control_ProcessTransferEventWithED0.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0043020 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00431B0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C00440D0 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044BF4 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0044F3C (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0045B90 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046EFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_ControllerGone @ 0x1C0048350 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C00483EC (UsbDevice_ControllerResetPostReset.c)
 * Callees:
 *     ESM_RunStateMachine @ 0x1C000C540 (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000C9CC (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
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
