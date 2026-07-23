/*
 * XREFs of ZwAddBootEntry @ 0x1403FB2C0
 * Callers:
 *     BiAddBootEntry @ 0x140970318 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
