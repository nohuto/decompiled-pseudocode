/*
 * XREFs of HalRegisterDynamicProcessor @ 0x140506A00
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x140504DEC (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
