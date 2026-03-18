/*
 * XREFs of RtlGUIDFromString @ 0x1407814E0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1402012BC (PiDevCfgParsePropertyKeyName.c)
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x140561C2C (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406618A4 (PiDevCfgConvertPropertyFromValue.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x1406E87E8 (PnpIsValidGuidString.c)
 *     PipGenerateContainerID @ 0x1407452A0 (PipGenerateContainerID.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1407772C8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14077A624 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x14077B594 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14077ED0C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x14077F150 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140785B98 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140787558 (_CmGetDeviceInterfaceClassGuid.c)
 *     BiConvertRegistryDataToElement @ 0x14080285C (BiConvertRegistryDataToElement.c)
 *     BiGetObjectIdentifier @ 0x140813500 (BiGetObjectIdentifier.c)
 *     EtwStartAutoLogger @ 0x140817CD8 (EtwStartAutoLogger.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408226C0 (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x140826EF0 (PiDcInitUpdateProperties.c)
 *     WdipSemLoadNextEndEvent @ 0x14083F908 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14083FC00 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14083FE80 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14084028C (WdipSemLoadNextScenario.c)
 *     IoVolumeDeviceNameToGuid @ 0x1409392D0 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140941588 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14094CBE0 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1409CFF00 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DAD00 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1409FD160 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x140A1CC78 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x140A1E6EC (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140A1E890 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A202A4 (BiGetObjectReferenceFromEfiEntry.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140A28700 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x140A295FC (_CmSplitDevicePanelId.c)
 *     PopProcessWakeSourceWork @ 0x140A6B1E0 (PopProcessWakeSourceWork.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x140B0BE8C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B0CCAC (EmpInfParseGetGuidFromName.c)
 *     PipResetDevice @ 0x140B4FCB0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1407815C0 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned int v7; // ecx
  unsigned __int8 *Data4; // rdx
  unsigned __int8 *v9; // r8
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v11 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v11,
                       (char *)&v11 + 2,
                       (char *)&v11 + 4,
                       (char *)&v11 + 6,
                       (char *)&v11 + 8,
                       (char *)&v11 + 10,
                       (char *)&v11 + 12,
                       (char *)&v11 + 14) == -1 )
    return -1073741811;
  v7 = 0;
  Data4 = Guid->Data4;
  v9 = (unsigned __int8 *)&v11;
  do
  {
    ++v7;
    *Data4 = *v9;
    v9 += 2;
    ++Data4;
  }
  while ( v7 < 8 );
  return 0;
}
