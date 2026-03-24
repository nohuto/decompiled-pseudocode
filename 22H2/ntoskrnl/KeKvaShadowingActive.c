/*
 * XREFs of KeKvaShadowingActive @ 0x1403289B8
 * Callers:
 *     sub_1403EB324 @ 0x1403EB324 (sub_1403EB324.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406C068C (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BB998 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BCCD8 (KeQueryKvaShadowInformation.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
