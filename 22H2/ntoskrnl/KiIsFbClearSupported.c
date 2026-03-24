/*
 * XREFs of KiIsFbClearSupported @ 0x1403F2DB8
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1408BB998 (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x14099CAB0 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
