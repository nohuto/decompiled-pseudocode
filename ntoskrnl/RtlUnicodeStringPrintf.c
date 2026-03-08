/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1403BEBCC
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067C670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     CmSetAcpiHwProfile @ 0x140813CE0 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x140814380 (CmpOpenDevicesControlSet.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14081C828 (PiDrvDbResolveNodeFilePaths.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140842DE4 (SshpGenerateDeviceFriendlyName.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x1408748EC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140874BA8 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1408768C0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PopGetCallerContextFromBuffer @ 0x14097D98C (PopGetCallerContextFromBuffer.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099739C (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x140998320 (PopIdleWakeSystemImageCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140B50B04 (CmpCreateHardwareProfiles.c)
 *     CmpCreateControlSet @ 0x140B5107C (CmpCreateControlSet.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 *     CmpAddAliasEntry @ 0x140B94C88 (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140B94EB4 (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlWideCharArrayVPrintfWorker @ 0x140409F78 (RtlWideCharArrayVPrintfWorker.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx
  size_t v7; // rdx
  NTSTATUS result; // eax
  size_t pcchNewDestLength[3]; // [rsp+30h] [rbp-18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, pszFormat);
  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = DestinationString->Buffer;
  v7 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  pcchNewDestLength[0] = 0LL;
  result = RtlWideCharArrayVPrintfWorker(Buffer, v7, pcchNewDestLength, pszFormat, va);
  DestinationString->Length = 2 * LOWORD(pcchNewDestLength[0]);
  return result;
}
