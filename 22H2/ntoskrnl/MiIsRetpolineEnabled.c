/*
 * XREFs of MiIsRetpolineEnabled @ 0x1402F3630
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x140662620 (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x140662858 (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiFinalizeImageRetpolineState @ 0x14075C478 (MiFinalizeImageRetpolineState.c)
 *     MiCaptureRetpolineImportInfo @ 0x14077DC4C (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407CDAC0 (MmGetImageRetpolineCodePage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0CB8 (MiMarkKernelImageRetpolineBits.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x1409B075C (MmMarkHiberPhase.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
