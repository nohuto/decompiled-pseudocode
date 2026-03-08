/*
 * XREFs of memset @ 0x1C0020700
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x1C00029D0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_TransferData_Initialize @ 0x1C0004940 (Isoch_TransferData_Initialize.c)
 *     Control_TransferData_Initialize @ 0x1C00070AC (Control_TransferData_Initialize.c)
 *     TR_InitializeTransferRing @ 0x1C0007DFC (TR_InitializeTransferRing.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C0008390 (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008824 (UsbDevice_SendConfigureEndpointCommand.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C000B6DC (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000FF08 (DeviceSlot_D0EntryCleanupState.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0010734 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0010A74 (Endpoint_OnCancelSetDequeuePointer.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C00128DC (Bulk_TransferData_Initialize.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013210 (UsbDevice_UcxEvtEnable.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014130 (Command_D0EntryPostInterruptsEnabled.c)
 *     XilCoreCommand_Initialize @ 0x1C0014418 (XilCoreCommand_Initialize.c)
 *     Interrupter_Initialize @ 0x1C0014CBC (Interrupter_Initialize.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 *     UsbDevice_SetAddress @ 0x1C0018EE0 (UsbDevice_SetAddress.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A00 (UsbDevice_SetAddressCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E44 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     Device_QueryCapabilities @ 0x1C001A014 (Device_QueryCapabilities.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001B610 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     McGenControlCallbackV2 @ 0x1C001C7B0 (McGenControlCallbackV2.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C001DDD0 (UsbDevice_UcxEvtUpdate.c)
 *     memcpy_s @ 0x1C001E860 (memcpy_s.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00321B8 (CommonBuffer_AcquireSecureBuffer.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0037BD0 (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00389B8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039950 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003B64C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C003BAEC (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C003BB98 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003BE6C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003C168 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003C830 (Endpoint_UcxEvtEndpointReset.c)
 *     Interrupter_InitializeForOffload @ 0x1C003E028 (Interrupter_InitializeForOffload.c)
 *     Register_WriteSecureMmio @ 0x1C003F1E8 (Register_WriteSecureMmio.c)
 *     TR_CreateSecureObject @ 0x1C004139C (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0045B00 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047F20 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00495EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0049A14 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0049ABC (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049D80 (UsbDevice_UcxEvtDisable.c)
 *     Crashdump_Initialize @ 0x1C004C350 (Crashdump_Initialize.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C004E7F0 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C004EA78 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004F150 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C004FB20 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004FEF4 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0050254 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C00503E8 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00506E0 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0050C40 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C005306C (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C00540E0 (WerKernelSubmitReport.c)
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 *     Controller_CreateWdfDevice @ 0x1C006EFBC (Controller_CreateWdfDevice.c)
 *     RootHub_Create @ 0x1C006F738 (RootHub_Create.c)
 *     IoControl_Create @ 0x1C006F910 (IoControl_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070198 (Interrupter_CreateInterrupter.c)
 *     Wmi_Create @ 0x1C0070580 (Wmi_Create.c)
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 *     DmaEnabler_Create @ 0x1C0073140 (DmaEnabler_Create.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C007425C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DriverEntry @ 0x1C0074360 (DriverEntry.c)
 *     Controller_RetrievePciData @ 0x1C0074ACC (Controller_RetrievePciData.c)
 *     SleepstudyHelperInitializeOnce @ 0x1C00751D0 (SleepstudyHelperInitializeOnce.c)
 *     WppTraceCallback @ 0x1C0079A50 (WppTraceCallback.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C007A4B0 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     TelemetryData_pInitWerContext @ 0x1C007B300 (TelemetryData_pInitWerContext.c)
 *     memset$thunk$772440563353939046 @ 0x1C007D010 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
