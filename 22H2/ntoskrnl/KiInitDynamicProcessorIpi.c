/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x140571A40
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x140A9F93C (KiConfigureDynamicProcessor.c)
 */

void __noreturn KiInitDynamicProcessorIpi()
{
  KiConfigureDynamicProcessor();
}
