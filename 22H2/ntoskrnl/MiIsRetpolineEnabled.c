/*
 * XREFs of MiIsRetpolineEnabled @ 0x14020EBC0
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079DBF8 (MiCaptureRetpolineImportInfo.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A344A4 (MiMarkKernelImageRetpolineBits.c)
 *     MmGetImageRetpolineCodePage @ 0x140A34620 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 *     MmMarkHiberPhase @ 0x140AACDA0 (MmMarkHiberPhase.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
