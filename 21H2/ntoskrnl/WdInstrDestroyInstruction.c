/*
 * XREFs of WdInstrDestroyInstruction @ 0x1404DE81C
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404D4E74 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x1404DE6F4 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
