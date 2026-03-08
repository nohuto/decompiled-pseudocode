/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x140569AAC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset(a1, 0, 0xE8uLL);
}
