/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x1407454C4
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14036F3E0 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x140748290 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x14089E860 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14089EE44 (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x14089F144 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A17F0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402D3C70 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140745B4C (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString(DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
