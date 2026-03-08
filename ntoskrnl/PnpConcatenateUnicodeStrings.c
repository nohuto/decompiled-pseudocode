/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140683298
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1402020C0 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x140680FE4 (PiDeviceRegistration.c)
 *     IoGetDeviceDirectory @ 0x1409520A0 (IoGetDeviceDirectory.c)
 *     PiCreateDirectoryPath @ 0x14095272C (PiCreateDirectoryPath.c)
 *     PiCreateRegistryPath @ 0x140952A34 (PiCreateRegistryPath.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409553B0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140683958 (IopAllocateUnicodeString.c)
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
