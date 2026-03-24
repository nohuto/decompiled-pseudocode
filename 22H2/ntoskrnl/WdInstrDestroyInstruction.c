/*
 * XREFs of WdInstrDestroyInstruction @ 0x1404DE51C
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404D4B74 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x1404DE3F4 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
