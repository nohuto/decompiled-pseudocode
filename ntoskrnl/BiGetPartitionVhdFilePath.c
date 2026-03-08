/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140830098
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408300C8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
