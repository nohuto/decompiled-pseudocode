/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C000C4DC
 * Callers:
 *     HUBID_BuildDeviceID @ 0x1C001DE14 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C001E034 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x1C001E220 (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001E568 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C001EA90 (HUBID_BuildContainerID.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00783A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x1C007CCB0 (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBPDO_MakePdoName @ 0x1C007EA80 (HUBPDO_MakePdoName.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C00838E4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C0083D24 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C0084444 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C0086DEC (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x1C0087074 (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1C00871F0 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x1C0087684 (HUBREG_DeleteUxdPortKey.c)
 *     HUBREG_OpenPortSubkey @ 0x1C00892DC (HUBREG_OpenPortSubkey.c)
 *     HUBACPI_EvaluateDSD @ 0x1C008A5B8 (HUBACPI_EvaluateDSD.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C008C704 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C008CAD8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C008D8F0 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  NTSTATUS v5; // ebx
  size_t v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v5 = 0;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
    return -1073741811;
  v6 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v7 = _vsnwprintf(DestinationString->Buffer, v6, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
