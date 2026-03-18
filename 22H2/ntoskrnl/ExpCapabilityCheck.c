/*
 * XREFs of ExpCapabilityCheck @ 0x1409FBAE4
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC894 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *String2)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, String2, &v2) >= 0 && v2 != 0;
}
