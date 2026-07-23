/*
 * XREFs of ZwAddBootEntry @ 0x1403FA760
 * Callers:
 *     BiAddBootEntry @ 0x140970188 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
