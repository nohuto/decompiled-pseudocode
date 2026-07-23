/*
 * XREFs of wcschr @ 0x1403D4080
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036D198 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14059D4B0 (SmUniqueIdParseProductName.c)
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14062FB04 (PiPnpRtlGetFilteredDeviceList.c)
 *     _RegRtlCreateTreeTransacted @ 0x140633154 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140633B0C (DrvDbGetObjectDatabaseNode.c)
 *     PiGetDeviceRegProperty @ 0x140634FF8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140635664 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406363FC (_CmGetDeviceRegPropWorker.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140672A48 (DrvDbGetDeviceIdMappedProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072B8B8 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiSwFindSwDevice @ 0x1407390A4 (PiSwFindSwDevice.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14073BD54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1407498E0 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140753AB4 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x140754554 (AslPathClean.c)
 *     PiNormalizeDeviceText @ 0x14076AE00 (PiNormalizeDeviceText.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C43C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 *     LocalGetSDDLDeliminator @ 0x1407880E8 (LocalGetSDDLDeliminator.c)
 *     SepParseElamCertResources @ 0x1407ABC50 (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x1407AC690 (MmCallDllInitialize.c)
 *     _CmSplitDevicePanelId @ 0x1407AFE78 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407B013C (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x1407B80D0 (LocalpConvertStringSidToSid.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E678 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA78C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140945E48 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x14096F9DC (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14096FDC0 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CF8C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x14097E8B4 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14097E92C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097E994 (DrvDbValidateDriverInfFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
