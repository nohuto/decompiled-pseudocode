/*
 * XREFs of wcschr @ 0x1403D5D90
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14055FD1C (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1405C83D8 (SmUniqueIdParseProductName.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140683BDC (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140687B40 (_RegRtlCreateTreeTransacted.c)
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406D208C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     LocalpConvertStringSidToSid @ 0x14074CCC8 (LocalpConvertStringSidToSid.c)
 *     LocalGetSDDLDeliminator @ 0x140750C60 (LocalGetSDDLDeliminator.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140777284 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14078E658 (_CmGetDeviceInterfaceReferenceString.c)
 *     EtwpGenerateFileName @ 0x14079A7F0 (EtwpGenerateFileName.c)
 *     SepParseElamCertResources @ 0x14081AB7C (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140823CD0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmSplitDevicePanelId @ 0x14082509C (_CmSplitDevicePanelId.c)
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140865414 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140865AB0 (DrvDbGetObjectDatabaseNode.c)
 *     PiSwFindSwDevice @ 0x14086740C (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x14086EE68 (PiNormalizeDeviceText.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408766D8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140878AAC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14095F6CC (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409EFE98 (EtwpCovSampSplitSegments.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A4BB9C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x140A51F28 (AslPathClean.c)
 *     BiDoesHiveKeyExist @ 0x140A59FF0 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x140A5A574 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6832C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A69D68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6AB2C (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140A6ABA4 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140A6AC08 (DrvDbValidateDriverInfFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t v2; // ax
  wchar_t v3; // r8

  v2 = *Str;
  if ( *Str )
  {
    v3 = *Str;
    do
    {
      v2 = v3;
      if ( v3 == Ch )
        break;
      v2 = *++Str;
      v3 = *Str;
    }
    while ( *Str );
  }
  if ( v2 != Ch )
    return 0LL;
  return (wchar_t *)Str;
}
