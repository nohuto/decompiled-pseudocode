/*
 * XREFs of RtlGUIDFromString @ 0x140644870
 * Callers:
 *     RtlQueryPackageClaims @ 0x14024F0F0 (RtlQueryPackageClaims.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036CFE8 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14050E39C (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E5E0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406362DC (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x14063742C (PiDmCacheDataDecode.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x14063A9DC (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14063C7AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14063DEF4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14063EDF8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140640854 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406419CC (_CmValidateDeviceInterfaceName.c)
 *     _PnpIsValidGuidString @ 0x140644C70 (_PnpIsValidGuidString.c)
 *     IoVolumeDeviceToGuid @ 0x1407221C0 (IoVolumeDeviceToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407347EC (PiDevCfgConvertPropertyFromValue.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140767F80 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14076E528 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x140772234 (PnpIsValidGuidString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BE90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BiGetObjectIdentifier @ 0x14078479C (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140784DB0 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407949F4 (EtwpEnableAutoLoggerProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407993F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407996F8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140799978 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140799D84 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14079B594 (EtwStartAutoLogger.c)
 *     PiDcInitUpdateProperties @ 0x1407A3C28 (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x1407AFCD8 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B09B0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     IoVolumeDeviceNameToGuid @ 0x140895820 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C88C (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7234 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x140926A68 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409302B0 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x140950DC4 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14096ED0C (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x140970784 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140970928 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972338 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140A45B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A469DC (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140A90620 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140644950 (ScanHexFormat.c)
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
