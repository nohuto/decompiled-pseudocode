/*
 * XREFs of WdInstrDestroyInstruction @ 0x14052802C
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14051C944 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x140527F04 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
