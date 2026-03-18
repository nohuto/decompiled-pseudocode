/*
 * XREFs of KiIsFbClearSupported @ 0x1405792F0
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x14097485C (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x140A8E578 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
