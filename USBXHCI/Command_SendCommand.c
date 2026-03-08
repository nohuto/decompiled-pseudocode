/*
 * XREFs of Command_SendCommand @ 0x1C000A820
 * Callers:
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008824 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0010734 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0010A74 (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013210 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D30 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddress @ 0x1C0018EE0 (UsbDevice_SetAddress.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A00 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001B610 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C001DDD0 (UsbDevice_UcxEvtUpdate.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C0030224 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039950 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C003A7B4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C003AB40 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C003AD30 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B190 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003B64C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C003BAEC (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C003BB98 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00495EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0049A14 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0049ABC (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049D80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0030E00 (WPP_RECORDER_SF_qL.c)
 */

char __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // rcx
  char result; // al
  unsigned int v9; // ebp
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rdx

  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v4,
        7,
        58,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    }
    *(_BYTE *)(a2 + 60) = 0;
    goto LABEL_22;
  }
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 601) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v7 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(v7 + 16);
    if ( v10 )
    {
      v9 = v10(v7, a2);
      if ( v9 != 4 )
      {
        DynamicLock_Release(*(_QWORD *)(a1 + 112));
        if ( v5 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        v11 = v9;
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v11, 0LL);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 5 )
  {
    DynamicLock_Release(*(_QWORD *)(a1 + 112));
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
LABEL_22:
    v11 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v11, 0LL);
  }
  Command_InternalSendCommand(a1, a2);
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
