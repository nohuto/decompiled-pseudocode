/*
 * XREFs of memset @ 0x1C0020600
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x1C00029D0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_TransferData_Initialize @ 0x1C0004970 (Isoch_TransferData_Initialize.c)
 *     Control_TransferData_Initialize @ 0x1C00070DC (Control_TransferData_Initialize.c)
 *     TR_InitializeTransferRing @ 0x1C0007E2C (TR_InitializeTransferRing.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C00083C0 (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008854 (UsbDevice_SendConfigureEndpointCommand.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C000B70C (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000FF38 (DeviceSlot_D0EntryCleanupState.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0010764 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0010AA4 (Endpoint_OnCancelSetDequeuePointer.c)
 *     TR_ReleaseSegments @ 0x1C00118AC (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C0012934 (Bulk_TransferData_Initialize.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013260 (UsbDevice_UcxEvtEnable.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0014180 (Command_D0EntryPostInterruptsEnabled.c)
 *     XilCoreCommand_Initialize @ 0x1C0014468 (XilCoreCommand_Initialize.c)
 *     Interrupter_Initialize @ 0x1C0014D0C (Interrupter_Initialize.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016CE0 (RootHub_UcxEvtInterruptTransfer.c)
 *     UsbDevice_SetAddress @ 0x1C0018F30 (UsbDevice_SetAddress.c)
 *     UsbDevice_EnableCompletion @ 0x1C00195B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A50 (UsbDevice_SetAddressCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E94 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     Device_QueryCapabilities @ 0x1C001A064 (Device_QueryCapabilities.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001B660 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     McGenControlCallbackV2 @ 0x1C001C800 (McGenControlCallbackV2.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D48C (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C001DE20 (UsbDevice_UcxEvtUpdate.c)
 *     memcpy_s @ 0x1C001E8B0 (memcpy_s.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00320B8 (CommonBuffer_AcquireSecureBuffer.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0037AD0 (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00388B8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0039850 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003B54C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C003B9EC (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C003BA98 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003BD6C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003C068 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003C730 (Endpoint_UcxEvtEndpointReset.c)
 *     Interrupter_InitializeForOffload @ 0x1C003DF28 (Interrupter_InitializeForOffload.c)
 *     Register_WriteSecureMmio @ 0x1C003F0E8 (Register_WriteSecureMmio.c)
 *     TR_CreateSecureObject @ 0x1C004129C (TR_CreateSecureObject.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0045A00 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047E20 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048760 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00494EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0049914 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C00499BC (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049C80 (UsbDevice_UcxEvtDisable.c)
 *     Crashdump_Initialize @ 0x1C004C250 (Crashdump_Initialize.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C004E6F0 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C004E978 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004F050 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C004FA20 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004FDF4 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0050154 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C00502E8 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00505E0 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0050B40 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C0052F6C (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0053FE0 (WerKernelSubmitReport.c)
 *     TR_Create @ 0x1C006DE38 (TR_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006ECBC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_CreateWdfDevice @ 0x1C006EFFC (Controller_CreateWdfDevice.c)
 *     RootHub_Create @ 0x1C006F778 (RootHub_Create.c)
 *     IoControl_Create @ 0x1C006F950 (IoControl_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C00701D8 (Interrupter_CreateInterrupter.c)
 *     Wmi_Create @ 0x1C00705C0 (Wmi_Create.c)
 *     Controller_Create @ 0x1C0071304 (Controller_Create.c)
 *     DmaEnabler_Create @ 0x1C0073180 (DmaEnabler_Create.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C007429C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DriverEntry @ 0x1C00743A0 (DriverEntry.c)
 *     Controller_RetrievePciData @ 0x1C0074B0C (Controller_RetrievePciData.c)
 *     SleepstudyHelperInitializeOnce @ 0x1C0075210 (SleepstudyHelperInitializeOnce.c)
 *     WppTraceCallback @ 0x1C0079A90 (WppTraceCallback.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C007A4F0 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     TelemetryData_pInitWerContext @ 0x1C007B340 (TelemetryData_pInitWerContext.c)
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
