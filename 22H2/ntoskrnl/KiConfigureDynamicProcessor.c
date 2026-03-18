/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140A9F93C
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140571A40 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140A8CE10 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
