/*
 * XREFs of ExRealTimeIsUniversal @ 0x14030D030
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140864104 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
