/*
 * XREFs of _CmIsRootDevice @ 0x140789040
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     _CmUpdateDevicePanel @ 0x14076E224 (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceRegPropWorker @ 0x14076FF88 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetDeviceParent @ 0x140788ED4 (_CmGetDeviceParent.c)
 *     _CmSetDeviceMappedProperty @ 0x1407894A8 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14078A748 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140949470 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
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
