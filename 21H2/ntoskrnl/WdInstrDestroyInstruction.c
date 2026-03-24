/*
 * XREFs of WdInstrDestroyInstruction @ 0x1404DE5DC
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404D4C34 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x1404DE4B4 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
