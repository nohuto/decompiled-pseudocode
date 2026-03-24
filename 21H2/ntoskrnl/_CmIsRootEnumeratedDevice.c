/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x140639EA8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140639D48 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739C9C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x140739D90 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074578C (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgMigrateDevice @ 0x14076E804 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A4F1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PipResetDevice @ 0x140A90620 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_1400019C8, &DestinationString, 1u);
}
