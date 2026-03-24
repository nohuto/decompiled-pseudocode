/*
 * XREFs of KiRestoreXSaveSupport @ 0x14099503C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140383DBC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14099B1F4 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
