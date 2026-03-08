/*
 * XREFs of KeKvaShadowingActive @ 0x1402FE9A0
 * Callers:
 *     sub_1403ED56C @ 0x1403ED56C (sub_1403ED56C.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x14097183C (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140972498 (KeQueryKvaShadowInformation.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
