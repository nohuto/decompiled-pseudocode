/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140793B34
 * Callers:
 *     IoGetDeviceInstanceName @ 0x140321B38 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1407CFB4C (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x1409550C0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14095574C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x140955A54 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409583D0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AEFA0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1407941E8 (IopAllocateUnicodeString.c)
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
