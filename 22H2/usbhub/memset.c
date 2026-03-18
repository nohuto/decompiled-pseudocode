/*
 * XREFs of memset @ 0x1C001E180
 * Callers:
 *     UsbhPostInterrupt @ 0x1C00033C0 (UsbhPostInterrupt.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhQueryBusRelations @ 0x1C0011530 (UsbhQueryBusRelations.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00139C0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C00177A8 (UsbhSyncSendCommandToDevice.c)
 *     UsbhAllocWorkItem @ 0x1C0017C80 (UsbhAllocWorkItem.c)
 *     UsbhCreateDevice @ 0x1C0019118 (UsbhCreateDevice.c)
 *     UsbhAcquirePowerContext @ 0x1C0019484 (UsbhAcquirePowerContext.c)
 *     UsbhHubSSH_Timer @ 0x1C001AC00 (UsbhHubSSH_Timer.c)
 *     UsbhInitializeDevice @ 0x1C001C46C (UsbhInitializeDevice.c)
 *     wil_details_StagingConfig_Load @ 0x1C001D8F8 (wil_details_StagingConfig_Load.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C002A460 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C002ACF8 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C002AE2C (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002BC50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetControllerName @ 0x1C002C234 (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C002C4C0 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002C8F8 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002CAF8 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002CC90 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002CEE0 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubPdoName @ 0x1C002D13C (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C002DEBC (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002E4CC (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C0031110 (UsbhFdoRecordFailure.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0031834 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C00326E8 (UsbhCreateConfigurationRequestEx.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C0032B14 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C0032F14 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0033830 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0033CA0 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00341A8 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhBusPnpStart @ 0x1C0037270 (UsbhBusPnpStart.c)
 *     UsbhGetBillboardInfo @ 0x1C00386F0 (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformation @ 0x1C0038B48 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 *     UsbhAllocateTimerObject @ 0x1C003C2A4 (UsbhAllocateTimerObject.c)
 *     UsbhGetDeviceInformationEx @ 0x1C003E8E8 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003EA6C (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003FDA4 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0040078 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0040308 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C00407B8 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040AF8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0040E0C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00410FC (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00413E4 (UsbhIoctlGetPortConnectorProperties.c)
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 *     UsbhInitGlobal @ 0x1C0044378 (UsbhInitGlobal.c)
 *     UsbhMakePdoName @ 0x1C00445AC (UsbhMakePdoName.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0045A10 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C0045B84 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0045F24 (UsbhGetRegUsbClassFlags.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0046B50 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0046E00 (UsbhReadPdoRegistryKeys.c)
 *     UsbhRegDriverEntry @ 0x1C0047010 (UsbhRegDriverEntry.c)
 *     UsbhLogAlloc @ 0x1C00493F4 (UsbhLogAlloc.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C0049BBC (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0049E58 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004A0C8 (UsbhGetPerformanceInfo.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C004A530 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhWmiDriverEntry @ 0x1C004AC00 (UsbhWmiDriverEntry.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     RtlStringCchPrintfExW @ 0x1C004C3F0 (RtlStringCchPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004C5C0 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhGetBusInterface @ 0x1C004CF30 (UsbhGetBusInterface.c)
 *     UsbhBuildClassCompatibleID @ 0x1C004F94C (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildCompatibleID @ 0x1C004FEC0 (UsbhBuildCompatibleID.c)
 *     UsbhBuildContainerID @ 0x1C0050024 (UsbhBuildContainerID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C00505A0 (UsbhBuildDeviceCompatibleID.c)
 *     UsbhGetLanguageIdString @ 0x1C00510CC (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C00514DC (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00516AC (UsbhGetSerialNumber.c)
 *     UsbhMakeId @ 0x1C0051A64 (UsbhMakeId.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0053650 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0053990 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0054120 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C00552A8 (UsbhGetBosDescriptor.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C0056150 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C00562F0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0056680 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057340 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0057D80 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C0057F80 (UsbhPublishBillboardDetails.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0058228 (UsbhQueryD3ColdSupport.c)
 *     UsbhBuildUxdPnpId @ 0x1C005A6C0 (UsbhBuildUxdPnpId.c)
 *     UsbhCopyPnpString @ 0x1C005A810 (UsbhCopyPnpString.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005AB48 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005B2B0 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryParentHubConfig @ 0x1C005B6A8 (UsbhQueryParentHubConfig.c)
 *     UsbhQueryUxdDevice @ 0x1C005B850 (UsbhQueryUxdDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C005BAE4 (UsbhUpdateUxdSettings.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C00753E4 (wil_StagingConfig_QueryFeatureState.c)
 *     WppTraceCallback @ 0x1C0075780 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
