/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14031CCD8
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E900 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleRegistration @ 0x14077FBAC (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783A54 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872830 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1406D94E0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
