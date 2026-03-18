/*
 * XREFs of ExpAllocateStringRoutine @ 0x1407C7520
 * Callers:
 *     AllocateOrValidateCharStringBuffer @ 0x1402F768C (AllocateOrValidateCharStringBuffer.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316B1C (AllocateOrValidateUnicodeStringBuffer.c)
 *     PnpDuplicateUnicodeString @ 0x1403CD820 (PnpDuplicateUnicodeString.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411118 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411338 (RtlpGetPersistedRegistryLocation.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B7570 (RtlDuplicateUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1407D2028 (RtlpQueryRegistryDirect.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EF528 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FB180 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x1407FB710 (RtlCreateUnicodeString.c)
 *     PiDrvDbSetupNodeHive @ 0x140813EF8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140814158 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140815288 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408156A0 (PiDrvDbQuerySystemPathWin32.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086D134 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildIndirectString @ 0x14087BCA4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BF60 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087CDFC (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgAppendMultiSz @ 0x14095C6E4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1409626EC (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbMountNode @ 0x140970100 (PiDrvDbMountNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970C14 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971148 (PiDrvDbResolveSystemFilePath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDDA8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C23E0 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409C24F0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAllocateStringRoutine(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1735554131LL);
}
