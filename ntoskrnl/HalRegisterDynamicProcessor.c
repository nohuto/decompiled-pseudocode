/*
 * XREFs of HalRegisterDynamicProcessor @ 0x140504920
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x140502D0C (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
