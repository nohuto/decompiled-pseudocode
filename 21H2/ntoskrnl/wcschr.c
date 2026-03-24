/*
 * XREFs of wcschr @ 0x1403D3F10
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036CFE8 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14059D280 (SmUniqueIdParseProductName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14063ACF4 (PiPnpRtlGetFilteredDeviceList.c)
 *     _RegRtlCreateTreeTransacted @ 0x14063E344 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x14063ECFC (DrvDbGetObjectDatabaseNode.c)
 *     PiGetDeviceRegProperty @ 0x1406401E8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x140640854 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406415EC (_CmGetDeviceRegPropWorker.c)
 *     EtwpGenerateFileName @ 0x1406ABAFC (EtwpGenerateFileName.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406C4158 (DrvDbGetDeviceIdMappedProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072B408 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140734EF0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiSwFindSwDevice @ 0x140738EE4 (PiSwFindSwDevice.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14073BB94 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BD08 (PiDevCfgFindDeviceDriver.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140749720 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1407538F4 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x140754394 (AslPathClean.c)
 *     PiNormalizeDeviceText @ 0x14076AC40 (PiNormalizeDeviceText.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C27C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiCreatePartitionDevice @ 0x1407850C0 (BiCreatePartitionDevice.c)
 *     LocalGetSDDLDeliminator @ 0x140787F28 (LocalGetSDDLDeliminator.c)
 *     SepParseElamCertResources @ 0x1407ABA50 (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x1407AC490 (MmCallDllInitialize.c)
 *     _CmSplitDevicePanelId @ 0x1407AFCD8 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407AFF9C (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x1407B7BB0 (LocalpConvertStringSidToSid.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E518 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9A8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA62C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140945C78 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x14096F7FC (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14096FBE0 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDAC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x14097E6D4 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14097E74C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097E7B4 (DrvDbValidateDriverInfFileName.c)
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
