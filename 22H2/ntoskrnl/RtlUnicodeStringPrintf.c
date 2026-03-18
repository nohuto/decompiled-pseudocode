/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1403C448C
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140814158 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140845C24 (SshpGenerateDeviceFriendlyName.c)
 *     CmSetAcpiHwProfile @ 0x14084B574 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14084BC14 (CmpOpenDevicesControlSet.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14087BCA4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BF60 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087CDFC (PiDevCfgBuildDriverNodeStrongName.c)
 *     PopGetCallerContextFromBuffer @ 0x140980A3C (PopGetCallerContextFromBuffer.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099A44C (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x14099B3D0 (PopIdleWakeSystemImageCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     IopStoreBootDriveLetter @ 0x140B3CE40 (IopStoreBootDriveLetter.c)
 *     CmpCreateHardwareProfiles @ 0x140B679AC (CmpCreateHardwareProfiles.c)
 *     CmpCreateControlSet @ 0x140B71258 (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140B98E98 (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140B990C4 (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlWideCharArrayVPrintfWorker @ 0x14040F474 (RtlWideCharArrayVPrintfWorker.c)
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
