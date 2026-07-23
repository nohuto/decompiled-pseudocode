/*
 * XREFs of ExpCapabilityCheck @ 0x14094F584
 * Callers:
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950450 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
