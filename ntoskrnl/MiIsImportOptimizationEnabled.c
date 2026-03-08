/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x140369044
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14076CCAC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MmHasImageBeenImportOptimized @ 0x1407F72B8 (MmHasImageBeenImportOptimized.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     VfUtilIsProtectedDriver @ 0x140ABF7CC (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x40000000000LL) != 0;
}
