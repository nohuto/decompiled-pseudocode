/*
 * XREFs of KiRestoreXSaveSupport @ 0x140A9C5D4
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140569B44 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140A89800 (KiEnableXSave.c)
 */

void __fastcall KiRestoreXSaveSupport(unsigned __int64 *a1)
{
  KiEnableXSave(a1);
}
