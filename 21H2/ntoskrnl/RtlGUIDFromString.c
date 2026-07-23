/*
 * XREFs of RtlGUIDFromString @ 0x140639680
 * Callers:
 *     RtlQueryPackageClaims @ 0x1402F3940 (RtlQueryPackageClaims.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036D198 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14050E5DC (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E810 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14062B0EC (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x14062C23C (PiDmCacheDataDecode.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x14062F7EC (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140632D04 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140635664 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406367DC (_CmValidateDeviceInterfaceName.c)
 *     _PnpIsValidGuidString @ 0x140639A80 (_PnpIsValidGuidString.c)
 *     IoVolumeDeviceToGuid @ 0x1406F9AC0 (IoVolumeDeviceToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407349AC (PiDevCfgConvertPropertyFromValue.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14076E6E8 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x1407723F4 (PnpIsValidGuidString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077C050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BiGetObjectIdentifier @ 0x14078495C (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140784F70 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14079484C (EtwpEnableAutoLoggerProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407995F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407998F8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140799B78 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140799F84 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 *     PiDcInitUpdateProperties @ 0x1407A3E28 (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x1407AFE78 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B0B50 (_CmDevicePanelEnumSubkeyCallback.c)
 *     IoVolumeDeviceNameToGuid @ 0x140895980 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C9EC (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7394 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4840 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x140926BC8 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140930410 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x140950F94 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14096EEEC (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x140970964 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972518 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140A46B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A479DC (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140A91620 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140639760 (ScanHexFormat.c)
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
