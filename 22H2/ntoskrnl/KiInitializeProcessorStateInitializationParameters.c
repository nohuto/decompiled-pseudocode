/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x14056BF4C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset(a1, 0, 0xE8uLL);
}
