/*
 * XREFs of ExpCapabilityCheck @ 0x1409F8C54
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *String2)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, String2, &v2) >= 0 && v2 != 0;
}
