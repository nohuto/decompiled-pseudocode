/*
 * XREFs of RtlGUIDFromString @ 0x1406BD650
 * Callers:
 *     RtlQueryPackageClaims @ 0x14024EA60 (RtlQueryPackageClaims.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036C938 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14050E2DC (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E520 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiPnpRtlCmActionCallback @ 0x1406AE700 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406AF0BC (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x1406B020C (PiDmCacheDataDecode.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406B37BC (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406B6CD4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406B7BD8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406B9634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406BA7AC (_CmValidateDeviceInterfaceName.c)
 *     _PnpIsValidGuidString @ 0x1406BDA50 (_PnpIsValidGuidString.c)
 *     IoVolumeDeviceToGuid @ 0x140721590 (IoVolumeDeviceToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140734B3C (PiDevCfgConvertPropertyFromValue.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1407675A0 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14076DBF8 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x140771EF4 (PnpIsValidGuidString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BD90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BiGetObjectIdentifier @ 0x14078469C (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140784CB0 (BiConvertRegistryDataToElement.c)
 *     WdipSemLoadNextEndEvent @ 0x140794284 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140794588 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140794808 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140794C14 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x140796424 (EtwStartAutoLogger.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140797F58 (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x1407A4058 (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x1407B0118 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407B0DF0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     IoVolumeDeviceNameToGuid @ 0x140895870 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C8DC (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E54 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7284 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4730 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x140926AB8 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140930300 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x140950E14 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14096ED5C (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409707D4 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140970978 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972388 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140A45B7C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A469DC (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140A90620 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1406BD730 (ScanHexFormat.c)
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
