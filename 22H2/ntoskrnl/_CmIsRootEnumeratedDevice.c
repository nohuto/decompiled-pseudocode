/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x1406CC130
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBFE4 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796C98 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x14087A6C0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087C44C (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087CBD4 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095C980 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PipResetDevice @ 0x140B95660 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1406D9ED0 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_1400013C8, &DestinationString, 1u);
}
