/*
 * XREFs of KiRestoreXSaveSupport @ 0x140A9F714
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14056BFE4 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140A8CE10 (KiEnableXSave.c)
 */

void __fastcall KiRestoreXSaveSupport(unsigned __int64 *a1)
{
  KiEnableXSave(a1);
}
