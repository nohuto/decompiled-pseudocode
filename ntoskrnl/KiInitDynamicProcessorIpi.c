/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x14056F3D0
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x140A9C7FC (KiConfigureDynamicProcessor.c)
 */

void __noreturn KiInitDynamicProcessorIpi()
{
  KiConfigureDynamicProcessor();
}
