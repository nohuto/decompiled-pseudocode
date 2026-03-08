/*
 * XREFs of CmpGetPhaseAccessBit @ 0x140A13BF4
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
