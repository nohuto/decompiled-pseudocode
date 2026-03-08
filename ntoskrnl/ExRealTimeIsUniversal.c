/*
 * XREFs of ExRealTimeIsUniversal @ 0x1402D1080
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140930198 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
