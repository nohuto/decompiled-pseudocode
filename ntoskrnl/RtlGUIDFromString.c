/*
 * XREFs of RtlGUIDFromString @ 0x1406D1AA0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1402983B0 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14055FC84 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14055FD1C (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405AEB80 (RtlRaiseCustomSystemEventTrigger.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     _PnpIsValidGuidString @ 0x1406C5480 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406CB71C (_CmGetDeviceInterfaceClassGuid.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406CE9F8 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x1406D0930 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406D208C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406D3FF0 (_CmValidateDeviceInterfaceName.c)
 *     IoVolumeDeviceToGuid @ 0x14072BB40 (IoVolumeDeviceToGuid.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140777504 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407FD3E8 (EtwpEnableAutoLoggerProvider.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140824470 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmSplitDevicePanelId @ 0x14082509C (_CmSplitDevicePanelId.c)
 *     BiBindEfiEntries @ 0x14082D024 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     BiGetObjectIdentifier @ 0x14082EE3C (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x14082F010 (BiConvertRegistryDataToElement.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14082F354 (BiGetObjectReferenceFromEfiEntry.c)
 *     WdipSemLoadNextEndEvent @ 0x140832620 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140832924 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 *     PiDcInitUpdateProperties @ 0x14084CF78 (PiDcInitUpdateProperties.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140864664 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x14087FB20 (PnpIsValidGuidString.c)
 *     IoVolumeDeviceNameToGuid @ 0x140947B50 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140950328 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14095A774 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095BE90 (PiDevCfgQueryDeviceMigrationNode.c)
 *     SddlpUuidFromString @ 0x1409CFC78 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DB298 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1409FA090 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 *     PopProcessWakeSourceWork @ 0x140A9E248 (PopProcessWakeSourceWork.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B31A9C (VhdAutoAttachVirtualDisks.c)
 *     EmpParseEntryTypes @ 0x140B4D1D4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140B4DFF0 (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140B91440 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1406D1BC0 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned int v7; // r8d
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v12 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       (char *)&v12 + 8,
                       (char *)&v12 + 10,
                       (char *)&v12 + 12,
                       (char *)&v12 + 14) == -1 )
    return -1073741811;
  v7 = 0;
  v8 = &Guid->Data4[1];
  v9 = (unsigned __int8 *)&v12 + 2;
  do
  {
    v7 += 8;
    *(v8 - 1) = *(v9 - 2);
    v8 += 8;
    v10 = *v9;
    v9 += 16;
    *(v8 - 8) = v10;
    *(v8 - 7) = *(v9 - 14);
    *(v8 - 6) = *(v9 - 12);
    *(v8 - 5) = *(v9 - 10);
    *(v8 - 4) = *(v9 - 8);
    *(v8 - 3) = *(v9 - 6);
    *(v8 - 2) = *(v9 - 4);
  }
  while ( v7 < 8 );
  return 0;
}
