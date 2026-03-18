/*
 * XREFs of _CmIsRootDevice @ 0x14079A9A8
 * Callers:
 *     _CmUpdateDevicePanel @ 0x14079920C (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x140799F80 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14079A200 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceParent @ 0x14079A844 (_CmGetDeviceParent.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086CE70 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B2E0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14096973C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14096A324 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
