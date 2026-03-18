/*
 * XREFs of CmpGetPhaseAccessBit @ 0x140A16944
 * Callers:
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
