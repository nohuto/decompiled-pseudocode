/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x140778D60
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406E5574 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140778C00 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14094AA64 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PipResetDevice @ 0x140B4FCB0 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140002408, &DestinationString, 1u);
}
