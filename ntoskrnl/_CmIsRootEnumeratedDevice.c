/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x1406CD550
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CD404 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140876040 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140959960 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PipResetDevice @ 0x140B91440 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140001288, &DestinationString, 1u);
}
