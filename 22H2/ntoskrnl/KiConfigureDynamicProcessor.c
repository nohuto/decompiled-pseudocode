/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1409AFA20
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140518DD0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14099B1F4 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
