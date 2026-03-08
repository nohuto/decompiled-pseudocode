/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140201E5C
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x140680140 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14068CA08 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x14068E738 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140870310 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140680AE0 (RtlHashUnicodeString.c)
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
