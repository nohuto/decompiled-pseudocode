/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C000A8E4
 * Callers:
 *     Isoch_EP_Disable @ 0x1C0001E40 (Isoch_EP_Disable.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Register_ControllerStop @ 0x1C000EEB0 (Register_ControllerStop.c)
 *     Bulk_EP_Disable @ 0x1C000F980 (Bulk_EP_Disable.c)
 *     Control_EP_Disable @ 0x1C000FAB0 (Control_EP_Disable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013210 (UsbDevice_UcxEvtEnable.c)
 *     Command_Initialize @ 0x1C001438C (Command_Initialize.c)
 *     DeviceSlot_Initialize @ 0x1C0014888 (DeviceSlot_Initialize.c)
 *     Interrupter_D0Entry @ 0x1C0014924 (Interrupter_D0Entry.c)
 *     Controller_Start @ 0x1C0014F3C (Controller_Start.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0016F50 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0017660 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ControllerReset @ 0x1C0018518 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C001882C (Register_WaitForControllerReady.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D30 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0019410 (UsbDevice_UcxEvtAddress.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0019D94 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C001DDD0 (UsbDevice_UcxEvtUpdate.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C0035A70 (Controller_UcxEvtReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003DC84 (Interrupter_ControllerResetPostReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003FFC0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0040618 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049D80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  char v2; // cl

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 397) )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 72),
      2,
      4,
      232,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      v2,
      *(_BYTE *)(a1 + 397));
  return 0;
}
