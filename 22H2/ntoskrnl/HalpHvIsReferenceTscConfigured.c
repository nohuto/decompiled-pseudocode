/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x1403A703C
 * Callers:
 *     HaliAcpiSleep @ 0x140385840 (HaliAcpiSleep.c)
 *     HalpPostSleepMP @ 0x140995854 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C4A208 != 0;
}
