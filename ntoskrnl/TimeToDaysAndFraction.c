/*
 * XREFs of TimeToDaysAndFraction @ 0x1402D178C
 * Callers:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1402D15A4 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 *     RtlTimeToElapsedTimeFields @ 0x1409B5F60 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     RtlExtendedMagicDivide @ 0x1402D17E4 (RtlExtendedMagicDivide.c)
 */

LARGE_INTEGER __fastcall TimeToDaysAndFraction(LARGE_INTEGER *a1, ULONG *a2, _DWORD *a3)
{
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER result; // rax
  int v7; // r11d

  v5 = RtlExtendedMagicDivide(*a1, Magic10000, 13);
  result = RtlExtendedMagicDivide(v5, Magic86400000, 26);
  *a2 = result.LowPart;
  *a3 = v7 - 86400000 * result.LowPart;
  return result;
}
