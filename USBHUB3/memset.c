/*
 * XREFs of memset @ 0x1C0044FC0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001560 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C00039B0 (HUBHTX_SendInterruptTransfer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C00073A8 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007A80 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHub @ 0x1C0007D60 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0008000 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C00081BC (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A96C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000D0E8 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000E3B4 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000E4EC (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000F068 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000F5E0 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000F7E4 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000FE88 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000FED8 (HUBMUX_CreatePSM.c)
 *     RtlStringCchPrintfExW @ 0x1C001404C (RtlStringCchPrintfExW.c)
 *     HUBPDO_GetHubName @ 0x1C00160D8 (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0016420 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C00176B4 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C001C570 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C00257E0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C00268D8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0026F1C (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C00270F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0027964 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002AE70 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B320 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BF44 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002D020 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C002D134 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002EA10 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EBC0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002F848 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C0031308 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BEA8 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C003D830 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C003DAF0 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C003F6F0 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0041FD4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0042258 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C004247C (USBD_CreateHandle.c)
 *     DereferenceDeviceResetInterface @ 0x1C0043E24 (DereferenceDeviceResetInterface.c)
 *     CreateNewEventEntry @ 0x1C0043F84 (CreateNewEventEntry.c)
 *     memcpy_s @ 0x1C0044960 (memcpy_s.c)
 *     WppTraceCallback @ 0x1C0076440 (WppTraceCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0077680 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0079790 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C007996C (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0079B58 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0079ED4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C007A114 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C007A2F0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007A52C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C007A918 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C007AEC4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C007B17C (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C007B55C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C007EDF4 (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C0081794 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C0086DEC (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0087358 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0087990 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0089C6C (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C008A174 (HUBACPI_EvalAcpiMethodEx.c)
 *     WMI_AcquireHubName @ 0x1C008B7AC (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C008BA80 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterHub @ 0x1C008BFA4 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C008C18C (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C008C2C4 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C008CAD8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C008D8F0 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 *     SleepstudyHelperInitializeOnce @ 0x1C008F670 (SleepstudyHelperInitializeOnce.c)
 *     QueryDeviceResetInterface @ 0x1C008F7E8 (QueryDeviceResetInterface.c)
 *     CreateTlgAggregateSession @ 0x1C008FDB8 (CreateTlgAggregateSession.c)
 *     memset$thunk$772440563353939046 @ 0x1C0091010 (memset$thunk$772440563353939046.c)
 *     DriverEntry @ 0x1C0093228 (DriverEntry.c)
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
