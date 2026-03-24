/*
 * XREFs of wcschr @ 0x1403D3810
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036C938 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14059D1C0 (SmUniqueIdParseProductName.c)
 *     EtwpGenerateFileName @ 0x14068EAAC (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406B3AD4 (PiPnpRtlGetFilteredDeviceList.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406B7124 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406B7ADC (DrvDbGetObjectDatabaseNode.c)
 *     PiGetDeviceRegProperty @ 0x1406B8FC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406B9634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406BA3CC (_CmGetDeviceRegPropWorker.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F9718 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407285CC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072C2C8 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14073803C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407381B0 (PiDevCfgFindDeviceDriver.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140745BC0 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiSwFindSwDevice @ 0x14074BD68 (PiSwFindSwDevice.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1407530E4 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x140753B84 (AslPathClean.c)
 *     PiNormalizeDeviceText @ 0x14076A260 (PiNormalizeDeviceText.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076BA48 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiCreatePartitionDevice @ 0x140784FC0 (BiCreatePartitionDevice.c)
 *     LocalGetSDDLDeliminator @ 0x140787E28 (LocalGetSDDLDeliminator.c)
 *     SepParseElamCertResources @ 0x1407ABE90 (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x1407AC8D0 (MmCallDllInitialize.c)
 *     _CmSplitDevicePanelId @ 0x1407B0118 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407B03DC (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x1407B8370 (LocalpConvertStringSidToSid.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E568 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9ADC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA67C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140945CC8 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x14096F84C (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14096FC30 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDFC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x14097E724 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14097E79C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097E804 (DrvDbValidateDriverInfFileName.c)
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
