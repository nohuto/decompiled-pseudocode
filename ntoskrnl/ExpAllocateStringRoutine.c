/*
 * XREFs of ExpAllocateStringRoutine @ 0x140777DB0
 * Callers:
 *     AllocateOrValidateCharStringBuffer @ 0x140303E1C (AllocateOrValidateCharStringBuffer.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x1403051CC (AllocateOrValidateUnicodeStringBuffer.c)
 *     PnpDuplicateUnicodeString @ 0x1403C2368 (PnpDuplicateUnicodeString.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x14040BD88 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x14040BFA8 (RtlpGetPersistedRegistryLocation.c)
 *     RtlpQueryRegistryDirect @ 0x14069E6E4 (RtlpQueryRegistryDirect.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x140733F8C (CmpQueryNameString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140744670 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14081C828 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14081D958 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildIndirectString @ 0x1408748EC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140874BA8 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1408768C0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14095F6CC (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbMountNode @ 0x14096D0E0 (PiDrvDbMountNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x14096DBF4 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14096E128 (PiDrvDbResolveSystemFilePath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAD78 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BF3B0 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409BF4C0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAllocateStringRoutine(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1735554131LL);
}
