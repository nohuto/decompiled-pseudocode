/*
 * XREFs of _CmIsRootDevice @ 0x1406B0B44
 * Callers:
 *     _CmGetDeviceParent @ 0x1406B09D4 (_CmGetDeviceParent.c)
 *     PiCMDeleteDevice @ 0x14072B66C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072ED1C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072EF74 (PiCMDeviceAction.c)
 *     _CmSetDeviceMappedProperty @ 0x14073A544 (_CmSetDeviceMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x140744178 (_CmSetDeviceRegPropWorker.c)
 *     _CmUpdateDevicePanel @ 0x1407476A8 (_CmUpdateDevicePanel.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407687E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A3670 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
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
