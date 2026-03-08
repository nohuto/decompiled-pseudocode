/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x140377E60
 * Callers:
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C62128 != 0;
}
