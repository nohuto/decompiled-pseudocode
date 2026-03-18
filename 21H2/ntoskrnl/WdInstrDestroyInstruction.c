/*
 * XREFs of WdInstrDestroyInstruction @ 0x14052CC78
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x140521F54 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x14052CB50 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
