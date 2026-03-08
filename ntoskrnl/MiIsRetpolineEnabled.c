/*
 * XREFs of MiIsRetpolineEnabled @ 0x14036905C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiCaptureRetpolineImportInfo @ 0x14076CDAC (MiCaptureRetpolineImportInfo.c)
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1407F5944 (MiCaptureRetpolineRelocationTables.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A31774 (MiMarkKernelImageRetpolineBits.c)
 *     MmGetImageRetpolineCodePage @ 0x140A318F0 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x140AA9B70 (MmMarkHiberPhase.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
