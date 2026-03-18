/*
 * XREFs of KeKvaShadowingActive @ 0x140369AB8
 * Callers:
 *     sub_1403F2A8C @ 0x1403F2A8C (sub_1403F2A8C.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076FDF0 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x14097485C (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140975538 (KeQueryKvaShadowInformation.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
