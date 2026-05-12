/*
 * XREFs of PortReadRegistrySettings @ 0x1C007C8E4
 * Callers:
 *     PortGetRegistrySettings @ 0x1C007C74C (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C007CE5C (PortpReadMaximumLogicalUnitEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C007CF08 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C007CFB8 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C007D074 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C007D12C (PortpReadUncachedExtAlignmentEntry.c)
 */

__int64 __fastcall PortReadRegistrySettings(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  PortpReadMaximumLogicalUnitEntry(KeyHandle, KeyValueInformation);
  PortpReadMaximumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadMinimumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadNumberOfRequestsEntry(KeyHandle, KeyValueInformation);
  return PortpReadUncachedExtAlignmentEntry(KeyHandle, KeyValueInformation);
}
