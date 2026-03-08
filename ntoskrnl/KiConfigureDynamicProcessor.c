/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140A9C7FC
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x14056F3D0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140A89800 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
