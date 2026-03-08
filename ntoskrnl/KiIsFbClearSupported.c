/*
 * XREFs of KiIsFbClearSupported @ 0x140576DE0
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x14097183C (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x140A8AF68 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
