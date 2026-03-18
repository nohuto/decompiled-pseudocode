/*
 * XREFs of wcschr @ 0x1403E32C0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1402012BC (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1405FACB4 (SmUniqueIdParseProductName.c)
 *     LocalGetSDDLDeliminator @ 0x1406C4594 (LocalGetSDDLDeliminator.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406DBB10 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406DCD40 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiNormalizeDeviceText @ 0x1406E1D34 (PiNormalizeDeviceText.c)
 *     PiDevCfgFindDeviceDriver @ 0x1407449E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407455A8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1407473E8 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiSwFindSwDevice @ 0x140767130 (PiSwFindSwDevice.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1407697FC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140772B6C (_RegRtlCreateTreeTransacted.c)
 *     PiGetDeviceRegProperty @ 0x1407741A4 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14077CF10 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14077ED0C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140784454 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140785234 (DrvDbGetDeviceIdMappedProperty.c)
 *     EtwpGenerateFileName @ 0x1407FC710 (EtwpGenerateFileName.c)
 *     BiCreatePartitionDevice @ 0x14080397C (BiCreatePartitionDevice.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140805024 (PiDevCfgResolveVariableKeyHandle.c)
 *     SepParseElamCertResources @ 0x14082E2BC (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14083DA50 (_CmGetMatchingDeviceListForSubkey.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     LocalpConvertStringSidToSid @ 0x140843D74 (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x140943248 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14094E74C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409F21D0 (EtwpCovSampSplitSegments.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A10AD0 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x140A15610 (AslPathClean.c)
 *     BiDoesHiveKeyExist @ 0x140A1D75C (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x140A1DB40 (BiCreateFileDeviceElement.c)
 *     _CmSplitDevicePanelId @ 0x140A295FC (_CmSplitDevicePanelId.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2DB88 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A2F5D0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140A3037C (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140A303F4 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140A30458 (DrvDbValidateDriverInfFileName.c)
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
