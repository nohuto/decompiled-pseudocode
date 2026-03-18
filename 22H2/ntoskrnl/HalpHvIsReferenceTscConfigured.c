/*
 * XREFs of HalpHvIsReferenceTscConfigured @ 0x14037B810
 * Callers:
 *     HalpPostSleepMP @ 0x140A97068 (HalpPostSleepMP.c)
 * Callees:
 *     <none>
 */

bool HalpHvIsReferenceTscConfigured()
{
  return qword_140C62588 != 0;
}
