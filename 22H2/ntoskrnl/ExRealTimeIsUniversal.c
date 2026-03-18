/*
 * XREFs of ExRealTimeIsUniversal @ 0x14033B080
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x1409330C8 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
