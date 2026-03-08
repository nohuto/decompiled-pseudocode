/*
 * XREFs of WPP_RECORDER_SF_DD @ 0x1C0002668
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0003330 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003694 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003CC0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003E90 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0006A80 (HUBHTX_ClearTtBufferControlTransferComplete.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0007230 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007900 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C0013680 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C00137E0 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPDO_GetHubName @ 0x1C00160D8 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C001624C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0016420 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C001676C (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0016970 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0016D14 (HUBPDO_InitializeInterfaceInformation.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0016F68 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1C001A06C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBDSM_SettingSpeedFlagFor20Devices @ 0x1C0020D10 (HUBDSM_SettingSpeedFlagFor20Devices.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C0021D40 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C00237F0 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025AA0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C00270F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0029900 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B320 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B98C (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BF44 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002C5F0 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002D020 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C002D134 (HUBDTX_LogAlternateMode.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0035BCC (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C0035E5C (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0036484 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C00375E4 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C003802C (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C00383E0 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C003A064 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003A3BC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003AC58 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C003B210 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C003BB04 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BEA8 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x1C003C360 (HUBDESC_InternalValidateStringDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C003CAC4 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x1C003CC74 (HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C003D274 (HUBDESC_Validate20HubDescriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003E79C (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x1C003FFE0 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1C00409D0 (FWUPDATE_HubVendorControlTransferComplete.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00783A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C007B55C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x1C0081350 (HUBPDO_UnregisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C0081794 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x1C0082524 (HUBCONNECTOR_MapRootHubPorts.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1C00895D4 (HUBREG_IsPortPLDRCapable.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0089C6C (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvaluateDSD @ 0x1C008A5B8 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va);
}
